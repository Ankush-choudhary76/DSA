#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n =5;
    int arr []={1,2,4,5};
int XOR1=0;
int XOR2=0;
for(int i=0;i<n-1;i++){
    XOR2^=arr[i];
    XOR1^=i+1;
}
  XOR2^=n;
int r = XOR1^XOR2;
cout<<r;

}