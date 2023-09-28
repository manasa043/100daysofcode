// rectangular pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter num of rows you want : "<<endl;
//     cin>>m;
//     cout<<"enter num of cols you want : "<<endl;
//     cin>>n;
//         for( int i=1;i<=m;i++){
//             for(int j=1;j<=n;j++){
//                 cout<<"$";
//             }
//             cout<<endl;
//         }
// return 0;
// }



// $$$$$$
// $$$$$$
// $$$$$$
// $$$$$$
// $$$$$$




















// hollow rectangular pattern
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
//             cout<<"$";
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
// 3
// enter num of cols you want : 
// 5
// $$$$$
// $   $
// $$$$$














// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter num of rows you want : "<<endl;
//     cin>>n;
//         for( int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"$";
//         }
//         cout<<endl;
//         }
// return 0;
// }








#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num of rows you want : "<<endl;
    cin>>n;
        for( int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"$";
        }
        cout<<endl;
        }
return 0;
}