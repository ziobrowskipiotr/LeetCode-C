/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void dfs(struct TreeNode* root, int* tab, int i, int* sum, long int* numb){
    tab[i] = root->val; 
    if(root->left != NULL){
        dfs(root->left, tab, i+1, sum, numb);
    }
    if(root->right != NULL){
        dfs(root->right, tab, i+1, sum, numb);
    }
    if(root->left == NULL && root->right == NULL){
        *numb = 1;
        for(int j=i; j>-1; j--){
            *sum += tab[j]*(*numb);
            *numb *= 10;
        }
    }
}
int sumNumbers(struct TreeNode* root) {
    int tab[10];
    int sum = 0;
    int i = 0;
    long int numb;
    dfs(root, &tab, i, &sum, &numb);
    return sum;
}