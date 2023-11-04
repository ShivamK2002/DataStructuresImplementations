#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(node* root){
    
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    
    if(data==-1) return NULL;
    
    root = new node(data);
    cout<<"Enter the data for left of"<<data<<endl;
    root->left = buildTree(root->left);
    
    cout<<"Enter the data for right of"<<data<<endl;
    root->right = buildTree(root->right);
    
    return root;
}

int main(){
    node* root = NULL;
    buildTree(root);
    return 0;
    
}
