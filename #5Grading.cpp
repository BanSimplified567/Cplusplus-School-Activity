#include <iostream>
using namespace std;

int main()
{
    double preLim, midTerm, endTerm,result=0 ;

    cout << "Enter prelim grade: ";
    cin >> preLim;
    cout << "Enter midterm grade: ";
    cin >> midTerm;
    cout << "Enter endterm grade: ";
    cin >> endTerm;

    result= (preLim * 0.20) + (midTerm * 0.30) + (endTerm * 0.40) ;

    cout << "Final Grade: " << result << endl;
    return 0;
}