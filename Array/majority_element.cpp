#include <unordered_map>
#include <iostream>
using namespace std;

class Solution
{
public:
    int majorityElementHelper(int a[], int size);
};


int candidateFinder(int a[], int size);


int main(){
    int t;
        cin >> t;

        while(t--){
            int n;
            cin >> n;
            int arr[n];
            
            for(int i = 0;i<n;i++){
                cin >> arr[i];
            }
            Solution obj;
            cout << obj.majorityElementHelper(arr, n) << endl;
        }
return 0;
}

int candidateFinder(int a[], int size){

    int maj_element_count = 1, maj_index = 0;

// Loop through each element and maintains a count of majority element, and a majority index, maj_index
    for (int i = 1; i < size; i++)
    {
// If the next element is same then increment the count if the next element is not same then decrement the count.
        if(a[maj_index] == a[i])
        {
            maj_element_count++;
            maj_index = i;
        }
        else maj_element_count--;

// if the count reaches 0 then changes the maj_index to the current element and set the count again to 1.
        if(maj_element_count == 0)
        {
            maj_index = i;
            maj_element_count = 1;
        }
// Now again traverse through the array and find the count of majority element found.
// If the count is greater than half the size of the array, print the element
    }
    
    return a[maj_index];
}

int Solution :: majorityElementHelper(int a[], int size){ //O(n) O(1) Moore's Vote algorithm

    int cand = candidateFinder(a, size);
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if(a[i] == cand){
            count++;

        }

    }

        if(count > (double)size/2)
        {
            return cand;
        }
        else return -1;
    
}