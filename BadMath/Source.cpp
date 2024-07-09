// Week 9
// Jenna Stone
// CIS 1202 201
// July 8th, 2024

#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate the average of three integers
float average(int i1, int i2, int i3)
{
    return (i1 + i2 + i3) / 3.0f;
}

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;

    cout << "This program calculates the average of three numbers." << endl;

    // Input for the first number
    cout << "First number: ";
    cin >> n1;

    // Input for the second number
    cout << "Second number: ";
    cin >> n2;

    // Input for the third number
    cout << "Third number: ";
    cin >> n3;

    // Calculate the average
    float a = average(n1, n2, n3);

    // Output the result with one decimal place
    cout << setprecision(1) << fixed << "The average is " << a << endl;

    return 0;
}
