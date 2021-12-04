#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int value;
    struct tree *left;
    struct tree *right;
};
tree *newNode(int value)
{
    tree *temp = new tree;
    temp->value = value;
    temp->left = temp->right = NULL;
    return temp;
}
void printPaths(struct tree *root)
{
    stack<int> nodePath;
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        struct tree *temp = root;
    }
    else
    {
        cout << root->value << " ";
        printPaths(root->left);
        printPaths(root->right);
    }
}
int main()
{
    struct tree *root = newNode(1);
    struct tree *temp = root;
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(11);
    root->right->left->left = newNode(12);
    root->right->left->right = newNode(13);
    root->right->right->left = newNode(14);
    printPaths(root);
    return 0;
}