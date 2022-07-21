#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m);
void display(int arr[], int n);
int main(){
	int arr1[] = {1, 3, 5, 7};
	int arr2[] = {0, 2, 6, 8, 9};
	int n = sizeof(arr1) / sizeof(arr1[0]); //n is size of array 1
	int m = sizeof(arr2) / sizeof(arr2[0]); //m is the size of array 2
	merge(arr1, arr2, n, m);
	display(arr1, n);
	display(arr2, m);
	
}

void merge(int arr1[], int arr2[], int n, int m){

	int i = n - 1, j = 0;
	while(i >= 0 and j < m)
	{
		if(arr1[i] > arr2[j])
		{
			swap(arr1[i], arr2[j]);
			i--;
		}
		else j++;
	}

	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);
}

void display(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";

}