#include<bits/stdc++.h>
using namespace std ;
vector<int>Findresult(vector<int>arr,vector<int>brr){
int i=0;
int j=0;
int n = arr.size();
int m = brr.size();
vector<int>temp;
while(i<n &&j<m){
    if(arr[i]<brr[j]){
        i++;
    }else if(arr[i]>brr[j]){
       
      j++;
       
    }else{
        temp.push_back(arr[i]);
        i++;
        j++;
    }
}
        return temp;
}
int main()

{

  vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7,12,13,14,19,20};
  vector<int> arr2 = {2, 3, 4, 4, 5, 6, 12,19}; 
  vector<int> result = Findresult(arr1, arr2);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto  val: result)
    cout << val << " ";
  return 0;
}