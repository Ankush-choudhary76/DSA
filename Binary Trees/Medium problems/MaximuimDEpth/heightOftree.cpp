#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data ;
    node* left;
    node* right;
    node():data(0) , left(nullptr), right(nullptr){}
     node(int val):data(val) , left(nullptr), right(nullptr){}
      node(int val, node* left , node* right):data(val) , left(left), right(right){}
};
class solution {
    public:
    int maxdepth(node* root){
        
        if(root == nullptr) return 0 ;
        int lh =  maxdepth(root->left);
        int rh = maxdepth(root-> right);
        return 1 + max(lh , rh);
    }
};
int main(){
    node* root = new node(1);
    root->left = new node(2);
     root->right = new node(3);
          root->right->left = new node(4);
           root->right->left->left= new node(7);
           root->right->right = new node(5);
       solution sol;    
    cout<<sol.maxdepth(root);    
}