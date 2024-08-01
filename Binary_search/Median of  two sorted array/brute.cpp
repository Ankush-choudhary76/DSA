#include<bits/stdc++.h>
using namespace std ;
double median ( vector<int>arr,vector<int>brr ){
    vector<int>temp ;
    int r = arr.size() , m = brr.size();
    int i = 0 , j = 0 ;
    while(i < r && j < m){
        if(arr[i]< brr[j]){
             temp.push_back(arr[i]) ;
             i++;
        }
        else {temp.push_back(brr[j]) ; j++ ;} 
    }
    while( i < r){ temp.push_back(arr[i]); i++; }
    while( j  < m){ temp.push_back(brr[j]) ; j++ ;}
    int n = r + m ;
    if(n%2 == 1) return (double)temp[n/2];
    double  rr  = ((double)temp[n/2] + (double)temp[(n/2)-1]) / 2.0 ;
           return rr ; 


}
int main (){
    vector<int>arr = {1,3,4,7,10,12};
    vector<int>brr = {2,3,6,15};
     cout<<fixed<<setprecision(1)<< median(arr,brr);
    
}


// #include <bits/stdc++.h>
// using namespace std;

// double median(vector<int>& a, vector<int>& b) {
//     //size of two given arrays:
//     int n1 = a.size(), n2 = b.size();
 
//     vector<int> arr3;
//     //apply the merge step:
//     int i = 0, j = 0;
//     while (i < n1 && j < n2) {
//         if (a[i] < b[j]) arr3.push_back(a[i++]);
//         else arr3.push_back(b[j++]);
//     }

//     //copy the left-out elements:
//     while (i < n1) arr3.push_back(a[i++]);
//     while (j < n2) arr3.push_back(b[j++]);

//     //Find the median:
//     int n = n1 + n2;
//     if (n % 2 == 1) {
//         return (double)arr3[n / 2];
//     }

//     double median = ((double)arr3[n / 2] + (double)arr3[(n / 2) - 1]) / 2.0;
//     return median;
// }

// int main()
// {
//     vector<int> a = {1, 4, 7, 10, 12};
//     vector<int> b = {2, 3, 6, 15};
//     cout << "The median of two sorted array is " << fixed << setprecision(1)
//          << median(a, b) << '\n';
// }

