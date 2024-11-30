// Brute Force Approach

// Given an array of height of containers, find the maximum area of water that can be trapped between the containers.

// Time Complexity: O(n^2)

#include <iostream>
using namespace std;

int main (){


    int maxWaterStored = 0;

    int  n = 9;

    int height[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            int heightOfContainer = min(height[i], height[j]);
            int widthOfContainer = j - i;

            int area = heightOfContainer * widthOfContainer;

            maxWaterStored = max(maxWaterStored, area);
        }
    }

    cout << maxWaterStored << endl;

    return 0;

}