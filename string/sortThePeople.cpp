#include<bits/stdc++.h>
 using namespace std ;
 vector<string > Sort_the_people(  vector<string>rr , vector<int>k) {
        map <int , string >mpp;
        for(int i=0 ; i<k.size();i++){
             mpp[k[i]] = rr[i];
        }
    vector<string>ans(k.size()) ;
     int index = 0 ;
     sort(k.begin(),k.end());
         for(int i= k.size()-1; i>=0 ;i--){
             ans[index] = mpp[k[i]];
             index ++;
         }
             return ans ;
      
    }
    int main (){
    vector<string > ans= {"Mary","John","Emma"};
    vector<int>height = {180,165,170};
    vector<string>result = Sort_the_people(ans , height);
   for(auto it  : result){
    cout<<it<<",";
   }
    }