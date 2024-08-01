#include<bits/stdc++.h>
using namespace std ;
struct node{
 int data ;
    node* left ;
    node* right;

    node(int val) : data( val) , left(nullptr),right (nullptr){};
};
class solution{
    public :
bool getpath(node* root , vector<int>&ans , int x ){
    if(!root) return false ;
    ans.push_back(root->data);
    if(root->data == x ) return true ;
        if(getpath(root->left , ans, x) || getpath(root->right,ans,x)) return true;
        ans.pop_back();
        return false ;
}
vector<int>rootpath(node* A , int x){
    vector<int>ans ;
    getpath(A,ans ,x);
    return ans;
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
    

    solution sol ;
   vector<int>result = sol.rootpath(root , 7);
   for(auto it : result){
    cout<<it<<"  " ;
   }
   
}