#include <iostream>
using namespace std;

int main() {
    float hourly_rate = 8450; // hourly rate of worker
    int hours_worked = 40; // number of hours worked by worker

    float gross_pay = hourly_rate * hours_worked; // formula to calculate gross pay
    cout << "Allie Pomperada's gross pay is: P" << gross_pay << endl; // display the gross pay to the user

    return 0;
}