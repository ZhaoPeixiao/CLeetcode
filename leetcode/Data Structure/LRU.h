//
// Created by Peixiao on 2021/6/20.
//

#ifndef DATA_STRUCTURE_LRU_H
#define DATA_STRUCTURE_LRU_H

#endif //DATA_STRUCTURE_LRU_H

#include <iostream>
#include <map>
using namespace std;

class Node{
public:
    int key, val;
    Node* next;
    Node* prev;

public:
    Node(int k, int v): key(k), val(v), next(nullptr), prev(nullptr) {}
};

class DoubleList{
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoubleList(){
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
        this->size = 0;
    }

    void addLast(Node *node){
        node->prev = tail->prev;
        node->next = tail;
        tail->prev->next = node;
        tail->prev = node;
        this->size++;
    }

    void remove(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
        this->size--;
    }

    Node* removeFirst(){
        if (head->next == tail) {
            return nullptr;
        }
        Node* first = head->next;
        remove(first);
        return first;
    }

    int getSize(){
        return this->size;
    }

};


class LRUCache{
private:
    map<int, Node*> map;
    DoubleList cache;
    int capacity;

public:
    LRUCache(int capacity){
        this->capacity = capacity;
    }

private:
    void makeRecently(int key){
        Node *node = map[key];
        if (node == nullptr) {
            return;
        }
        cache.remove(node);
        cache.addLast(node);
    }

    void addRecently(int key, int val){
        Node *node = new Node(key, val);
        cache.addLast(node);
        map[key] = node;
    }

    void deleteKey(int key){
        Node *node = map[key];
        if (node == nullptr) {
            return;
        }
        cache.remove(node);
        map.erase(key);
    }

    void removeLeastRecently(){
        Node *deletedNode = cache.removeFirst();
        int deletedKet = deletedNode->key;
        map.erase(deletedKet);
    }

public:
    int get(int key){
        if (map.find(key) == map.end()) {
            return -1;
        }
        makeRecently(key);
        return map[key]->val;
    }

    void put(int key, int val){
        if(map.find(key) != map.end()){
            deleteKey(key);
            addRecently(key, val);
            return;
        }

        if (capacity == cache.getSize()) {
            removeLeastRecently();
        }
        addRecently(key, val);
    }

};
