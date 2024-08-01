#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data ;
    node* left ;
    node* right;

    node(int val) : data( val) , left(nullptr),right (nullptr){};
};
class solution {
    public : 
    int order(node * root){
         int diameter = 0;
         find(root , diameter);
         return diameter;
    }
    private:
    int find( node* root , int& diameter){
        if(root == nullptr) return 0;
         int lh = find(root -> left,diameter);
         int rh = find(root -> right,diameter);
      diameter = max (diameter , lh + rh);
      return 1+  max(lh,rh);

    }
};
int main(){
    node* root = new node(1);
    root->left = new node(2);
     root->right = new node(3);
          root->right->left = new node(4);
           root->right->right = new node(5);
       solution sol;    
  cout<<sol.order(root);
}