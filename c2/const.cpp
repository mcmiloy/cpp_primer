#include <iostream>

int main(){
    int i = 0;
    int j = 1;
    int *p1 = &i;
    p1 = &j;
    *p1 = 42;
    std::cout << i << std::endl;
    
    // in general we cn convert a nonconst to const ut not the other way around.

    const int a = 27;

    return 0;
}