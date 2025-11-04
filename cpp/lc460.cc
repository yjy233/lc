#include <iostream>
#include<list>
using namespace std;

struct KVPair{
    int key;
    int val;
    int cnt;
};

class LFUCache {
public:
    int Capacity;
    int Size;  

    unordered_map<int, list<KVPair*>::iterator> KV;
    vector<list<KVPair*>> CntList; 
    LFUCache(int capacity) {
        Capacity = capacity;
        Size = 0;
        
        CntList.emplace_back(list<KVPair*> {});
    }
    
    int get(int key) {
          cout<<"[[[[fwfewf "<<key<<endl;
        // 不在
        auto iteroter = KV.find(key);
        if (iteroter == KV.end()){
            return -1;
        }

        cout<<"fwfewf "<<key<<endl;

        list<KVPair*>::iterator pairPtr = KV[key];
       
        int res = (*pairPtr)->val;

        auto kvPair = *pairPtr;
        CntList[(*pairPtr)->cnt].erase(pairPtr);

        kvPair->cnt++;
        while (kvPair->cnt >= CntList.size()) {
            CntList.emplace_back(list<KVPair*> {});
        }

        CntList[kvPair->cnt].push_front(kvPair);
        KV[key] = CntList[kvPair->cnt].begin();
        return res;
    }
    
    void put(int key, int value) {
        // 原来就在
        if (KV.find(key) != KV.end()) {
            int cnt = (*(KV.find(key)->second))->cnt;
            CntList[cnt].erase(KV.find(key)->second);
            KV.erase(KV.find(key));
            Size--;
        }
        

        if (Size >= Capacity) {
            for(int i = 0;i<CntList.size();i++) {
                if (CntList[i].size() <= 0) {
                    continue;
                }

                KVPair* oldElem = CntList[i].back();
                int oldkey = oldElem->key;
                CntList[i].pop_back();
                KV.erase(KV.find(oldkey));
                cout<<"oldkye "<<oldkey<<endl;
                break;
            }

            Size--;
        }

        cout<<"key val "<<key<<" "<<value<<endl;
        KVPair* newElem = new KVPair;
        newElem->cnt = 0;
        newElem->key = key;
        newElem->val = value;

        CntList[0].push_front(newElem);
        cout<<"new key"<<key<<endl;
        KV[key] = CntList[0].begin();
        
        Size++;
    }
};
