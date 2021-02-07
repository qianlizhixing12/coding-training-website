#include <vector>
#include <iostream>

using namespace std;

class Node {
public:
  int val;
  vector<Node *> children;

  Node() {}

  Node(int _val) { val = _val; }

  Node(int _val, vector<Node *> _children) {
    val = _val;
    children = _children;
  }
};

class Solution {
public:
  int maxDepth(Node *root) {
    if (root == nullptr) {
      return 0;
    }
    int depth = 0;
    for (Node *node : root->children) {
      depth = max(depth, maxDepth(node));
    }
    return depth + 1;
  }
};