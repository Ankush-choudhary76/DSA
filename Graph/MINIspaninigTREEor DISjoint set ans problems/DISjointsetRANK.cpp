#include<bits/stdc++.h>
using namespace std ;
class DisjointSet{
    vector<int>parent , rank ;
    public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++) parent[i]=i;
    }

     int findUPar(int node ){
        if(parent[node]== node) return node ;
        return parent[node] = findUPar(parent[node]);
     }
    void unionByRank(int u ,int v){
        int ult_u = findUPar(u);
        int ult_v = findUPar( v);
        if(ult_u < ult_u){
            parent[ult_u]=ult_v;
        }else if(ult_v <ult_u){
            parent[ult_v]= ult_u;
        }else{
            parent[ult_v]=ult_u;
            rank[ult_u]++;
        }
    }
};
int main() {
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    // if 3 and 7 same or not
    if (ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";

    ds.unionByRank(3, 7);

    if (ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";
    return 0;
}