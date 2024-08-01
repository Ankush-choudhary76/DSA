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
    void changetree(node* root){
        if(!root) return;
        int child =0;
        if(root->left){
            child += root->left->val;

        }
          if(root->right){
            child += root->right->val;
            
        }
        if(child>= root->val){
            root->val = child;
        }else{
            if(root->left){
                root->left->val= root->val;
            }
            else if(root->right) root->right->val = root->val;
        }
        changetree(root->left);
        changetree(root->right);
        int tot=0 ;
        if(root->left){
            tot += root->left->val;
        }
        if(root ->right){
             tot += root->right->val;
        }
        if(root->left or root->right){
            root->val = tot;
        }
    }
 };
void inordered_traversal(node* root){
    if(!root) return ;
    inordered_traversal(root->left);
    cout<<root->val<<" ";
    inordered_traversal(root->right);
}

int main (){
    node* root = new node(3);
    root->left = new node(5); 
    root->right = new node(1);
    root->left->left = new node(6);
       root->left->right = new node(2);
     root->right->left = new node(0);
       root->right->right = new node(8);
        root->left->right->left = new node(7);
         root->left->right->right = new node(4);
    
    cout<<" before modification "<<endl ;
    inordered_traversal(root);

     solution sol ;
    sol.changetree(root);

    cout<<"\n after modification "<<endl;
    inordered_traversal(root);
     
   
   
}

