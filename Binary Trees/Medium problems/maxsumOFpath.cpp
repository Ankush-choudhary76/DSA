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
         int maxi = INT_MIN;
         find(root , maxi);
         return maxi;
    }
    int find( node* root , int&  maxi){
        if(root == nullptr) return 0;
         int lh = max(0,find(root -> left, maxi));
         int rh =  max(0,find(root -> right, maxi));
       maxi = max (maxi , lh + rh + root->data);
      return    max(lh,rh) + root->data;

    }
};
int main(){
    node* root = new node(-10);
    root->left = new node(9);
     root->right = new node(20);
          root->right->left = new node(15);
           root->right->right = new node(7);
       solution sol;    
  cout<<sol.order(root);
}