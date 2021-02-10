#include <cmath>
#include <algorithm>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
private:
  int dfs(TreeNode *root, int &ans) {
    if (root == nullptr) {
      return 0;
    }
    int l = dfs(root->left, ans);
    int r = dfs(root->right, ans);
    ans += abs(l) + abs(r);
    return l + r + root->val - 1;
  }

public:
  int distributeCoins(TreeNode *root) {
    int ans = 0;
    dfs(root, ans);
    return ans;
  }
};