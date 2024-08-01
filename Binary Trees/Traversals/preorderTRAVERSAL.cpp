#include<bits/stdc++.h>
using namespace std ;
struct node {
    int data ;

    node* left ;
    node* right;
    node(int val ): data(val) , left(nullptr) , right(nullptr) {}
};
void ppord(node* root , vector<int>&arr){
    if(root == nullptr) return ;
    arr.push_back(root-> data);
    ppord(root->left , arr);
    ppord(root -> right , arr);
}
vector<int>pre( node* root){
    vector<int>arr;
  ppord(root , arr);
  return arr;

}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->right->left= new node(8);

    vector<int>result = pre(root);
    for(auto it  : result){
        cout<<it<<" ";
    }
}