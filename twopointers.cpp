/*#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the size of array"<<endl;
    int i,j,n,temp;
    int arr[100];
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
         
        cout<<arr[i]<<" ";
    }
    int val;
    cout<<"Enter the sum value"<<endl;
    cin>>val;
    cout<<pair(arr,n,val);
}
    
    int pair(int arr[],int n,int val){
    for(int i=0;i<n-1;i++)
    {
        int j=n-1;
        while(i<j)
        {
            if(arr[i]+arr[j]==val)
            {
                return true;
            }
            else if(arr[i]+arr[j]>val)
            {
                j--;
            }
            else
              i++;
        }
        return false;
        
    }
    cout<<endl;
    }*/
    // C++ Program Illustrating Naive Approach to
// Find if There is a Pair in A[0..N-1] with Given Sum
// Using Two-pointers Technique

// Importing required libraries
#include <bits/stdc++.h>
using namespace std;

// Two pointer technique based solution to find
// if there is a pair in A[0..N-1] with a given sum.
int isPairSum(vector<int>& A, int N, int X)
{
	// represents first pointer
	int i = 0;

	// represents second pointer
	int j = N - 1;

	while (i < j) {

		// If we find a pair
		if (A[i] + A[j] == X)
			return 1;

		// If sum of elements at current
		// pointers is less, we move towards
		// higher values by doing i++
		else if (A[i] + A[j] < X)
			i++;

		// If sum of elements at current
		// pointers is more, we move towards
		// lower values by doing j--
		else
			j--;
	}
	return 0;
}

// Driver code
int main()
{
	// array declaration
	vector<int> arr = { 2, 3, 5, 8, 9, 10, 11 };

	// value to search
	int val = 17;

	// size of the array
	int arrSize = arr.size();

	// array should be sorted before using two-pointer
	// technique
	sort(arr.begin(), arr.end());

	// Function call
	cout << (isPairSum(arr, arrSize, val) ? "True"
										: "False");

	return 0;
}




