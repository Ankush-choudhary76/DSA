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
    node * buildTRee(vector<int>&preorder , vector<int>&inorder){
      map <int,int > mpp;
      for(int i=0 ; i<inorder.size();i++){
        mpp[inorder[i]] = i ;
      }
      node* root = build(preorder , 0 , preorder.size()-1,inorder,0,inorder.size()-1,mpp);
      return root;
    }
private : 
    node* build(vector<int>&preorder , int preSTART , int preEND , vector<int>&inorder 
      , int inorderSTART , int inorderEND, map <int,int>mpp){
          if(preSTART>preEND || inorderSTART > inorderEND ) return nullptr;
          node* root = new node(preorder[preSTART]);
          int  it = mpp[root->val];
          int numleft = it - inorderSTART;
           root ->left = build(preorder , preSTART+1 , preSTART+numleft , inorder , inorderSTART,it-1,mpp);
         root->right = build(preorder , preSTART+numleft+1 , preEND, inorder , it+1 , inorderEND, mpp);
          return root ;
      }
};

void printInorder(node* root){
  if(!root){
    return;
  }
  printInorder(root->left);
  cout<<root->val<<" ";
  printInorder(root->right);
}
int main (){
   vector<int>inorderr ={9,3,15,20,7};
   vector<int> preorderr = {3,9,20,15,7};
    
     solution sol ;
  node* root =   sol.buildTRee(preorderr , inorderr);
   printInorder(root);

}