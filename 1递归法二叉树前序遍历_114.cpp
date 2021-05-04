/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
  std::vector<int> result {};
  std::vector<int> preorderTraversal(TreeNode* root) {
    if (root == NULL)
      return result;
    else {
      result.push_back(root->value);
      preorderTraversal(root->left);
      preorderTraversal(root->right);
    }
    return result;
  }
};
