#include <iostream>

using namespace std;

int main() {

    int num, temp;
    int count = 0;

    // Take input from user
    cout << "Enter any number : ";
    cin >> num;

    // Store to temporary variable.
    temp = num;

    while(temp != 0) {

        // Increment counter
        count++;

        // Remove last digit of 'temp'
        temp /= 10;
        cout<<temp<<"\n";
    }

    cout << endl << "Total digits in " << num << " : "  << count;

    return 0;
}
