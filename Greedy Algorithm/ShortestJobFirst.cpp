#include<bits/stdc++.h> 
using namespace std ;

int sjf(vector<int>bt){
    int n = bt.size();
    sort(bt.begin() , bt.end());
     int t = 0 , wt = 0 ; 
    for(int i = 0 ; i<n ; i++){
        wt +=t ; 
        t += bt[i];
    }
    return wt/n ;
}
int main (){
    vector<int>bt = {4,3,7,1,2};
    cout<<sjf(bt);
}
