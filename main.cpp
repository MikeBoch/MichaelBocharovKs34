#include <iostream>
using namespace std;
 
int main() {
    int a, b;

    a = 5;
    b = 4;

    a = a+b;
    b = a-b;
    a = a-b;
    


    cout << a << "\n\n" << b << endl;

    getchar();
    return 0;
}