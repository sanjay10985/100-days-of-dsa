#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int maxPro = 0;

        int n = prices.size();

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int profit = prices[j] - prices[i];
                maxPro = max(maxPro, profit);
            }
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
