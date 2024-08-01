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
    node * buildTRee(vector<int>&inorder , vector<int>&postorder){
      map <int,int > mpp;
      for(int i=0 ; i<inorder.size();i++){
        mpp[inorder[i]] = i ;
      }
      node* root = build(inorder , 0 , inorder.size()-1,postorder,0,postorder.size()-1,mpp);
      return root;
    }
private : 
    node* build(vector<int>&inorder , int is , int ie, vector<int>&postorder 
      , int ps , int pe, map <int,int>mpp){
          if(ps> pe || is >  ie ) return nullptr;
          node* root = new node(postorder[pe]);
          int  it = mpp[postorder[pe]];
          int numleft = it - is;
           root ->left = build(inorder , is , it-1, postorder ,ps,ps+numleft-1,mpp);
         root->right = build(inorder , it+1 , ie, postorder ,ps+numleft,pe-1,mpp);
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
   vector<int>inorderr ={40,20,50,10,60,30};
   vector<int> postorderr = {40,50,20,60,30,10};
    
     solution sol ;
  node* root =   sol.buildTRee(inorderr,postorderr);
   printInorder(root);

}