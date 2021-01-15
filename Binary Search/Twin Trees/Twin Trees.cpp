/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void fill(Tree* root, string& v) {
    if (root == NULL) return;
    fill(root->left, v);
    v.push_back(root->val);
    fill(root->right, v);
}
bool solve(Tree* root0, Tree* root1) {
    string v0, v1;
    fill(root0, v0);
    fill(root1, v1);
    if (v0 == v1) return 1;
    return 0;
}