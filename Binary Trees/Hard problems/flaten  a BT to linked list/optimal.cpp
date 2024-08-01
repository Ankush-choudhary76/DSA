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

   void flatten(node* root){
      node* curr = root ;
      while(curr){
        if(curr ->left){
            node* pre = curr->left;
            while(pre->right){
                pre = pre->right;
            }
            pre->right = curr -> right;
        curr ->right = curr ->left;
        curr ->left = nullptr;
        }
        curr = curr->right;
      }
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