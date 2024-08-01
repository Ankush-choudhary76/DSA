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
    int countNOdes(node* root){
        if(!root) return 0 ;
        int lh = findheightleft(root);
        int rh = findheightright(root);
        if(lh == rh ) return (1<<lh)-1;
        return 1+ countNOdes(root->left)+countNOdes(root->right);
    }

    int findheightleft(node* node){
        int height = 0 ;
        while(node){
            height ++ ;
            node = node->left;

        }
        return height;
    }
    int findheightright(node* node){
        int height =0 ;
        while(node){
            height ++ ;
            node = node->right;
        }
        return height ;
    }
};


int main (){
    node* root = new node(1);
    root->left = new node(2); 
    root->right = new node(3);
    root->left->left = new node(4);
       root->left->right = new node(5);
     root->right->left = new node(6);
       root->right->right = new node(7);
        root->left->right->left = new node(10);
         root->left->right->right = new node(11);
            root->left->left->left = new node(8);
         root->left->left->right = new node(9);
    
    
     solution sol ;
  int n =   sol.countNOdes(root);
cout<<n;
   
   
   
}