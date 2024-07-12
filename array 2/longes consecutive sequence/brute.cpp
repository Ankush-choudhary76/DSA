#include<bits/stdc++.h>
using namespace std ;


bool linearsearch(vector<int>arr,int r ){

    for(int i =0 ; i<arr.size();i++){
        if(arr[i]==r){
            return true ;
        }
    }
    return false ;
}

int ram(vector<int>arr){
    int longest = 1 ;
    for(int i =0 ;i<arr.size();i++){
        int x = arr[i];
        int count = 1 ;

        while (linearsearch(arr,x+1)==true){
            x++;
            count++;
        }
        longest=max(longest,count);
    }
    return longest;
}

int main (){
vector<int>arr={102,4,103,1,100,3,2,1};

int r = ram(arr);
cout<<r<<endl ;
}