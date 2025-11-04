#include<iostream>
#include<list>

using namespace std;

struct KV {
    int key;
    int val;
};
class LRUCache {
public:
    int Size;
    int Capcipty;

    unordered_map<int, list<KV*>::iterator> K2Elem;
    list<KV*> ElemList;
    LRUCache(int capacity) {
        Capcipty = capacity;
    }
    
    int get(int key) {
        auto iterator = K2Elem.find(key);
        if (iterator == K2Elem.end()) return -1;

        KV* kvPair = *(iterator->second);
        ElemList.erase(iterator->second);

        ElemList.push_front(kvPair);
        K2Elem[key] = ElemList.begin();

        return kvPair->val;
    }
    
    void put(int key, int value) {
        // 在了
        auto iterator = K2Elem.find(key);
        if (iterator != K2Elem.end()) {
            list<KV*>::iterator listItertor = iterator->second;
            ElemList.erase(listItertor);
            K2Elem.erase(iterator);
            Size--;
        }

        if (Size >= Capcipty) {
            KV* oldElem = ElemList.back();
            ElemList.pop_back();
            K2Elem.erase(K2Elem.find(oldElem->key));

            Size--;
        }

        KV* kv = new KV;
        kv->key = key;
        kv->val = value;

        ElemList.push_front(kv);
        K2Elem[key] = ElemList.begin();
        Size++;
    }
};


int main(){
    unordered_map<int, list<KV*>::iterator> t;
}
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */