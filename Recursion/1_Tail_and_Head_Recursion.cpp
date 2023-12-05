
#include <iostream>
using namespace std;

void calling(int n){
    if(n>0){
        printf("%d", n);
        calling(n-1);
    }
}

void returning(int n){
    if(n>0){
        returning(n-1);
        printf("%d", n);
    }
}

int main(int argc, const char * argv[]) {
    
    int x = 5;
    
    cout << "calling recursive func " << endl;
    calling(x);
    cout << endl << "returning recursive func " << endl;
    returning(x);
    cout << endl;

    return 0;
}
