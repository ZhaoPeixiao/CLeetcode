//
// Created by Peixiao on 2021/6/20.
//

#ifndef DATA_STRUCTURE_LEETCODE146_H
#define DATA_STRUCTURE_LEETCODE146_H

#endif //DATA_STRUCTURE_LEETCODE146_H

#include "header.h"


class LRUCache {
    size_t m_capacity;
    unordered_map<int, list<pair<int, int>>::iterator> m_map;
    list<pair<int, int>> m_list;

public:
    LRUCache(int capacity):m_capacity(capacity) {

    }

    int get(int key) {
        auto found_key = m_map.find(key);
        if (found_key == m_map.end()) {
            return -1;
        }
        m_list.splice(m_list.begin(), m_list, found_key->second);
        return found_key->second->second;
    }

    void put(int key, int value) {
        auto found_key = m_map.find(key);
        if (found_key != m_map.end()) {
            m_list.splice(m_list.begin(), m_list, found_key->second);
            found_key->second->second = value;
            return;
        }
        if (m_map.size() == m_capacity) {
            int key_to_del = m_list.back().first;
            m_list.pop_back();
            m_map.erase(key_to_del);
        }
        m_list.emplace_front(key, value);
        m_map[key] = m_list.begin();
    }
};