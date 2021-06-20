//
// Created by Peixiao on 2021/6/20.
//

#ifndef DATA_STRUCTURE_LFU_H
#define DATA_STRUCTURE_LFU_H

#endif //DATA_STRUCTURE_LFU_H

#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Node{
public:
    Node* prev;
    Node* next;
    int freq;
    unordered_map<int, list<int>::iterator> KeyMap;
    list<int> KeyList;

    Node(int freq, int key, Node* prev, Node* next){
        this->freq = freq;
        this->prev = prev;
        this->next = next;
        KeyList.push_front(key);
        KeyMap[key] = KeyList.begin();
    }
};

class LFUCache{
    Node *head = new Node(0, 0, nullptr, nullptr);
    unordered_map<int, int> valueMap;
    unordered_map<int, Node*> nodeMap;
    int _size;

private:
    void removeKeyFromNode(Node* node, int key){
        auto iter = node->KeyMap[key];
        node->KeyList.erase(iter);
        node->KeyMap.erase(key);
        if(node->freq != 0 && node->KeyMap.empty()){
            removeNode(node);
        }
    }

    void insertKeyToNode(Node* node, int key){
        node->KeyList.push_front(key);
        node->KeyMap[key] = node->KeyList.begin();
    }

    void updateKey(int key){
        Node *node = nodeMap[key];
        if (node->next == nullptr || node->next->freq > node->freq + 1) {
            Node *tmp = new Node(node->freq + 1, key, node, node->next);
            if (node->next) {
                node->next->prev = tmp;
            }
            node->next = tmp;
        }
        else{
            insertKeyToNode(node->next, key);
        }
        nodeMap[key] = node->next;
        removeKeyFromNode(node, key);
    }

    void popOldNode(){
        auto tmp = head->next;
        if (tmp == nullptr) {
            return;
        }
        int n = tmp->KeyList.back();
        nodeMap.erase(n);
        valueMap.erase(n);
        removeKeyFromNode(tmp, n);
    }

    void removeNode(Node *node){
        if (node == nullptr) {
            return;
        }
        if (node->prev == nullptr) {
            node = node->next;
        } else{
            node->prev->next = node->next;
        }
        if (node->next != nullptr) {
            node->next->prev = node->prev;
        }
    }

public:
    LFUCache(int capacity) {
        this->_size = capacity;
        removeKeyFromNode(head, 0);
    }

    int get(int key) {
        if (valueMap.find(key) == valueMap.end()) {
            return -1;
        }
        updateKey(key);
        return valueMap[key];
    }

    void put(int key, int value) {
        if (_size <= 0) {
            return;
        }
        if (valueMap.find(key) != valueMap.end()) {
            valueMap[key] = value;
        } else{
            if (valueMap.size() == _size) {
                popOldNode();
            }
            valueMap[key] = value;
            insertKeyToNode(head, key);
            nodeMap[key] = head;
        }
        updateKey(key);
    }
};