#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data ;
    node* left;
    node* right;
    
     node(int val):data(val) , left(nullptr), right(nullptr){}
     
};
class solution {
    public:
    bool isbalanced( node* root){
        if(root == nullptr) return true ;
    
    int lh = getheight(root -> left);
    int rh = getheight(root-> right);

    if(abs(lh - rh)<= 1 && isbalanced(root->left) && isbalanced(root->right)){
        return true ;
    }
    }
    int getheight(node* root){
        if(root == nullptr) return 0;
        int lh = getheight(root -> left);
        int rh = getheight(root -> right);
        return max(lh , rh ) +1 ;
    }
};
int main(){
    node* root = new node(1);
    root->left = new node(2);
     root->right = new node(3);
          root->right->left = new node(4);
           root->right->right = new node(5);
       solution sol;    
   bool ans = sol.  isbalanced(root);
   if(ans == true) cout<<"true";
   else cout<<"false";
}