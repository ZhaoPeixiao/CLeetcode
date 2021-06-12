//
// Created by Peixiao on 2021/6/12.
//

#ifndef GRAPH_LEETCODE797_H
#define GRAPH_LEETCODE797_H

#endif //GRAPH_LEETCODE797_H

#pragma once
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> res;
int target;

void dfs(vector<vector<int>>& graph, int node, vector<int> path){
    if (node == target) {
        path.push_back(node);
        res.push_back(path);
        return;
    }

    path.push_back(node);
    for(int i = 0; i < graph[node].size(); i++){
        dfs(graph, graph[node][i], path);
    }
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<int> path;
    target = graph.size() - 1;
    dfs(graph, 0, path);
    return res;
}