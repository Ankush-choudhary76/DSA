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

   

   bool issym(node* root1 , node* root2){
    if(root1 == nullptr && root2 == nullptr) return true ;
    if(root1 == nullptr || root2 == nullptr  ) return false ;
     
    return (root1->data == root2->data ) && issym(root1->left,root2->right) 
    && issym(root1->right , root2->left);
     
   }

  bool sym(node * root){
    if(!root ) return true ;
   
   
    return issym(root->left , root-> right);
  }
};
int main (){
    node* root = new node(1);
    root->left = new node(2); 
    root->right = new node(2);
    root->left->left = new node(3);
     root->right->right = new node(3);
    root->left->right = new node(4);
    root->right->left = new node(4);
    
    solution sol ;
    if(sol.sym(root)== true){
        cout<<"true";
    }else{
        cout<<"false";
    }
   
}