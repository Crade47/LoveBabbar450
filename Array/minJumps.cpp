#include<bits/stdc++.h>
using namespace std;

int minJump(int arr[], int size);
int main(){
	
	int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};

	// int arr[] = {1, 4, 3, 2, 6, 7}; 
	int size = sizeof(arr) / sizeof(arr[0]);

	int jumps = minJump(arr, size);
	cout << jumps;
}

int minJump(int arr[], int size){
	if(size <= 1) return 0;
	if(arr[0] == 0) return -1;
	int step = arr[0];
	int maxReach = arr[0];
	int jump = 1;
	for(int i = 1; i < size ; i++)
	{
		if(i == size - 1) return jump;
		maxReach = max(maxReach, i + arr[i]);
		step--;
		if(step == 0){
			jump++;
			if(i >= maxReach) return -1;
			step = maxReach - i;
		}

	}
	return -1;	

}

