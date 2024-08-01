#include<bits/stdc++.h>
using namespace std ; 
struct node{
    int data ;
    node* left ;
    node* right ;
    node(int val) : data(val), left( nullptr),right(nullptr) {}
};
class solution{
    public: 
    vector<int>topview(node* root){
         vector<int>ans ;
        if(root == nullptr) return ans ;
        map<int,int>mpp;
        queue<pair<node*,int>>q;
        q.push({root , 0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            node* node = it.first;
            int line = it.second;

            if(mpp.find(line)== mpp.end()){
                mpp[line] = node->data;
            }
            if(node->left != nullptr){
                q.push({node->left, line-1});
            }
              if(node->right != nullptr){
                q.push({node->right,line +1});
            }
        }
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        sort(ans.begin(),ans.end());
        return ans ;
    }
};
int main (){
    node* root = new node(1);
    root->left = new node(2); 
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(7);
    root->left->right = new node(5);
    root ->left->right->left = new node(6);
    
    solution sol ;
    vector<int>result = sol.topview(root);
    for(auto it : result){
        cout<<it<<" ";
    }
}