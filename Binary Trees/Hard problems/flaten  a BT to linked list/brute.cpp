#include<bits/stdc++.h>
using namespace std ;
struct node{
 int val ;
    node* left ;
    node* right;

    node(int val) : val( val) , left(nullptr),right (nullptr){};
};
class solution {
public :
    node* prev = nullptr;
   void flatten(node* root){
         if(root== nullptr) return;
         flatten(root->right);
         flatten(root->left);
         root -> right = prev;
         root ->left = nullptr;
        prev = root ; 
   }
};

void printfalten(node* root){
    if(!root ) return;
    cout<<root->val<<" ";
    printfalten(root->right);
}

int main (){
  node* root = new node(1);
  root->left = new node(2);
  root->right = new node(5);
  root->left->left = new node(3);
  root->left->right = new node(4);
  root->right->right = new node(6);
  root->right->right->left = new node(7);
    
     solution sol ;
       sol.flatten(root);
     printfalten(root);
}