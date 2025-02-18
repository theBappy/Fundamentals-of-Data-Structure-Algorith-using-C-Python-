#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;


TreeNode *createNode(int data){
    TreeNode *newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

TreeNode *search(TreeNode *node, int target){
    if(node == NULL){
        return NULL;
    }else if(node->data == target){
        return node;
    }else if(target < node->data){
        return search(node->left , target);
    }else{
        return search(node->right, target);
    }
}

TreeNode *insert(TreeNode *node, int data){
    if(node == NULL){
        return createNode(data);
    }else{
        if(data < node->data){
            node->left = insert(node->left, data);
        }else if(data > node->data){
            node->right = insert(node->right, data);
        }
    }
    return node;
}

TreeNode *minValueNode(TreeNode *node){
    TreeNode *current = node;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
   
}

TreeNode* delete(TreeNode* node, int data) {
    if (node == NULL) {
        return NULL;
    }

    if (data < node->data) {
        node->left = delete(node->left, data);
    } else if (data > node->data) {
        node->right = delete(node->right, data);
    } else {
        // Node with only one child or no child
        if (node->left == NULL) {
            TreeNode* temp = node->right;
            free(node);
            return temp;
        } else if (node->right == NULL) {
            TreeNode* temp = node->left;
            free(node);
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        TreeNode* temp = minValueNode(node->right);

        // Copy the inorder successor's content to this node
        node->data = temp->data;

        // Delete the inorder successor
        node->right = delete(node->right, temp->data);
    }
    return node;
}

int main() {
    TreeNode* root = createNode(13);
    TreeNode* node7 = createNode(7);
    TreeNode* node15 = createNode(15);
    TreeNode* node3 = createNode(3);
    TreeNode* node8 = createNode(8);
    TreeNode* node14 = createNode(14);
    TreeNode* node19 = createNode(19);
    TreeNode* node18 = createNode(18);

    root->left = node7;
    root->right = node15;

    node7->left = node3;
    node7->right = node8;

    node15->left = node14;
    node15->right = node19;

    node19->left = node18;

    insert(root, 10);

    // Search for a value
    TreeNode* result = search(root, 8);
    if (result) {
        printf("Found the node with value: %d\n", result->data);
    } else {
        printf("Value not found in the BST.\n");
    }

    // Free the memory (optional but good practice)
    free(node18);
    free(node19);
    free(node14);
    free(node8);
    free(node3);
    free(node15);
    free(node7);
    free(root);
    return 0;
}

