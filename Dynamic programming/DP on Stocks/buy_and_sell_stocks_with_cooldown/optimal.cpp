#include<bits/stdc++.h>
using namespace std ; 


int stockProfit(vector<int>arr){
    int n = arr.size();
    vector<int>f1(2 , 0);
    vector<int>f2(2 , 0);
    vector<int>cur(2 , 0);

    for(int ind = n-1 ;ind>=0 ; ind--){
        for(int buy = 0 ; buy <=1 ;buy++){

            if( buy == 0){
                cur[buy]= max(f1[0] , -arr[ind]+f1[1]);
            }
            if( buy == 1){
                cur[buy]= max(0+f1[1] ,arr[ind]+ f2[0] );
            } 

        }
         f2= f1; 
         f1 = cur ; 

    }
   return  f1[0];
}


int main() {
    vector<int> prices {4, 9, 0, 4, 10};
                                 
    cout << "The maximum profit that can be generated is " << stockProfit(prices) << endl;
    return 0;
}
