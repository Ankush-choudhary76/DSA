#include<bits/stdc++.h>
using namespace std ;
int find(vector<int>weight,int cap){
    int day = 1 , load = 0;
    for(int i=0 ;i<weight.size();i++){
        if(load + weight[i] > cap){
            day ++ ;
            load = weight[i];
        }else{
            load = load + weight[i];
        }
    }
    return day ;
}
int leastCapacity(vector<int>weight , int day){
      int maxi = *max_element(weight.begin(),weight.end());
      int sum =  accumulate(weight.begin(),weight.end(),0);
      for(int cap = maxi ; cap <= sum ; cap++){
        if(find(weight,cap)<= day){
            return cap;
        }
      }
      return -1 ;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int day = 5 ;
    int result = leastCapacity(arr,day);
    cout<<result ;
}