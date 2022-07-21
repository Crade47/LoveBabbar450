#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:    
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3) //Time Complexity : O(n1 + n2+ n3) and Space Complexity: O(1)
    {
        vector<int> elements;
        int i = 0, j = 0, k = 0 , l = 0;

        while(i < n1 && j < n2 && k < n3)
        {
            if(A[i] == B[j] && B[j] == C[k])
            {
                elements.push_back(A[i]);
                i++, j++, k++;
            }
            else if(A[i] < B[j])
            {
                i++;
            }
            else if(B[j] < C[k])
            {
                j++;
            }
            else
            {
                k++;
            }


        }

        auto ip = unique(elements.begin(), elements.begin() + elements.size());
        elements.resize(distance(elements.begin(), ip));
        return elements;
        
    }

};

int main(){

    int array1[] = {1, 5, 10, 20, 40, 80};
    int array2[] = {6, 7, 20, 80, 100};
    int array3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);
    int size3 = sizeof(array3)/sizeof(array3[0]);

    Solution s1;
    vector<int> result = s1.commonElements(array1, array2, array3, size1, size2, size3);
    cout << "\n\n";
    for(auto i : result)
    {
        cout << i << " ";
    }

return 0;
}