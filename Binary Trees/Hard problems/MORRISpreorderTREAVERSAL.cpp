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
vector<int>preor(node* root){
    vector<int>ans ;
   

    node* cur = root;
    while(cur != nullptr){
        if(cur->left ==nullptr){
            ans.push_back(cur->val);
            cur = cur->right;
        }else{
            node* prev = cur->left;

            while(prev->right && prev->right != cur){
                prev = prev->right;
            }
            if(prev->right == nullptr){
            prev->right = cur ;
            cur = cur->left;
            }else{
            prev->right = nullptr;
            ans.push_back(cur->val);
            cur = cur->right;
            
            }
    

        }
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
  root->left->right->right = new node(6);
    
     solution sol ;
    vector<int>result  =   sol.preor(root);
   for(auto it : result){
    cout<<it<<"  " ;
   }

}