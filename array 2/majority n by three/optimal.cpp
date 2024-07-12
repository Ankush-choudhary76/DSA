#include<bits/stdc++.h>
using namespace std ;

vector<int>major(vector<int>arr){
    int n = arr.size();
    int  ele1=INT_MAX;
    int  ele2=INT_MAX;
    int cnt1=0,cnt2=0;
    vector<int>list ;
    for(int i =0 ; i<n;i++){
         if(cnt1==0 && ele2!=arr[i]){
            cnt1 = 1 ;
            ele1 = arr[i];
         }else if (cnt2==0 && ele1!=arr[i]){
            cnt2 = 1;
            ele2=arr[i];
        }else if(arr[i]==ele1)cnt1++;
        else if(arr[i]==ele2)cnt2++;
        else {
            cnt1--;cnt2--;
        }
    } 
    int count1 = 0,count2=0;
    for(int i = 0 ; i<n;i++){
        if(ele1==arr[i])count1++;
        if(ele2==arr[i])count2++;
    }
    int mini = n/3+1;
    if(count1>=mini)list.push_back(ele1);
    if(count2>=mini)list.push_back(ele2);
    sort(list.begin(),list.end());

    return list ;
}

int main ( ){
    vector<int> arr= {2,1,1,3,1,4,2,2};
    vector<int>result=major(arr);
    for(auto it : result){
        cout<<it<<" ";
    }
}