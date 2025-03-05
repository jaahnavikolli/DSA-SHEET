#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;  // Initialize sum to 0
    cout << "Enter the value of N: ";
    cin >> N;  // Take user input for N

    // Loop from 1 to N to calculate the sum
    for (int i = 1; i <= N; i++) {
        sum = sum + i;
    }

    // Print the result
    cout << "Sum of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}