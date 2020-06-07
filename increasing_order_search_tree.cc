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
 
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void populate(TreeNode* root, vector<int>& v) {
    if (root) {
        populate(root->left, v);
        v.emplace_back(root->val);
        populate(root->right, v);
    }
}
TreeNode* increasingBST(TreeNode* root) {
    vector<int> v;
    populate(root, v);
    TreeNode* curr = root;
    for (int x : v) {
        if (curr == NULL) {
            curr = new TreeNode();
        }
        curr->val = x;
        curr->left = NULL;
        curr = curr->right;
    }
    return root;
}