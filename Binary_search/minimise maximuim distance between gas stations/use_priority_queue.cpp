#include<bits/stdc++.h>
using namespace std ;
long double maxidiffbetwgas(vector<int>arr, int k , int n){
    vector<int>howmuch(n-1 , 0);
    priority_queue<pair<long double,int>> pq;
    for(int i = 0 ; i<n-1;i++){
        pq.push({arr[i+1]-arr[i],i});
    }
    for( int gasst = 1 ; gasst<= k ; gasst++){
    auto it = pq.top();
    pq.pop();
    int secInd = it.second;
    howmuch[secInd]++;
    
    long double ideff = arr[secInd+1]-arr[secInd];
    long double newlen = ideff / ((long double)howmuch[secInd]+1 );
    pq.push({newlen , secInd});

    }
    return pq.top().first ;
}
int main(){
    vector<int>arr{1,2,3,4,5};
    int k =4 , n = 4 ;
    long double ans = maxidiffbetwgas(arr, k ,n);
    cout<< ans ;
}