#include<bits/stdc++.h>
using namespace std ;
struct node {
    int data ;
    node* left ; 
    node* right ;
    node(int val): data(val) , left(nullptr),right(nullptr) {}
};
void inorder(node* root , vector<int>&arr){
     if(root == nullptr ) return ;

     inorder(root -> left, arr );
     arr.push_back(root -> data);
     inorder(root -> right, arr );
}
vector<int> find_inorder(node* root){
    vector<int>arr;
    inorder(root , arr);
    return arr;

}
int main(){
    node* root = new node(1);
    root ->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
vector<int>result = find_inorder(root);
for(auto it : result){
    cout<<it<<" ";
}
}