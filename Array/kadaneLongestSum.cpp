#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int);
int main(){
    int arr[] = {-47, 43, 94, -94, -93, -59, 31, -86};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = kadane(arr, size);
    cout << sum;
return 0;
}

int kadane(int arr[], int size){

    int max_sum = INT_MIN;
    int current_sum = 0;
    for (int i = 0; i < size; ++i)
    {
        current_sum += arr[i];
        if(current_sum > max_sum)
        {
            max_sum = current_sum;
        }
        if(current_sum < 0)
        {
            current_sum = 0;
        }
        
    }
    return max_sum;
    
}