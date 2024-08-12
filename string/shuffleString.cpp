#include<bits/stdc++.h>
 using namespace std;
string restoreString(string s, vector<int>& indices) {
      int  n = indices.size();
      string str;
      map<int,int>mpp;
      for(int i=0 ; i<n;i++){
        mpp[indices[i]] = s[i];
      }
      for(auto it : mpp){
        str.push_back(it.second);
         break ;
         
      }
      return str ;

    }
int main (){
    string s ="codeleet";
    vector<int>a = {4,5,6,7,0,2,1,3};
   string str = restoreString(s, a );

   for(auto it : str){
    cout<<it;
   } 
  
}