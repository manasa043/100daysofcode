// star triangular pattern
//#include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter num of cols you want : "<<endl;
//     cin>>n;
//         for( int i=1;i<=n;i++){
//             for(int j=1;j<=(n-i);j++){
//                 cout<<" ";
//             }
//             for(int j=1;j<=(2*(i)-1);j++){
//                 cout<<"*";
//             }           
//             cout<<endl;
//         }
// return 0;
// }


// the dollowing code is mostly based on spaces and stars
//first write code for spaces and then for the stars.
// enter num of cols you want : 
// 6
//      *
//     ***
//    *****
//   *******
//  *********
// ***********










// numerical rectangular pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter num of cols you want : "<<endl;
//     cin>>n;
//         for( int i=1;i<=n;i++){
//             for(int j=i;j<=n;j++){
//                 cout<<j;

//             }    
//             for(int j=1;j<=i-1;j++){
//                 cout<<j;

//             }               
//             cout<<endl;
//         }
// return 0;
// }






// enter num of cols you want : 
// 5
// 12345
// 23451
// 34512
// 45123
// 51234




















// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter num of cols you want : "<<endl;
//     cin>>n;
//         for( int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){
//                 cout<<j;

//             }    
//             cout<<endl;
//         }
// return 0;
// }



















// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter num of rows you want : "<<endl;
//     cin>>m;
//     cout<<"enter num of cols you want : "<<endl;
//     cin>>n;
//     // int r,c;
//         for( int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || j==1 || i==m|| j==n){
//             cout<<j;
//         }
//         else{
//             cout<<" ";
//         }
//             }
//             cout<<endl;
//         }
// return 0;
// }






// enter num of rows you want : 
// 5
// enter num of cols you want : 
// 6
// 123456
// 1    6
// 1    6
// 1    6
// 123456







// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter num of rows you want : "<<endl;
//     cin>>n;
//     cout<<"enter num of cols half of it you 5: "<<endl;
//     cin>>m;
//         for( int i=1;i<=n;i++){
//             if(i%2==0){
//                 for(int j=1;j<=(m);j++){
//                 cout<<"21";
//             }   
//             }
//             else{
//                    for(int j=1;j<=(m);j++){
//                 cout<<"12";

//             }  
//             }
//             cout<<endl;
//         }
// return 0;
// }













// #include<iostream>
// using namespace std;
// int main(){
//     int n,m,i,j;
//     cout<<"enter num of rows you want : "<<endl;
//     cin>>n;
//     cout<<"enter num of cols half of it you 5: "<<endl;
//     cin>>m;
    
//         for(i=1;i<=n;i++){
//             for(j=1;j<=m;j++){
//                         if((i+j)%2==0){
//                             cout<<"1";
//                         }
//                             else{
//                             cout<<"2";
//                         }
//             }         
//         cout<<endl;
//         }
// return 0;
// }


// enter num of rows you want : 
// 5
// enter num of cols half of it you 5: 
// 5
// 12121
// 21212
// 12121
// 21212
// 12121














// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter num of rows you want : "<<endl;
//     cin>>n;
    
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout<<j;
//             }         
//         cout<<endl;
//         }
// return 0;
// }



// enter num of rows you want : 
// 4
// 1
// 12
// 123
// 1234










// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter num of rows you want : "<<endl;
//     cin>>n;
    
//         for(int i=1;i<=n;i++){
//                 for(int j=1;j<=(n-i);j++){
//                 cout<<" ";
//             }
//             for(int j=1;j<=(2*(i)-1);j++){
//                 cout<<j;
//             }    
//             cout<<endl;  
//         }
// return 0;
// }










// enter num of rows you want : 
// 5
//     1
//    123
//   12345
//  1234567
// 123456789
















// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter num of rows you want : "<<endl;
//     cin>>n;
    
//         for(int i=1;i<=n;i++){
//                 for(int j=1;j<=(n-i);j++){
//                 cout<<" ";
//             }
//             for(int j=1;j<=i ;j++){
//                 cout<<j;
//             }    
//             for(int j=i-1;j>=1 ;j--){
//                 cout<<j;
//             }  
//             cout<<endl;  
//         }
// return 0;  
// }





// enter num of rows you want : 
// 5
//     1
//    121
//   12321
//  1234321
// 123454321








