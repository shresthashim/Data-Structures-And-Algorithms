// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// Time Complexity: O(n^2)

#include <iostream>

using namespace std;

int main()
{

    int n = 5, target = 7;

    int arr[5] = {1, 2, 3, 4, -5};

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] == target)
            {

                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}