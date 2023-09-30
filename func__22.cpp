// #include <iostream>
// using namespace std;
// int main() {
//   cout<<"enter a number"<<endl;
//   int n;
//   cin>>n;
//   int count = 0;
//   while(n>0) {
//     count++;
//     n = n/10;
//   }  
//   cout<<count;
//   return 0;
// }










// #include <iostream>
// using namespace std;
// int main() {
//   cout<<"enter a number"<<endl;
//   int n;
//   cin>>n;
//   int count = 0;
//   int sum = 0;
//   while(n>0) {
//     int ld = n%10;
//     sum = sum+ld;
//     n = n/10;
//   }  
// //   cout<<count;
//   cout<<sum;
//   return 0;
// }







// #include <iostream>
// using namespace std;
// int main() {
//       int n;
//   cin>>n;
// //   int count = 0;
// //   int sum = 0;
//   int rev = 0;
//   while(n>0) {
//     int ld = n%10;
//     rev = rev*10+ld;
//     n = n/10;
//     }
// cout<<rev;
// return 0;
// }












// #include <iostream>
// using namespace std;
// bool odd(int x){
//     if(x%2!=0){
//         return true;
//     }
    
// }
// int main(){
//     for(int i=0;i<=10;i++){
//         if(odd(i)){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }








// #include<iostream>
// using namespace std;
// bool prime(int n){
// for(int i=2;i<=n-1;i++){
//     if(n%i==0){
//         return false;
//     }
// }
// // return true;
// }
// int main(){
//     int a,b;
//     a = 10;
//     b =20;
//     for(int i = a;i <=b;i++){
//         if(prime(i)){
//             cout<<i<<" ";
//         }
//     }
// return 0;
// }