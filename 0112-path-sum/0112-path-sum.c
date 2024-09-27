/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//
void dfs(struct TreeNode* root, int* targetSum, int sum, int* value){
    if(*value < 1){
        sum += root->val;
        if(root->left != NULL){
            dfs(root->left, targetSum, sum, value);
        }
        if(root->right != NULL){
            dfs(root->right, targetSum, sum, value);
        }
        if(root->left == NULL && root->right == NULL){
            if(sum == *targetSum){
                *value = 1;
            }
        }
    }
}
bool hasPathSum(struct TreeNode* root, int targetSum) {
    if(root == NULL){
        return false;
    }
    int* value = malloc(sizeof(int));
    *value = 0;
    dfs(root, &targetSum, 0, value);
    if(*value == 1){
        free(value);
        return true;
    }
    else{
        free(value);
        return false;
    }
}