#include<bits/stdc++.h>
using namespace std ;
class DisjointSet {
    vector<int>size,parent;
    public:
    DisjointSet(int n){
        size.resize(n+1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            size[i]=1;
            parent[i]=i;
        }
    }    
    int findUPar(int node){
        if(parent[node]== node) return node;
        return parent[node]=findUPar(parent[node]);
    }
    void unionBySize(int n, int m ){
        int ult_u = findUPar( n);
        int ult_v = findUPar(m);
        if(size[ult_u]<size[ult_v]){
            parent[ult_u] = ult_v;
            size[ult_v] += size[ult_u];
        }else{
            parent[ult_v] = ult_u;
            size[ult_u] += size[ult_v];
        }
    }
};
class Solution{
    public:
    vector<vector<string>>accountsMerge(vector<vector<string>>accounts){
        int n = accounts.size();
        sort(accounts.begin(),accounts.end());
        unordered_map<string,int>mapmailnode;
        DisjointSet ds(n);
        for(int i=0 ; i<n;i++){
           for(int j=1;j<accounts[i].size();j++){
            string mail = accounts[i][j];
            if(mapmailnode.find(mail) == mapmailnode.end()){
                mapmailnode[mail]= i;
            }else {
                ds.unionBySize(i,mapmailnode[mail]);
            }
           }
        }
        vector<string>adj[n];
        for(auto it : mapmailnode){
            string mail = it.first;
            int node = ds.findUPar(it.second);
            adj[node].push_back(mail);
        }
        vector<vector<string>>ans;
        for(int i=0 ; i<n;i++){
            if(adj[i].size()==0) continue;
            sort(adj[i].begin(),adj[i].end());

            vector<string>temp;
            temp.push_back(accounts[i][0]);
            for(auto it : adj[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main() {

    vector<vector<string>> accounts = {{"John", "j1@com", "j2@com", "j3@com"},
        {"John", "j4@com"},
        {"Raj", "r1@com", "r2@com"},
        {"John", "j1@com", "j5@com"},
        {"Raj", "r2@com", "r3@com"},
        {"Mary", "m1@com"}
    };


    Solution obj;
    vector<vector<string>> ans = obj.accountsMerge(accounts);
    for (auto acc : ans) {
        cout << acc[0] << ":";
        int size = acc.size();
        for (int i = 1; i < size; i++) {
            cout << acc[i] << " ";
        }
        cout << endl;
    }
    return 0;
}