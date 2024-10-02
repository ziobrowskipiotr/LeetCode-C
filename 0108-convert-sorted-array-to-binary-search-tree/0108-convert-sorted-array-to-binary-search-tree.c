/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void left(int actual, int ip, int ik, struct TreeNode* tab){
    if(ip<=ik){
        int is = (ip+ik)/2;
        tab[actual].left = &tab[is];
        left(is, ip, is-1, tab);
        right(is, is+1, ik, tab);
    }
}
void right(int actual, int ip, int ik, struct TreeNode* tab){
    if(ip<=ik){
        int is = (ip+ik)/2;
        tab[actual].right = &tab[is];
        left(is, ip, is-1, tab);
        right(is, is+1, ik, tab);
    }
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {

    struct TreeNode* tab = malloc(numsSize * sizeof(struct TreeNode));
    for(int i=0; i<numsSize; i++){
        tab[i].val = nums[i];
        tab[i].left = NULL;
        tab[i].right = NULL;
    }
    int is = (numsSize-1)/2;
    left(is, 0, is-1, tab);
    right(is, is+1, numsSize-1, tab);
    return &tab[is];
}