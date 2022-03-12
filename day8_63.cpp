#include<vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int profit = 0;
    int n = prices.size();
    int dp[n];
    int cost = prices[0];
    for(int i = 1; i < prices.size(); ++i){
        dp[i] = max(dp[i - 1], prices[i] - cost);
        cost = min(prices[i], cost);
    }

    return dp[n - 1];
}

int main(){
    return 0;
}