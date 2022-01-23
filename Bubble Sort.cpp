#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void bubbleSort(int arr[] , int n)
{
	int i, j, temp;
	
	for(i=0; i<n; i++)
	{
		for(j =i+1; j<n; j++)
		{
			if(arr[j] <arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				
				cout<<endl;
			}
		}
	}
}
int main()
{
	int i,j,temp;
	
	int arr[5]={22,11,44,66,55};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Before sorting any element Array ::"<<endl;
	
	printArray(arr, n);
	bubbleSort(arr, n);
	
	cout<<"After sorting Array"<<endl;
	printArray(arr, n);
	
	
	
	 return 0;
	 
}
