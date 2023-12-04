#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
} r0;

struct Rectangle r1 = {1,2};

int main() {
    cout << "r0: " << r0.length << " " << r0.breadth << "  size of r0: " << sizeof(r0) << endl;

    cout << "r1: " << r1.length << " " << r1.breadth << "  size of r1: " << sizeof(r1) << endl;

    struct Rectangle r2 = {3,4};
    
    cout << "r2: " << r2.length << " " << r2.breadth << "  size of r2: " << sizeof(r2) << endl;
    
    
    return 0;
}
