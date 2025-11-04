#include<list>
#include<unordered_map>

using namespace std;


struct KV{
    int Key;
    int Val;
};


class LRUCache {
public:
    int size;
    int capacity;
    unordered_map<int,list<KV*>::iterator> map;
    list<KV*> kvList;

    LRUCache(int capacity) {
        this->capacity = capacity;
        this->size = 0;
    }
    
    int get(int key) {
        auto iter = map.find(key);
        // 找不到
        if (iter == map.end()) return -1;

        list<KV*>::iterator kvIter = iter->second;
        KV* kvPtr = *kvIter;

        kvList.erase(kvIter);
        kvList.push_front(kvPtr);
        map[key] = kvList.begin();
        return kvPtr->Val;
    }
    
    void put(int key, int value) {
         auto iter = map.find(key);
        // 原来
        if (iter != map.end()) {
            list<KV*>::iterator kvIter = iter->second;
            KV* kvPtr = *kvIter;
            kvList.erase(kvIter);
            kvList.push_front(kvPtr);
            map[key] = kvList.begin();
            kvPtr->Val = value;
            return;
        }

        while (size>=capacity) {
            KV* kvPtr = kvList.back();
            kvList.pop_back();
            map.erase(map.find(kvPtr->Key));
            delete kvPtr;
            size--;
        }

        KV* kvPtr = new KV;
        kvPtr->Key = key;
        kvPtr->Val = value;
        kvList.push_front(kvPtr);
        map[key] = kvList.begin();
        
        size++;
    }
};
