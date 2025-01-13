//
// Created by LuoFan  on 2019-12-19.
//

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>

struct TreeNode{
    std::string name;
    int id = -1;
    TreeNode* lChild = nullptr;
    TreeNode* rChild = nullptr;
    TreeNode* father = nullptr;
    float lDist = 0.0;
    float rDist = 0.0;
    float fDist = 0.0;
    bool cFlag;
};

struct Table{
    int fid;
    int bid
    float dist;
};

class Parser{
private:
    TreeNode tree;
    int treeSize;
    std::unordered_map<std::string,int> label;
    void ParseOne(const std::string& newick,int &index,int end,TreeNode &node,int mod);
    void NameTravel(TreeNode& node,int &ID);
    void GenTable(TreeNode &node);
    Table *table;
public:
    Parser(std::string newickTree,int mod=0);
    Table* getTable();
    std::vector<Table> transfer();
};
