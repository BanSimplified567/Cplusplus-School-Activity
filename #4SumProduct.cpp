#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum, product;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;
    product = num1 * num2;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
