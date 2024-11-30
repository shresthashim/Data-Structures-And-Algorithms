//

#include <iostream>

using namespace std;

int main()
{

    int n = 6;

    int prices[6] = {7, 1, 5, 3, 6, 14};

    int bestBuy = prices[0], maxProfit = 0;

    for (int i = 1; i < n; i++)
    {

        if (bestBuy < prices[i])

            maxProfit = max(maxProfit, prices[i] - bestBuy);

        bestBuy = min(bestBuy, prices[i]);
    }

    cout << maxProfit << endl;

    return 0;
}