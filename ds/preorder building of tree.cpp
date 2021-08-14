#include<bits/stdc++.h>
using namespace std;
class node{
    
    public :
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree() {
    int d;
    cin>>d;

    if(d==-1)
    return NULL;

    node* root = new node(d);
    root -> left = buildTree();
    root -> right = buildTree();
    return root;
}

void Preorderprint(node* root) {
    if(root == NULL)
    return;

    cout << root -> data <<" ";
    Preorderprint(root -> left);
    Preorderprint(root -> right);
}

void Inorderprint(node* root) {
    if(root == NULL)
    return;
    Inorderprint(root->left);
    cout<<root->data<<" ";
    Inorderprint(root->right);
}
void Postorderprint(node* root) {
    if(root == NULL)
    return;
    Postorderprint(root->left);
    Postorderprint(root->right);
    cout<<root->data<<" ";
}

int heightOfTree(node* root) {
    if(root==NULL)
    return 0;
    int ls = heightOfTree(root->left);
    int rs = heightOfTree(root->right);
    return max(ls, rs)+1;
}

void printKthLevel(node* root, int k) {
    if(root == NULL)
    return;

    if(k==1) {
        cout<<root->data<<endl;
        return;
    }
    printKthLevel(root->left, k-1);
    printKthLevel(root->right, k-1);
}

void LevelOrder(node* root) {
    int h = heightOfTree(root);
    for(int i=1; i<=h; i++) {
        printKthLevel(root, i);
        cout<<endl;
    }
    return;
}

int main() {
    node* root = buildTree();
    /*Preorderprint(root);
    cout<<endl;

    Inorderprint(root);
    cout<<endl;

    Postorderprint(root);
    cout<<endl;

    heightOfTree(root);
    */

   LevelOrder(root);
   return 0;
}