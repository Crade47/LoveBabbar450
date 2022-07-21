#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int size, int k);
int main(){

	int arr[] = {2 ,6 ,3 ,4 ,7 ,2 ,10 ,3 ,2 ,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int sum = getMinDiff(arr, size, k);
    cout << "\n" << sum;
	
}

int getMinDiff(int arr[], int size, int k)
{
	if(size == 0) return 0;
	sort(arr, arr + size);
	int diff = arr[size - 1] - arr[0];
	int maxElement, minElement;
	for (int i = 1; i < size; ++i)
	{
		if(arr[i] - k < 0) continue;
		maxElement = max(arr[i-1] + k,arr[size - 1] - k);
		minElement = min(arr[0] + k, arr[i] - k);
		diff = min(diff, maxElement - minElement);
	}
	return diff;
}