#include<bits/stdc++.h>
using namespace std ;

int daycount(vector<int>weight,int cap){
    int day = 1 ;
    int load = 0 ;
    for(int i=0 ;i<weight.size();i++){
        if(load + weight[i] >cap){
            day ++ ;
            load = weight[i];
        }else{
            load = load + weight[i];
        }
    }
    return day ;
}
int leastCapacity(vector<int>weight ,int day){
    int low = *max_element(weight.begin(),weight.end());
    int high = accumulate(weight.begin(),weight.end(),0);
    while(low<=high){
        int mid = (low + high)/2;
        int findday = daycount(weight,mid);
        if(findday <= day){
            high  = mid - 1;
        }else{
            low = mid +1 ;
        }
    }
    return low ;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int day = 5 ;
    int result = leastCapacity(arr,day);
    cout<<result ;
}