#include<bits/stdc++.h>
using namespace std ;

struct node{
    int data ;
    node* left;
    node* right ;

    node(int val ): data(val) , left(nullptr ), right(nullptr){}
};
vector<vector<int>>preINpost(node* root){
vector<vector<int>>ans ;
stack<pair<node* , int >> st  ;
vector<int>pre,in ,post ;

if(root == nullptr) return {};
st.push({root,1});
while(!st.empty()){
    auto it = st.top();
    st.pop();
    if(it.second == 1){
        pre.push_back(it.first->data);
        it.second = 2 ;
        st.push(it);
        if(it.first->left != nullptr) st.push({it.first->left , 1 });
    }else if( it.second == 2 ){
        in.push_back( it.first->data);
        it.second = 3 ;
        st.push(it);
        if(it.first->right != nullptr) st.push({it.first->right , 1});
    }else{
        post.push_back(it.first->data);
    }
}
 ans.push_back(pre);
    ans.push_back(in);
    ans.push_back(post);
    return ans ;
}
int main(){
    node* root = new node(1);
    root->left = new node(2);
     root->right = new node(5);
      root->left->left = new node(3);
        root->left->right = new node(4);
          root->right->left = new node(6);
           root->right->right = new node(7);
    vector<vector<int>>result = preINpost(root);
    for( auto ot : result){
        for(auto it : ot){
            cout<<it<<" ";
        }
        cout<<endl ;
    }       
}