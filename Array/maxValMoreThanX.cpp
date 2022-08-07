
#include <bits/stdc++.h>
using namespace std;



class Solution{
  public:
    //O(n) time and O(1) space complexity
    int smallestSubWithSum(int arr[], int n, int x) //n is size and x is the sum
    {
       int sum = 0;
       int minLength = n + 1;
       int lIndex = 0, rIndex = 0;

       while(rIndex < n)
       {
            while (sum <= x && lIndex < n)
            {
                sum += arr[rIndex];
                rIndex++;
            }
            
            while (sum > x && lIndex < n)
            {
                if(rIndex - lIndex < minLength)
                {
                    minLength = rIndex - lIndex;
                }

                sum = sum - arr[lIndex];
                lIndex++;
            }  

       }
        return minLength;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here

    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    Solution obj;
    cout<<obj.smallestSubWithSum(a,n,x)<<endl;

	return 0;
}