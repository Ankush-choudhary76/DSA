#include<bits/stdc++.h>
using namespace std ;
struct node{
 int data ;
    node* left ;
    node* right;

    node(int val) : data( val) , left(nullptr),right (nullptr){};
};
class solution{
    public:
    vector<int>view(node* root){
        vector<int>res ;
        ifrightview(root , res , 0 );
        return res ;
    

    }
    void ifrightview(node* root,vector<int>&res  , int level){
        if(!root) return ;
         
       if(level == res.size()) res.push_back(root->data);
       ifrightview(root->right , res , level+1);
       ifrightview(root->left , res ,level+1);
    }
};

int main (){
    node* root = new node(1);
    root->left = new node(2); 
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(7);
    root->left->right->left = new node(6);
    
    solution sol ;
    cout<<"RIGHT VIEW  : ";
    vector<int>result = sol.view(root);
    for(auto it : result){
        cout<<it<<" ";
    }
    COUT<<endl ;
}