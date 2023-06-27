/*#include<bits/stdc++.h>
using namespace std;
int gcd(int d,int n);
//void left_rotate(int *arr,int d,int n);
//void printarray(int arr[],int n);
int main()
{
  cout<<"enter the no.of elements in an given array"<<endl;
  int n;
  cin>>n;
  int arr[n],i;
  cout<<"the elements are"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"the array is"<<endl;
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  int d;
  cout<<"enter the number of rotations"<<endl;
  cin>>d;
  void left_rotate(int *arr,int d,int n);
  cout<<"the array is after rotations"<<endl;
  cout<<"the array is"<<endl;
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
  
  
   


}
void left_rotate(int arr[],int d,int n)
{
    cout<<"describe above elements"<<endl;
    d=d%n;
    int g_c_d;
    g_c_d=gcd(d,n);
    int i;
    int temp;
    for(i=0;i<g_c_d;i++)
    {
       temp=arr[i];
       int j=i;
       while(1)
       {
        int k=j+d;
        if(k>=n)
        {
            k=k-n;
        }
        if(k==i)
        {
            break;
        }
        arr[j]=arr[k];
        j=k;


       }
       arr[j]=temp;
    }
    
}
int gcd(int a,int b)
{
    if(b=0)
    {
       return 0;
    }
    else
       return gcd(a,b);
}
void printarray(int *arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}*/
#include <bits/stdc++.h>
using namespace std;
 
//Function to get gcd of a and b
int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
 
//Function to left rotate arr[] of size n by d
void leftRotate(int arr[], int d, int n)
{
     //To handle if d >= n 
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
         //move i-th values of blocks 
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
 
// Driver's code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    // Function calling
    leftRotate(arr, d, n);
    printArray(arr, n);
 
    return 0;
}