#include<bits/stdc++.h>
using namespace std;

int kadaneAlgo(int arr[], int size);
int main(){

	int arr[] = {-47, 43, 94, -94, -93, -59, 31, -86};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << kadaneAlgo(arr, size) << endl;

	
}

int kadaneAlgo(int arr[], int size){

	int currentSum = 0;
	int maxSum = INT_MIN;
	if(size <= 0) return -1;
	if(size == 1) return arr[0];

	for (int i = 0; i < size; ++i)
	{
		currentSum += arr[i];
		if(currentSum > maxSum)
		{
			maxSum = currentSum;
		}
		if(currentSum < 0)
		{
			currentSum = 0;
		}
	}
	return maxSum;
}