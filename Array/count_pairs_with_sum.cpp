#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k);//O(n)
};

int main(){
    
    int array[] = {1,5,7,5,1};
    int size = sizeof(array)/sizeof(array[0]);
    int key = 6;
    int ans;

    Solution s1;
    ans = s1.getPairsCount(array, size, key);

    cout << "\n" << ans;

    return 0;
}


int Solution :: getPairsCount(int arr[], int n, int k) { 
        //k is the key sum 
        //n is the size of the array
        int count = 0;
        unordered_map<int, int>  occurences;
//adding all elements and their count in the array
        for (int i = 0; i < n; i++)
        {
            occurences[arr[i]]++;
        }


        
        for (int i = 0; i < n; i++)
        {
            if(occurences.find(k - arr[i]) != occurences.end())
            {
                count += occurences[k -arr[i]];
            }
            
            if (k - arr[i] == arr[i])
                count--;
        }

        return count / 2;
        
}