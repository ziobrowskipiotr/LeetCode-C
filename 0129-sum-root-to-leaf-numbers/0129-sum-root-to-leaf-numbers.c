/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//0
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
    int* tab = malloc(10*sizeof(int));
    int sum = 0;
    int* i = malloc(sizeof(int));
    long int* numb = malloc(sizeof(long int));
    *i = 0; 
    dfs(root, tab, *i, &sum, numb);
    free(tab);
    free(numb);
    free(i);
    return sum;
}