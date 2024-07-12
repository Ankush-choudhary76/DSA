#include<bits/stdc++.h>
using namespace std ;

int main (){
vector<int>arr={1,2,3,-3,1,1,1,4,2,-3};
int r = 3 ;
int count = 0 ;
for(int i =0 ;i<arr.size();i++){
 int  sum = 0 ;
    for(int j=i;j<arr.size();j++){
            sum +=arr[j];
         if(sum == r ){
            count ++;
         }
    }
}
cout<<count ;

}