
#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle x){
    return x.length * x.breadth;
}

void changeLength(struct Rectangle &y){
    y.length = 44;
}

void changeBreadth(struct Rectangle *y){
    y->breadth = 55;
}

struct Rectangle * createStructure(){
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 0;
    p->breadth = 0;
    return p;
}

int main(){
    
    Rectangle r = {4,8};
    
    cout << "area is: " << area(r) << endl;
    
    cout << r.length << " " << r.breadth << endl;
    
    changeLength(r);
    cout << r.length << " " << r.breadth << endl;
    
    changeBreadth(&r);
    cout << r.length << " " << r.breadth << endl;
    
    struct Rectangle * ptr = createStructure();
    
    cout << ptr->length << " " << ptr->breadth << endl;
    
    return 0;
    
}
