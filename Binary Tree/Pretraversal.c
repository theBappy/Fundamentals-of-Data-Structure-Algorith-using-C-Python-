#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode {
    char data;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

TreeNode *createNode(char data){
    TreeNode *newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preOrderTraversal(TreeNode *root){
    if(root == NULL) return;
    printf("%c ", root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(TreeNode *root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    printf("%c ", root->data);
    inOrderTraversal(root->right);
}

void postOrderTraversal(TreeNode *root){
    if(root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%c ", root->data);
}
int main(){
    TreeNode* root = createNode('R');
    TreeNode* nodeA = createNode('A');
    TreeNode* nodeB = createNode('B');
    TreeNode* nodeC = createNode('C');
    TreeNode* nodeD = createNode('D');
    TreeNode* nodeE = createNode('E');
    TreeNode* nodeF = createNode('F');
    TreeNode* nodeG = createNode('G');

    root->left = nodeA;
    root->right = nodeB;

    nodeA->left = nodeC;
    nodeA->right = nodeD;

    nodeB->left = nodeE;
    nodeB->right = nodeF;

    nodeF->left = nodeG;

    // preOrderTraversal(root);
    // inOrderTraversal(root);
    postOrderTraversal(root);

    free(nodeG);
    free(nodeF);
    free(nodeE);
    free(nodeB);
    free(nodeC);
    free(nodeD);
    free(nodeA);
    free(root);

    return 0;
}