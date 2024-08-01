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
     int maxiwidht(node* root){
      if(!root) return 0 ;
      int ans = 0;
      queue<pair<node*,int>>q;
      q.push({root,0});
      while(!q.empty()){
         int size = q.size();
         int mmin = q.front().second;
         int first , last ;
         for(int i=0 ; i<size;i++){
            int cut_id = q.front().second-mmin;
            node* it = q.front().first;
            q.pop();
            if(i==0)first = cut_id;
            if(i== size-1) last = cut_id;
            if(it->left) {
               q.push({it->left,cut_id*2+1});
            }   
            if(it->right) q.push({it->right , cut_id*2+2});
         }
         ans = max(ans , last - first+1 );
      }
      return ans ;
     }
 };

int main (){
    node* root = new node(1);
    root->left = new node(2); 
    root->right = new node(3);
    root->left->left = new node(4);
       root->left->right = new node(5);
     root->left->right->left = new node(6);
    root->left->right->right = new node(7);
     root->right->left = new node(8);
       root->right->right = new node(9);
    solution sol ;
    auto a  = sol.maxiwidht(root);
   cout<<a<<endl;
   
   
}
