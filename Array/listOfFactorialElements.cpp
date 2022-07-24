#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:     
    vector<int> factorial(int N); //N is number you have to find the factorial of
};


long long findFactorial(int N);
int countDigits(int number);


int main(){

    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;

return 0;
}

vector<int> Solution :: factorial(int N){

//     Time Complexity: O(nlogn!) n for loop  and logn! for while loop

//      Auxiliary Space: O(MAX)
    vector<int> fact;
    fact.push_back(1);
    int carry = 0;
    int val = 0;
    for(int j = 2; j <= N; j++)
    {
        carry = 0;
        for (int i = 0; i < fact.size(); i++)
        {
            val = fact[i] * j + carry;
            fact[i] = val % 10;
            carry = val / 10;
        }

        while(carry!=0)
        {
            fact.push_back(carry%10);
            carry /= 10;
        }
    }
    reverse(fact.begin(), fact.end());
    return fact;
}

