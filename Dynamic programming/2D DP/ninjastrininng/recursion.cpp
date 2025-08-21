#include<bits/stdc++.h>
using namespace std ;
int f(int day , int last , vector<vector<int>>&points){
    if(day ==0) {
        int maxi =0 ;
        for (int i = 0; i <= 2; i++) {
        if (i != last)
        maxi = max(maxi, points[0][i]);

        }
         return  maxi;
    }
    int maxi =0 ;
    for(int i=0 ; i<= 2 ; i++){
        if(i != last){
            int activity = points[day][i] + f(day -1,i, points);
            maxi = max(maxi , activity);
        }
    }
    return maxi ; 

}

int ninjaTraining(int n , vector<vector<int>>&points){
    return f(n-1 , 3 , points);
}

int main() {
  vector<vector<int>> points = {{10, 40, 70},
                                {20, 50, 80},
                                {30, 60, 90}  
                                };

  int n = points.size(); 
  cout << ninjaTraining(n, points);
}
