//
// Created by Peixiao on 2021/6/20.
//

#ifndef DATA_STRUCTURE_LEETCODE460_H
#define DATA_STRUCTURE_LEETCODE460_H

#endif //DATA_STRUCTURE_LEETCODE460_H


#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class LFUCache {
private:
    struct CacheData {
        int value;
        list<pair<int,list<int>>>::iterator out_it;
        list<int>::iterator in_it;
    };
    unordered_map<int,CacheData> cache;
    list<pair<int,list<int>>> order;
    // outer list: from most frequent to least freuent
    // inner list: indexed by frequency; from most recent to least recent
    int cap;

    void update_freq(int key) {
        auto& out_it = cache[key].out_it;
        auto v = out_it->first;
        out_it->second.erase(cache[key].in_it);
        if (out_it->second.empty())
            out_it = order.erase(out_it);
        else ++out_it;
        if (out_it == order.end() || out_it->first != v+1)
            out_it = order.insert(out_it, {v+1, {key}});
        else out_it->second.push_front(key);
        cache[key].in_it = out_it->second.begin();
    }

public:
    LFUCache(int capacity) {
        cap = capacity;
        cache.reserve(capacity);
    }

    int get(int key) {
        if (cache.count(key)) {
            update_freq(key);
            return cache[key].value;
        }
        return -1;
    }

    void put(int key, int value) {
        if (cache.count(key)) {
            update_freq(key);
            cache[key].value = value;
            return;
        }
        if (cap == 0) return;
        if (cache.size() == cap) {
            auto it = order.begin(); // least frequently visited
            cache.erase(it->second.back()); // least recently visited
            it->second.pop_back();
            if (it->second.empty())
                order.erase(it);
        }
        if (order.empty() || order.front().first > 1) {
            order.push_front({1,{key}});
        } else order.front().second.push_front(key);
        cache[key] = {value, order.begin(), order.front().second.begin()};
    }
};