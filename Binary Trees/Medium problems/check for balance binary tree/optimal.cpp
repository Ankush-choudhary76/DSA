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
     return dfheight(root)!= -1 ;
    }
    int dfheight(node* root){
        if(root == nullptr) return 0;
        int lh =  dfheight(root -> left);
        if(lh == -1 ) return -1;
        int rh =  dfheight(root -> right);
         if(rh == -1 ) return -1;

         if(abs(lh - rh)>1) return -1;
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