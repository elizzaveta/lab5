#pragma once
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class TreeNode {

};

class StList : public TreeNode {
public:
	vector<TreeNode> children;
};

class MathNode :public TreeNode {
public:
	TreeNode* left;
	TreeNode* right;
	char value;
};


class Node : public TreeNode {
public:
	string data;
};
