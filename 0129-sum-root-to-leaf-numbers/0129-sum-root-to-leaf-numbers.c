/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void dfs(struct TreeNode* root, int* tab, int i, int* sum){
    tab[i] = root->val; 
    if(root->left != NULL){
        dfs(root->left, tab, i+1, sum);
    }
    if(root->right != NULL){
        dfs(root->right, tab, i+1, sum);
    }
    if(root->left == NULL && root->right == NULL){
        for(int j=0; j<=i; j++){
            *sum += tab[j]*(int)pow(10, i-j);
        }
    }
}
int sumNumbers(struct TreeNode* root) {
    int tab[10];
    int sum = 0;
    dfs(root, &tab, 0, &sum);
    return sum;
}