#include<bits/stdc++.h>
using namespace std ; 
int find(vector<int>arr , int n ){
    vector<int>next(n+1 , 0);
    vector<int>cur (n+1 , 0);

    for(int ind = n-1 ; ind >= 0 ; ind--){
        for(int prev_ind = ind-1 ; prev_ind>=-1 ; prev_ind--){
            int NT = 0 + next[prev_ind+1];
            int take = 0 ;
            if(prev_ind==-1 || arr[ind]%arr[prev_ind]==0 && arr[ind]>arr[prev_ind]){
             take = 1 + next[ind+1];
            }
            cur[prev_ind+1] = max(take , NT);
        }
        next = cur ; 
    }
    return next[0];
}
int main (){
    vector<int>arr={1,16,7,8,9};
    sort(arr.begin() , arr.end());

    int n = arr.size();
    cout<<find(arr , n  );
}
