/*#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size"<<endl;
    int i,n,arr[50];
    cin>>n;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int j;
    int rightsum=0;
    int leftsum=0;
    for(i=0;i<n;++i){
   
    for(j=0;j<i;j++)
    {
        leftsum=leftsum+arr[j];
    }
    
    for(j=i+1;j<n;j++)
    {
        rightsum=rightsum+arr[j];
    }
    if(leftsum==rightsum)
    {
        return i;
    }
    cout<<"the equilibrium are"<<i<<endl;
   
    return -1;
    }
   

    return 0;
    
}*/
// C++ program to find equilibrium
// index of an array
#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
	int i, j;
	int leftsum, rightsum;

	/* Check for indexes one by one until
	an equilibrium index is found */
	for (i = 0; i < n; ++i) {

		/* get left sum */
		leftsum = 0;
		for (j = 0; j < i; j++)
			leftsum += arr[j];

		/* get right sum */
		rightsum = 0;
		for (j = i + 1; j < n; j++)
			rightsum += arr[j];

		/* if leftsum and rightsum
		are same, then we are done */
		if (leftsum == rightsum)
			return i;
	}

	/* return -1 if no equilibrium
	index is found */
	return -1;
}

// Driver code
int main()
{

    cout<<"Enter the size"<<endl;
    int i,arr_size,arr[50];
    cin>>arr_size;
    cout<<"enter elements"<<endl;
    for(i=0;i<arr_size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<arr_size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

	// Function call
	cout << equilibrium(arr, arr_size);
	return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)

