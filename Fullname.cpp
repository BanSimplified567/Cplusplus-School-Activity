#include <iostream>
#include <string>
using namespace std;

int main() 
{
    char fullname[100];
    string Address = "Poblacion, Sibonga Cebu";
    cout <<"Enter Full Name: ";
    cin.getline(fullname, sizeof(fullname));
    cout <<"Your Full Name is "<<fullname<<"\n";
    cout <<"Your address is "<<Address;
    
    return 0;
}