//
// Created by 胡广行 on 2020/12/4.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int cash = 0; int hold = -prices[0];
        for (int i = 0; i < prices.size(); i++) {
            cash = max(cash, hold + prices[i] - fee);
            hold = max(hold, cash - prices[i]);
        }
        return cash;
    }
};

int main(){
    int profit = 0;
    int fee = 2;
    vector<int>prices = {1, 3, 2, 8, 4, 9} ;
    Solution solution;
    profit = solution.maxProfit(prices,fee);
    cout<<profit;
}


