// #include<bits/stdc++.h>
// using namespace std ;
// int main (){
//     int n = 7;
//     int arr[]={1,1,2,3,3,4,4};
//     int maxi=arr[0];
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);
//     }
//   int   hash[maxi]={0};
//    for(int i=0;i<n;i++){
//     hash[arr[i]]++;
//    }
//     for(int i=0;i<n;i++){
//    if( hash[i]==1){

//    cout<<i<<endl;
//    }

// }
// }

#include<bits/stdc++.h>
using namespace std ;
int main (){
int arr[]={1,1,2,3,3,4,4};
int n=7;
int x = 0;
for(int i=0;i<n;i++){
x^=arr[i];
}
cout<<x<<endl;

}