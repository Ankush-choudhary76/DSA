#include<bits/stdc++.h>
using namespace std ;
vector<int> Findresult(vector<int>a,vector< int> b,int n1,int n2){
vector<int>unionn;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionn.size()==0 || unionn.back()!=a[i] ){
                unionn.push_back(a[i]);
            }i++;
        }else{
             if (unionn.size()==0 || unionn.back()!=b[j] ){
                unionn.push_back(b[j]);
            }j++;
        }
    }
    while(j<n2){
            if(unionn.size()==0 || unionn.back()!=b[j] ){
                unionn.push_back(b[j]);
            }j++;
    }
    while(i<n1){
         if(unionn.size()==0 || unionn.back()!=a[i] ){
                unionn.push_back(a[i]);
            }i++;
    }
          return unionn;
}
int main()

{
  int n = 10, m = 7;
  vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > result = Findresult(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: result)
    cout << val << " ";
  return 0;
}