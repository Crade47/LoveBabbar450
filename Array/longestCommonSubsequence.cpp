#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int commonSub(int arr[], int n);
};
int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\n";
    Solution s1;
    int ans = s1.commonSub(arr, size);
    cout << ans;
    
return 0;
}

int Solution :: commonSub(int arr[], int n){
    vector<int> array(arr, arr + n);
    int count = 0, maxLength = 0;
    sort(array.begin(), array.end());


    auto it = unique(array.begin(), array.end());
    array.resize(distance(array.begin(), it));
    
    for (int i = 0; i < array.size(); i++)
    {
        if(i > 0 && array[i] == array[i - 1] + 1)
        {   
            count++;
        }
        else
        {
            count = 1;
        }
        maxLength = max(count , maxLength);
    }
    

    return maxLength;

}