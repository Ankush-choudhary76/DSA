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

  node* lowestcommon(node* root ,   node* x , node* y ){
    if(root == nullptr || root== x || root== y) return root ;
    node* left = lowestcommon(root->left , x,y);
    node* right = lowestcommon(root->right , x ,y );
    if(left == nullptr ) return right;
    else if(right == nullptr) return left ;
    else  return root ;
  }
};
int main (){
    node* root = new node(1);
    root->left = new node(2); 
    root->right = new node(3);
    root->left->left = new node(4);
       root->left->right = new node(5);
     root->left->right->left = new node(6);
    root->left->right->right = new node(7);
     root->right->left = new node(8);
       root->right->right = new node(9);
 solution sol ;
   node* a = sol.lowestcommon(root ,root->left->left,root->left ->right->right);
   cout<<a->data<<endl;
   
   
}
