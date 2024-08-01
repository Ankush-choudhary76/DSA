#include<bits/stdc++.h>
using namespace std ;
 struct treeNODE{
    int val ; 
    treeNODE* left ;
    treeNODE* right ; 

    treeNODE(int val) : val(val) , left(nullptr),right(nullptr){}
 };
 class solution {
    public: 
    vector<int>preorder( treeNODE* root){
    vector<int>arr ;
    stack < treeNODE*>st ; treeNODE* node = root ;
    while(true){
        if(node != nullptr){
            st.push(node);
            node = node->left;
        }else{
            if(st.empty()== true) break ;
                 node = st.top();
                 st . pop();
                 arr.push_back(node->val);
                 node = node->right ;
        }
    }
     return arr ;
    }
 };
 int main (){
    treeNODE* root = new treeNODE(1);
        root->left = new  treeNODE(2);
        root ->right= new treeNODE(3);
        root ->left->left = new treeNODE(4);
        root ->left->right = new treeNODE(5);
        root ->left->right->left = new treeNODE(6);
        root ->left->right->right = new treeNODE(7);

        solution sol ;
    vector<int>result = sol.preorder(root);
    for( auto it : result){
        cout<<it<<" ";
    }

 }