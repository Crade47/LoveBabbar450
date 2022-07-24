#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k);//O(n)
};

int main(){
    
    int array[] = {1,5,7,1};
    int size = sizeof(array)/sizeof(array[0]);
    int key = 6;
    int ans;

    Solution s1;
    ans = s1.getPairsCount(array, size, key);

    cout << "\n" << ans;

    return 0;
}


int Solution :: getPairsCount(int arr[], int n, int k) {  //O(n) time and O(n) space
        //k is the sum
        //n is the size
        unordered_map<int,int> occurrence; //unordered map gives a O(1) time complexity while looking up elements

        int count = 0; // counter for pairs
        int value = 0; // a + value = sum therefore value = sum - a where a is the element in the array 

        for (int i = 0; i < n; i++)
        {
            value = k - arr[i];
            if(occurrence.find(value) != occurrence.end()) //Finding if the difference of the value exists in the map
            {
                count += occurrence[value];
            }
            occurrence[arr[i]]++;
        }
        return count;
        
}