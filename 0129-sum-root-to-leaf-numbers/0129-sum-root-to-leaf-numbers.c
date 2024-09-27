/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//0
void dfs(struct TreeNode* root, int* tab, int i, int* sum){
    tab[i] = root->val; 
    if(root->left != NULL){
        dfs(root->left, tab, i+1, sum);
    }
    if(root->right != NULL){
        dfs(root->right, tab, i+1, sum);
    }
    if(root->left == NULL && root->right == NULL){
        int* numb = malloc(sizeof(int));
        *numb = 1;
        for(int j=i; j>-1; j--){
            *sum += tab[j]*(*numb);
            *numb *= 10;
        }
        free(numb);
    }
}
int sumNumbers(struct TreeNode* root) {
    int* tab = malloc(10*sizeof(int));
    int sum = 0;
    int* i = malloc(sizeof(int));
    *i = 0; 
    dfs(root, tab, *i, &sum);
    free(tab);
    free(i);
    return sum;
}