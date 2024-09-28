/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void downDfs(struct TreeNode* root, int k, int* i, int* tab){
    if(root->left != NULL){
        downDfs(root->left, k, i, tab);
    }
    if(*i<k){
        tab[*i] = root->val;
        (*i)++;
        if(root->right != NULL){
            downDfs(root->right, k, i, tab);
        }
    }
}
int kthSmallest(struct TreeNode* root, int k) {
    int tab[k];
    int i = 0;
    downDfs(root, k, &i, &tab);
    return tab[k-1];
}