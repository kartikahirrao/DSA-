#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int size, int element)
//{
//	for(int i=0; i<size; i++)
//	{
//		if(arr[i] == element)
//		{
//			return i;
//		}
////	}
//	return -1;
//}

int binarySearch(int arr[] , int size, int element )
{
	int mid, high, low;
	low =0;
	high = size-1;
	
	// start searching 
	
	while(low<=high){
	
	mid = (low+high)/2;
	if(arr[mid] ==element)
	{
		return mid;
		
	}
	if(arr[mid]<element)
	{
		low = mid+1;
	}
	else{
		high= mid-1;
	
	}
	
	}
	//searching end
	
	return -1;
}
 int main()
 {
 	//unsorted array for Linear Search 
// 	int arr[] ={ 2,1,4,5,6,7,9,8};
// 	int size = sizeof(arr) / sizeof(int);

 	//sorted array for Binery Search 
 	int arr[] ={ 11,22,33,88,99,100,110,200};
 	int size = sizeof(arr) / sizeof(int);

 	int element = 200;
 	int searchIndex =binarySearch(arr, size, element );
 	cout<<"The element was ["<<element<<"]found at index = "<<searchIndex;
 	return 0;
 	
 }
