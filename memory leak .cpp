#include <iostream>
using namespace std;

int main() {
    
    int* ptr = new int;
    ptr = new int; 
    delete ptr; 
    cout << ptr;
}

