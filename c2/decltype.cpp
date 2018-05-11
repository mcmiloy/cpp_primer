#include <iostream>

int main(){
    double i = 42;
    decltype(i) a = 12;
    std::cout << sizeof(a) << std::endl;
    ++a;

    return 0;
}