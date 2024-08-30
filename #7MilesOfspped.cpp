#include <iostream>
using namespace std;

int main() {
    float distance = 5400.0;
    float speed = 220.0;
    float time = distance / speed;
    cout << "Time to cover " << distance << " miles at 220 mph is: " << time << " hours" << endl;
    return 0;
}