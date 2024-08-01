#include<bits/stdc++.h>
using namespace std ;
 struct treeNODE{
    int val ; 
    treeNODE* left ;
    treeNODE* right ; 

    treeNODE(int val) : val(val) , left(nullptr),right(nullptr){}
 };
 class solution {
    public: 
    vector<int>preorder( treeNODE* root){
    vector<int>arr ;
    if(root == nullptr) return arr ;
    stack<treeNODE*> st1 ,st2 ;
    st1.push(root);
     while(!st1.empty()){
       treeNODE* node = st1.top();
        st1 .pop() ;   st2.push(node);
        if(node-> left != nullptr) st1.push(node->left);
         if(node-> right != nullptr) st1.push(node->right);
     } 
     while(!st2.empty()){
        root = st2.top(); st2.pop();
        arr.push_back(root ->val);
     } 
     return arr ;
    }
 };
 int main (){
    treeNODE* root = new treeNODE(1);
        root->left = new  treeNODE(2);
        root ->right= new treeNODE(3);
        root ->left->left = new treeNODE(4);
        root ->left->right = new treeNODE(5);
        root ->left->right->left = new treeNODE(6);
        root ->left->right->right = new treeNODE(7);

        solution sol ;
    vector<int>result = sol.preorder(root);
    for( auto it : result){
        cout<<it<<" ";
    }

 }