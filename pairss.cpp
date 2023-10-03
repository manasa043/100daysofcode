// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int v[] = {1,2,3,4,5,0};
    int pairs = 0;
// ret;
    int size = 6;

    int target;
    cout<<"enter : ";
    cin>>target;
    for(int i=0;i<size;i++){
        
        for(int j=i+1;j<size;j++){
            if(v[i]+v[j]==target){
                pairs++;
            }

        }
    }
    cout<<pairs;
    // cout<<ret;
    // return ret;
    return 0;
}