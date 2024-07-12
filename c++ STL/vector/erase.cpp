#include<bits/stdc++.h>
using namespace std;

// int main (){
//     vector<int>v={1,2,3,4};
//     v.erase(v.begin()+2);
//     v.push_back(2);
//     v.push_back(8);
//     int l=v.size();
//     for(int i=0;i<l;i++){ 
//         cout<<v[i]<<" ";
//     }

// }

int main (){
    vector<int>v={1,2,3,4};
    v.erase(v.begin()+2,v.begin()+4);
    int l=v.size();
    for(int i=0;i<l;i++){
        cout<<v[i]<<" ";
    }

}