#include<bits/stdc++.h>
using namespace std ;
struct treeNODE{
    int data ;
    treeNODE* left;
    treeNODE* right ;
    treeNODE(): data(0) ,left(nullptr) , right(nullptr) {}
    treeNODE(int val ): data(val),left(nullptr) , right(nullptr) {}
    treeNODE(int val , treeNODE* left,treeNODE*right) : data(val) , left(left) , right(right){}

};
class solution {
    public:
    vector<vector<int>>levelorder(treeNODE* root){
        vector<vector<int>>arr;

        if(root == nullptr) return arr ;

        queue<treeNODE*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>level ;
            int size = q.size();
            for(int i=0 ; i<size;i++){
                treeNODE* node = q.front();
                q.pop();
                level.push_back(node -> data );
                if(node -> left != nullptr){
                    q.push(node->left);
                }
                 if(node -> right != nullptr){
                    q.push(node->right);
                }
            }
            arr.push_back(level);
        }
        return arr;
    }
};
void print(const vector<int>&vec){
    for(auto it : vec){
        cout<<it<<" ";
    }
    cout<<endl ;
}
int main(){
    treeNODE* root = new treeNODE(1);
        root ->left = new treeNODE(2);
          root ->right = new treeNODE(3);
            root ->left->left = new treeNODE(4);
              root ->left->right = new treeNODE(5);
       solution sol ;
       vector<vector<int>>result = sol.levelorder(root);
  for(const vector<int>level : result){
       print(level);
  }
       

}