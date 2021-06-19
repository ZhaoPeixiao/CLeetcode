//
// Created by Peixiao on 2021/6/19.
//

#ifndef DATA_STRUCTURE_UNIONFIND_H
#define DATA_STRUCTURE_UNIONFIND_H

#endif //DATA_STRUCTURE_UNIONFIND_H


class UF{
private:
    int count;
    int parent[];
    int size[];

    int find(int x){
        while (parent[x] != x) {
            parent[x] = parent[parent[x]];
            x = parent[x];
        }
        return x;
    }

public:
    UF(int n){
        this->count = n;
        parent = new int[n];
        size = new int[n];
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    void union(int p, int q){
        int rootP = find(p);
        int rootQ = find(q);
        if (rootP == rootQ) {
            return;
        }
        if(size[rootP] > size[rootQ]) {
            parent[rootQ] = rootP;
            size[rootP] += size[rootQ];
        }else{
            parent[rootP] = rootQ;
            size[rootQ] += size[rootP];
        }
        this->count --;
    }

    bool connected(int p, int q){
        int rootP = find(p);
        int rootQ = find(q);
        return rootP == rootQ;
    }

    int count(){
        return this->count;
    }
};