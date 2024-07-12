#include<bits/stdc++.h>
using namespace std ;

int longe(vector<int>arr){
    int n = arr.size();
    int longest =0;
    unordered_set<int>st;
    for(int i =0 ; i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        if(st.find(it-1)==st.end()){
                   int count = 1;
                   int x = it ;
                   while(st.find(x+1)!=st.end()){
                    count ++;
                    x++;
                   }
            longest   = max ( longest , count);    
        }
    }
    return longest;
}
int main (){
    vector<int>arr={100,102,100,101,101,4,3,2,3,2,1,1};
int r = longe(arr);
cout<<r<<endl;

}