//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
class Cube {
    float side=7;
public:
    float volume() {
        return side * side * side;
    }

}; 
int main() {
    Cube c1;
    float v1 = c1.volume();
    cout << "Volume of Cube 1: " << v1 << endl;
    return 0;
}
/*
Output:
Volume of Cube 1: 343

if side is accessed there would be error as it is private but method can access it.
*/