//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 

    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int left = 0, right = c;
        int top = 0, bottom = r;
        vector<int> answerArray;
        while (left < right && top < bottom)
        {
             
            for (int i = left; i < right; i++)
            {
                answerArray.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i < bottom; i++)
            {
                answerArray.push_back(matrix[i][right - 1]);
            }
            right--;

            if(!(left < right && top < bottom))
            {
                break;
            }

            for (int i = right - 1; i >= left; i--)
            {
                answerArray.push_back(matrix[bottom - 1][i]);
            }
            bottom--;

            for (int i = bottom - 1; i >= top; i--)
            {
                answerArray.push_back(matrix[i][left]);
            }
            left++;
        }
        
        return answerArray;

    }
};

int main() {

    int r,c;
    cin>>r>>c;
    vector<vector<int> > matrix(r); 

    for(int i=0; i<r; i++)
    {
        matrix[i].assign(c, 0);
        for( int j=0; j<c; j++)
        {
            cin>>matrix[i][j];
        }
    }

    Solution ob;
    vector<int> result = ob.spirallyTraverse(matrix, r, c);
    for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
    cout<<endl;

    return 0;
}
// } Driver Code Ends