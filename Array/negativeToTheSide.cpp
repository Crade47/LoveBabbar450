#include <bits/stdc++.h>
using namespace std;

void movNeg(int arr[], int n);
void movNeg2(int arr[], int n);
int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int size = sizeof(arr) / sizeof(arr[0]);
    movNeg2(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";  
    }
    

return 0;
}
void movNeg(int arr[], int size)
{
    set<int> neg(arr, arr + size);

    for(auto it = neg.begin(); it != neg.end(); it++)
    {
        cout << *it << " ";
    }   
}
void movNeg2(int arr[], int n)
{
    int left = 0, right = n - 1;

    while(left <= right)
    {
        if(arr[right] < 0 && arr[left] >= 0)
        {
            swap(arr[right], arr[left]);
            left++;
        }
        else if(arr[left] >= 0 && arr[right] >= 0)
        {
            right--;
        }
        else if(arr[left] < 0 && arr[right] < 0)
        {
            left++;
        }
        else
        {
            left++;
            right--;
        }
    }
}