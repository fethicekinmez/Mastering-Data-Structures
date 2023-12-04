
#include <iostream>
using namespace std;

class Rectanle{
private:
    int length;
    int breadth;
    
public:
    Rectanle(){
        length = 0;
        breadth = 0;
    }
    Rectanle(int l, int b){
        length = l;
        breadth = b;
    }
    void printArea(){
        cout << "Area is: " << length*breadth << endl;
    }
    
    void setLength(int l){
        length = l;
    }
    void setBreadth(int b){
        breadth = b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    
};

int main(){
    
    Rectanle r1;
    r1.printArea();
    
    Rectanle r2(11, 22);
    r2.printArea();
    
}
