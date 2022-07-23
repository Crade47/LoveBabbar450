#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool subArrayExist(int arr[], int n); // n is the size of the array
};

bool duplicateOrZeroCheck(int arr[], int size);


int main(){

    int arr[] = {10, -10};
    int size = sizeof(arr)/sizeof(arr[0]);
    Solution s1;
    bool ans = s1.subArrayExist(arr, size);
    ans == 1 ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}


bool Solution :: subArrayExist(int arr[], int n){
    int sum = 0;
    int prefixSum[n];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0) return true;
        sum += arr[i];
        prefixSum[i] = sum;
    }

    if(duplicateOrZeroCheck(prefixSum, n) == true) return true;
    else return false;

    
}

bool duplicateOrZeroCheck(int arr[], int size){
    sort(arr, arr + size);

    for (int i = 1; i < size; i++)
    {
        
        if(arr[i] == arr[i - 1]) return true;
    }

    for (int i = 0; i < size; i++)
    {
        
        if(arr[i] == 0) return true;
    }

    return false;

}