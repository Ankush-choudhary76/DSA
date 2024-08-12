// #include<bits/stdc++.h>
// using namespace std ;

//       string defang(string &address){
//         string str;
//             for(auto it : address){
//                 if(it == '.'){
//                    str.append("[.]");
//                 }else{
//                    str.append(1,it);
//                 }
//             }
//         return str ;
//       } 
    
//     int main(){
//        string str = "1.1.1.1";
//        string result = defang(str);
//         for(auto it : result){
//             cout<<it<<" ";
//         }
//     }                
#include<bits/stdc++.h>
using namespace std ;

      string defang(string &address){
        string str;
            for(auto it : address){
                if(it == '.'){
                   str += "[.]";
                }else{
                   str += it;
                }
            }
        return str ;
      } 
    
    int main(){
       string str = "1.1.1.1";
       string result = defang(str);
        for(auto it : result){
            cout<<it<<" ";
        }
    }                
//     #include<bits/stdc++.h>
// using namespace std ;

//       string defang(string &address){
//         string str;
//             for(auto it : address){
//                 if(it == '.'){
//                    str.append("[.]");
//                 }else{
//                    str.push_back(it);
//                 }
//             }
//         return str ;
//       } 
    
//     int main(){
//        string str = "1.1.1.1";
//        string result = defang(str);
//         for(auto it : result){
//             cout<<it<<" ";
//         }
//     }                