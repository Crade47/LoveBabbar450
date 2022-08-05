#include <bits/stdc++.h>
using namespace std;
bool find3Numbers(int A[], int n, int X);
int main(){
    	int size,key;
		cin>>size>>key;
		int i,A[size];
		for(i=0;i<size;i++)
			cin>>A[i];
		cout << find3Numbers(A, size, key) << endl;
return 0;
}

bool find3Numbers(int A[], int n, int X){

    int key = X;
    int temp = 0, cur_sum = 0;
    for (int i = 0; i < n - 2; i++)
    {
        cur_sum = key - A[i]; //12
        unordered_map<int,int> map;
        for (int j = i+1; j < n; j++)
        {
            if (map.find(cur_sum - A[j]) != map.end())
            {
                return true;
            }
            map[A[j]]++;
        }
        
    }

    return false;
    

}