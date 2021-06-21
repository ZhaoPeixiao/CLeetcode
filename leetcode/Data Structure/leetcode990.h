//
// Created by Peixiao on 2021/6/19.
//

#ifndef DATA_STRUCTURE_LEETCODE990_H
#define DATA_STRUCTURE_LEETCODE990_H

#endif //DATA_STRUCTURE_LEETCODE990_H


#include "header.h"

class Solution {
public:
    int getRoot(int x, vector<int> &root){
        while (x != root[x]) {
            root[x] = root[root[x]];
            x = root[x];
        }
        return x;
    }

    void unionn(int a, int b, vector<int>& root, vector<int>& size){
        int rootA = getRoot(a, root);
        int rootB = getRoot(b, root);
        if (rootA == rootB) {
            return;
        }
        if (size[rootA] > size[rootB]) {
            root[rootB] = rootA;
            size[rootA] += size[rootB];
        }else{
            root[rootA] = rootB;
            size[rootB] += size[rootA];
        }
    }

    bool equationsPossible(vector<string>& equations) {
        vector<int> root(26, 0);
        vector<int> size(26, 1);
        for (int i = 0; i < 26; i++) {
            root[i] = i;
        }
        for (int i = 0; i < equations.size(); i++) {
            if (equations[i][1] == '!') {
                continue;
            }
            unionn(equations[i][0] - 'a', equations[i][3] - 'a', root, size);
        }

        for (int i = 0; i < equations.size(); i++) {
            if (equations[i][1] == '=') {
                continue;
            }
            if (getRoot(equations[i][0] - 'a', root) == getRoot(equations[i][3] - 'a', root)) {
                return false;
            }
        }

        return true;

    }
};