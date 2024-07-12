#include<bits/stdc++.h>
using namespace std;

int main (){
    vector<int>v={1,2,3,4};
    v.insert(v.begin(),500);
    v.insert(v.begin()+2,900);
    int l=v.size();
    for(int i=0;i<l;i++){
        cout<<v[i]<<" ";
    }

}