#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	int maxProfit(vector<int> &prices);


};

int main(){

	vector<int> array = {3,1,4,8,7,2,5};
	int ans;
	Solution s1;

	ans = s1.maxProfit(array);

	cout << "\n" << ans;

	

	
}
/* //O(n) O(n)
int Solution :: maxProfit(vector<int> &prices){

	vector<int> maxValues(prices.size());

	int profit = 0;

	maxValues[prices.size() - 1] = prices[prices.size() - 1];

	for (int i = prices.size() - 2; i >= 0; i--)
	{
		maxValues[i] = max(prices[i], maxValues[i + 1]);
	}

	for (int i = 0; i < prices.size(); i++)
	{
		if(maxValues[i] - prices[i] > profit) profit = maxValues[i] - prices[i];
	}

	if(profit <= 0) return 0;
	else return profit;

}
*/

int Solution :: maxProfit(vector<int> &prices){
	int minSoFar = prices[0];
	int profit = 0;
	int c_profit;
	for (int i = 0; i < prices.size(); i++)  //[3,1,4,8,7,2,5]
	{
		if(prices[i] < minSoFar) minSoFar = prices[i];
		
		c_profit = prices[i] - minSoFar;
            
        profit = max(profit, c_profit);
	}
	return profit;
}