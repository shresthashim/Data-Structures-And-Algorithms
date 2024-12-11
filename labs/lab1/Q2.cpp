// Delete an element from an index in a list

// Time Complexity: O(n)

#include <iostream>

using namespace std;

void printElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 60};

    int n = 5;

    int idx = 2;

    for (int i = idx; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "After Deletion: ";

    printElements(arr, n);

    return 0;
}