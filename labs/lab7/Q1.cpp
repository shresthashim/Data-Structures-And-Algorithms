// Binary Search

// Time complexity: O(log n)

#include <iostream>
using namespace std;

int main()
{
    int n, arr[10];
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;

    cout << "Enter the element to search: ";

    cin >> key;

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << "Element found at index " << mid << endl;
            return 0;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Element not found." << endl;

    return 0;
}