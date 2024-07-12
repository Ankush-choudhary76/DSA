// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std ;

// int main (){
//     vector<int>v;
//     v.push_back(1);
//     v.emplace_back(2);

//     cout<<v[0]<<" "<<v[1];
//     }


// int main (){
//     vector<pair<int ,int>>v;
//     v.push_back({1,2});
//     v.emplace_back(3,4);;
// }


int main (){
    vector<int>v={1,2,3,4};
    v.push_front(10); 
     int l = v.size();
//    for(int i=0;i<l;i++){
//     cout<<v[i]<<endl;
//    }
for(auto it : v){
    cout<<it<<" ";
}
    }
// int main(){
//  vector<int>v(5);
//      int l = v.size();
//     for(int i =0; i<l;i++){
//     cout<<v[i]<<endl;
  
//      }
//       }
// int main(){
//  vector<int>v(5,20);
//      int l = v.size();
//      vector<int>v2(v);
//     for(int i =0; i<l;i++){
//     cout<<v2[i]<<endl;
  
//      }
//       }

