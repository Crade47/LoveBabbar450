#include<bits/stdc++.h>
using namespace std;

long long int inversionCount(long long arr[], long long N);
long long int mergeSort(long long arr[], long long temp[], long long beg, long long end);
long long int merge(long long arr[], long long temp[], long long beg, long long mid, long long end);
int main(){

	long long arr[] = { 1, 20, 6, 4, 5 };
	long long size = sizeof(arr) / sizeof(arr[0]);

	int ans = inversionCount(arr, size);

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << "  ";
	}
	cout << "\n" << "INVERSION: " << ans;
}

long long int inversionCount(long long arr[], long long N){
	long long temp[N];
	return mergeSort(arr, temp, 0, N - 1);
}

long long int mergeSort(long long arr[], long long temp[], long long beg, long long end)
{
	long long mid, inv_count = 0;
	if(beg < end){
		mid = (beg + end) / 2;

		inv_count += mergeSort(arr, temp, beg, mid);
		inv_count += mergeSort(arr, temp, mid + 1, end);

		inv_count += merge(arr, temp, beg, mid + 1, end);
	}
	return inv_count;
}

long long int merge(long long arr[], long long temp[], long long beg, long long mid, long long end){
	long long i, j, index;
	long long inv_count = 0;

	i = beg;
	j = mid;
    index = beg;

    while((i <= mid - 1) && (j <= end))
    {
    	if(arr[i] <= arr[j])
    	{
    		temp[index++] = arr[i++];
    	}
    	else
    	{
    		temp[index++] = arr[j++];

    		inv_count = inv_count + (mid - i);
    	}
    }

    while(i <= mid - 1) 
    {
    	temp[index++] = arr[i++];
    }

    while(j <= end)
    {
    	temp[index++] = arr[j++];
    }

    for(i = beg; i <= end; i++)
    {
    	arr[i] = temp[i];
    }
    return inv_count;
}