#include<iostream>
using namespace std ;

int main (){
    int n ;
    cout<<"enter n :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cout<<"enter q :";
    cin>>q;
    while(q--){
        int number ;
        cout<<"enter number :";
        cin>>number;
        cout<<hash[number]<<endl;
    }


}