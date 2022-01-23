#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int element)
{
	for(int i=0; i<size; i++)
	{
		if(arr[i] == element)
		{
			return i;
		}
	}
	return -1;
}


 int main()
 {
 	int arr[] ={ 2,1,4,5,6,7,9,8};
 	int size = sizeof(arr) / sizeof(int);
 	int element = 10;
 	int searchIndex = linearSearch(arr, size, element );
 	cout<<"The element was ["<<element<<"]found at index = "<<searchIndex;
 	return 0;
 	
 }
