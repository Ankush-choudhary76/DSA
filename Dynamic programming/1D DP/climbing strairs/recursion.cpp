#include <bits/stdc++.h>
using namespace std ;
int cli_Stair (int n ){
    if(n <= 1 ) return 1;
    return cli_Stair(n-1)+cli_Stair(n-2);
}
int main (){
      int n = 3;
      cout<<cli_Stair(n);
}
