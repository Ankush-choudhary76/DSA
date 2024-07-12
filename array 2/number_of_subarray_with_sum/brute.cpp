#include<bits/stdc++.h>
using namespace std ;

int main (){
vector<int>arr={1,2,3,-3,1,1,1,4,2,-3};
int r = 3 ;
int count = 0 ;
for(int i =0 ;i<arr.size();i++){

    for(int j=i;j<arr.size();j++){
          int  sum = 0 ;
         for(int k = i ;k<=j;k++){
            sum +=arr[k];
         }
         if(sum == r ){
            count ++;
         }
    }
}
cout<<count ;

}