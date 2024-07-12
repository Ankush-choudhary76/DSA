 // method 1 ;
// #include<bits/stdc++.h>
// using namespace std ;
// int find(vector<int>arr){
//     int n = arr.size();
//     int low = 0 , high = n-1 , ans = INT_MAX ;
//     while(low<=high){
//         int mid = (low + high )/2;
//         if(arr[low]<+arr[high]){
//              ans = min(arr[low],ans);
//              break ;
//         }
//         if(arr[low]<=arr[mid]){
//             ans = min(arr[low],ans);
//             low = mid +1;
//         }else{
//             ans  = min(arr[mid],ans);
//             high = mid -1 ;
//         }
//     }
//     return arr[ans];
// }
// int main  (){
//     vector<int>arr= {3,4,5,1,2};
//     int index = find(arr);
//     cout<<index;
// }



#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr) {
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        //search space is already sorted
        //then arr[low] will always be
        //the minimum in that search space:
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            // keep the minimum:
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return index;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findKRotation(arr);
    cout << "The array is rotated " << ans << " times.\n";
    return 0;
}

