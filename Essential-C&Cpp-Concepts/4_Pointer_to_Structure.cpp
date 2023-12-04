#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main() {
    struct Rectangle r = {5,7};
    struct Rectangle *p = &r;
    
    cout << p->length << " " << r.length << endl;
    cout << p->breadth << " " << r.breadth << endl;
    
    struct Rectangle *rp ;
    rp = (struct Rectangle*)malloc(sizeof(struct Rectangle)); //in heap
    
    rp->length = 99;
    rp->breadth = 88;
    
    cout << rp->length << " " << rp->breadth << endl;
    cout << (*rp).length << " " << (*rp).breadth << endl;
    
    return 0;
}
