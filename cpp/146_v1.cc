#include <unordered_map>
#include<list>

using namespace std;


struct KV{
    int Key;
    int Val;
};
class LRUCache {
public:
    
    unordered_map<int, list<KV*>::iterator> m;
    list<KV*> l;
    int size;
    int cap;

    LRUCache(int capacity) {
        cap = capacity;
        size = 0;
    }
    
    int get(int key) {
        auto oldMIter = m.find(key);
        if (oldMIter == m.end()) {
            return -1;
        }

        list<KV*>::iterator oldLIter = oldMIter->second;
        KV* oldKV = *oldLIter;

        l.erase(oldLIter);
        l.push_front(oldKV);
        m[key] = l.begin();
    }
    
    void put(int key, int value) {
        // 在里面
        auto oldMIter = m.find(key);
        if (oldMIter != m.end()){
            list<KV*>::iterator oldLIter = oldMIter->second;
            KV* oldKV = *oldLIter;

            l.erase(oldLIter);
            oldKV->Val = value;

            l.push_front(oldKV);
            m[key] = l.begin();
            
            return;
        }

        if (size >= cap) {

            KV* oldKV = l.back();
            l.pop_back();
            int oldKey = oldKV->Key;
            m.erase(m.find(oldKey));
            delete oldKV;

            size--;
        }   

        KV* newKV = new KV;
        newKV->Key = key;
        newKV->Val = value;

        l.push_front(newKV);
        m[key] = l.begin();

        size++;
    }
};