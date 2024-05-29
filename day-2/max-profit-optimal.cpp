#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.empty())
            return 0;

        int maxPro = 0;
        int minPrice = prices[0];

        for (int i = 1; i < prices.size(); ++i)
        {
            minPrice = min(minPrice, prices[i]);
            int profit = prices[i] - minPrice;
            maxPro = max(maxPro, profit);
        }

        return maxPro;
    }
};

int main()
{
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << sol.maxProfit(prices) << endl;

    return 0;
}
