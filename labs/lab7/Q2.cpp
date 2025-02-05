// Linear Search

// Time complexity: O(n)

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

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }

    cout << "Element not found." << endl;

    return 0;
}