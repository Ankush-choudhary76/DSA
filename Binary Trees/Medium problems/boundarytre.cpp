#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data ;
    node* left ;
    node* right ;
    node(int val) : data(val) , left(nullptr),right(nullptr){};
};
class solution{
    public :
    bool isleaf (node* root){
        return !root->left && !root->right;
    }
    void addleftboundary(node* root , vector<int>&res){
        node* a = root->left ;
        while(a){
            if(!isleaf(a)){
                res.push_back(a ->data);
            }
            if( a->left){
                a = a->left;
            }else a = a->right;
        }
    }
    void addrightboundary(node* root , vector<int>&res){
        node* b = root->right ;
        vector<int>temp ;
        while(b){
            if(!isleaf(b)){
                temp.push_back(b->data);
            }
            if( b->right){
                b = b->right;
            }else b = b->left;
        }
        for(int i=temp.size()-1;i>=0;--i ){
            res.push_back(temp[i]);
        }
    }
    void addleaves(node* root , vector<int>&res){
        if(isleaf(root)){
            res.push_back(root->data);
            return;
        }
        if(root->left){
            addleaves(root->left,res);
        }
        if(root -> right){
            addleaves(root->right ,res);
        }
    }
    vector<int>printboundary(node* root){
        vector<int> res ;
        if(!root) return res ;

        if(!isleaf(root)){
            res.push_back(root->data);
        }
        addleftboundary(root , res);
        addleaves(root , res );
        addrightboundary(root , res);
    }
};
int main (){
    node * root = new node(1);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(3);
     root->left->left->right = new node(4);
      root->left->left->right->left = new node(5);
       root->left->left->right->right = new node(6);
       root -> right ->right = new node(8);
        root -> right ->right->left = new node(9);
         root -> right ->right->left->left = new node(10);
          root -> right ->right->left->right = new node(11);

    solution sol ;
    vector<int>result = sol .printboundary(root);
    for(auto it : result){
        
            cout<<it<<" ";
        }
       
    
}