
#include <iostream>
using namespace std;

int main()
{
    // Declare an array to store 5 numbers
    int numbers[5];

    int evenCount = 0;

    // Input: Ask the user to enter 5 numbers
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Count the even numbers
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    // Display the number of even numbers
    cout << "\nNumber of even numbers: "
         << evenCount << endl;

    // Display all values stored in the array
    cout << "\nAll numbers in the array:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}
