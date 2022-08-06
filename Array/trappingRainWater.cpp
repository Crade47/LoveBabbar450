
#include<bits/stdc++.h>

using namespace std;


class Solution{

    public:
    long long trappingWater(int arr[], int n);
};

int main(){
    

        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;

    
    return 0;
}

//O(n) and O(n) space and time complexity
long long Solution :: trappingWater(int arr[], int n){
    long long leftArr[n];
    long long rightArr[n];
    long long ans = 0, height = 0;
    long long leftValue = LLONG_MIN;
    long long rightValue = LLONG_MIN;

    //Traversing array from left to right 
    for (int i = 0; i < n; i++)
    {
        leftValue = max((long long)arr[i], leftValue);
        leftArr[i] = leftValue;
    }

    //Traversing array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        rightValue = max((long long)arr[i], rightValue);
        rightArr[i] = rightValue;
    }

    for (int i = 0; i < n; i++)
    {
        height = (long long)arr[i];
        ans += min(leftArr[i], rightArr[i]) - height;
    }
    
    return ans;
    
}