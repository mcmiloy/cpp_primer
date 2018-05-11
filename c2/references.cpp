#include <iostream>


int main(){
    int ival= 1024;
    int &refVal = ival;

    int i = 0, &r1 = i; double d = 0, &r2 = d;

    r2 = r1;
    r1 = d;
    std::cout << i << std::endl;
    std::cout << r2 << std::endl;

    refVal = 100;

    std::cout << ival << std::endl;

    return 0;
}