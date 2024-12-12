// Tower of Hanoi problem

// Time Complexity: O(2^n)

// Common Steps:
// Step 1: Move all disks except the biggest one to a helper rod.
// Step 2: Move the biggest disk to the target rod.
// Step 3: Move the smaller disks from the helper rod to the target rod.

#include <iostream>

using namespace std;

void printMove(int start, int end)
{
    cout << "Move disk from " << start << " to " << end << endl;
}

void towerOfHanoi(int n, int start, int end)
{
    if (n == 1)
    {
        printMove(start, end);
        return;
    }
    else
    {
        int other = 6 - start - end; // Manually calculate which rod is  the other (helper) rod

        towerOfHanoi(n - 1, start, other); // Move the top n-1 disks from start rod to other (helper) rod

        printMove(start, end); // Move the nth disk (largest disk) from start rod to end rod (this is the base case)

        towerOfHanoi(n - 1, other, end); // Move the n-1 disks from the other (helper) rod to the end rod
    }
}

int main()
{
    int n;

    cout << "Enter the number of disks: ";

    cin >> n;

    towerOfHanoi(n, 1, 3);

    return 0;
}
