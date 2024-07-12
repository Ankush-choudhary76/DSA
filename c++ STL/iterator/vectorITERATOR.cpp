// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//  vector< int>v={1,2,3,4,5};
//  v.push_back(5);
//  for(auto it : v){
//     cout<<it<<" ";
//  }
     
    
//       }


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, int>> v = { {1, 2}, {3, 4}, {5, 6} };
    v.push_back(make_pair(5, 8));
    for(auto it : v){
        cout << "(" << it.first << ", " << it.second << ") ";
    }
    return 0;
}
