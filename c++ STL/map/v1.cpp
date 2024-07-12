#include<bits/stdc++.h>
using namespace std ;

int main  (){
vector<int>arr;
vector<int>temp;
int n =4;
map<int,int>mp;
for(int i=0;i<4;i++){
    int r ;
    cin>>r;
    arr.push_back(r);
    mp[arr[i]]++;
}

for(auto v : mp){
    if(v.second==1){
        temp.push_back(v.first);
    }else{
        temp.push_back(0);
    }
}
for(int i=0;i<4;i++){
    cout<<temp[i]<<endl;
}

}