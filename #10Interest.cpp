#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


    const double P = 25000.0;
    const double R= 0.12 / 365.0;
    const int T = 30;
    const double WITHHOLDING_TAX_RATE = 0.10;

    double I = P * R * T;
    double withholding_tax = I * WITHHOLDING_TAX_RATE;
    double net_interest = I - withholding_tax;


    cout << "Interest earned: Php " << I << endl;
    cout  << "Withholding tax: Php " << withholding_tax << endl;
    cout << "Net interest: Php " << net_interest << endl;

    return 0;
}