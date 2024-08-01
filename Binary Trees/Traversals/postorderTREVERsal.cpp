#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data ;
    node* left;
    node* right;

    node(int val ) : data (val) , left(nullptr), right(nullptr) {}

};
void postorder(node* root , vector<int>&arr){
    if(root == nullptr) return ;

    postorder(root -> left,arr);
    postorder(root -> right , arr);
    arr.push_back(root ->data);
}
vector<int>ppo(node* root ){
      vector<int>arr;
      postorder(root , arr);
      return arr ;
}
int main(){
    node* root = new node(1);
    root-> left = new node(2);
    root -> right = new node(3);
    root ->left->left = new node(4);
    root->left->right = new node(5);

    vector<int>result = ppo(root );
    for( auto it : result){
        cout<<it<<" ";
    }
}
