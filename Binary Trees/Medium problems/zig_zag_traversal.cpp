#include<bits/stdc++.h>
using namespace std ;

struct node{
    int data ;
    node* left ;
    node* right ;
    node() : data(0) ,left(nullptr),right(nullptr){}
    node(int val) : data(val) ,left(nullptr),right(nullptr){}
    node(int val , node* left , node* right) : data(val) ,left(left),right(right){}
};
class solution {
    public : 
    vector<vector<int>>zigzag(node* root){
         vector<vector<int>>ans ;

        if(root == nullptr) return ans;

        queue<node* >q;
        q.push(root );
         bool flag = true;
        while(!q.empty()){
            int size = q.size();
            vector<int>level(size) ;
            for(int i=0 ;i<size;i++){
                root = q.front();
                q.pop();
                int index = flag ? i : (size-1-i);
            level[index]=(root->data); 
          
               if(root -> left != nullptr){
                    q.push(root->left);
                }
                 if(root -> right != nullptr){
                    q.push(root->right);
                }
                
            
            }
            flag = !flag;
            ans.push_back(level);
        }
        return ans ;
    }

};
void print(const vector<int>&vec){
    for(auto it : vec){
        cout<<it<<" ";
    }
    cout<<endl ;
}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root ->right = new node(3);
    root ->left->left = new node(4);
    root ->left->right = new node(5);
    root ->right->left = new node(6);

    solution sol ;
    vector<vector<int>>result = sol.zigzag(root);
    for(const vector<int>level : result){
       print(level);
  }
}