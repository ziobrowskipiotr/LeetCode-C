/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//2
void downDfs(struct TreeNode* root, int* k, int* i, int* num){
    if(root->left != NULL){
        downDfs(root->left, k, i, num);
    }
    if((*i)+1 < *k){
        (*i)++;
        if(root->right != NULL){
            downDfs(root->right, k, i, num);
        }
    }
    else if((*i)+1 == *k){
        *num = root->val;
        (*i)++;
    }
}
int kthSmallest(struct TreeNode* root, int k) {
    int num;
    int i = 0;
    downDfs(root, &k, &i, &num);
    return num;
}