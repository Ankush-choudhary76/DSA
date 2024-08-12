#include<bits/stdc++.h>
using namespace std ;

int main (){
    string s = "pwwkew";
int maxi = 0;
int i=0;
int j=0;
int n=s.size();
set<char>st;
while(i<n)
    if(st.find(s[i]) == st.end()){
        st.insert(s[i]);
       maxi = max(maxi,i-j+1);
       i++;
    }else{
       st.erase(s[j]);
       j++;
    }
    cout<<maxi;
}