#include <iostream>
using namespace std;

int main()
{
    int dollar;
    double peso, rate = 50.74;
    cout << "Enter dollar amount: ";
    cin >> dollar;
    peso = dollar * rate;
    cout << dollar << " dollars is equal to " << peso << " peso's." << endl;

    return 0;
}