#include<bits/stdc++.h>
using namespace std ;

int longe(vector<int>arr){
int n = arr.size();
sort(arr.begin(),arr.end());
int count = 0 ,lastsmaller = INT_MIN , longest = 0 ;
for(int i =0 ; i<n;i++){
if(arr[i]-1 ==lastsmaller){
          count ++;
          lastsmaller = arr[i];
}else if(arr[i]!=lastsmaller){
    count = 1;
    lastsmaller = arr[i];
}
longest = max(longest , count);
}
return longest;

}

int main(){
vector<int>arr={100,102,100,101,101,4,3,2,3,2,1,1};
int r = longe(arr);
cout<<r<<endl;

}
