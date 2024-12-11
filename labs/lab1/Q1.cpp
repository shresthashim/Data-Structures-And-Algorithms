// Insert an element at any index in a list

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

    int idx = 4, element = 50;

    for (int i = n; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[idx] = element;

    n++;

    cout << "After Insertion: ";

    printElements(arr, n);

    return 0;
}