#include <iostream>
using namespace std;

int main()
{
    int radiusSphere;
    float volsphere;
    cout<<" Input the radius of a sphere : ";
    cin>>radiusSphere;
    volsphere=(4*3.14*radiusSphere)/3;
    cout<<" The volume of a sphere is : "<< volsphere << endl;
    cout << endl;
    return 0;
}