#include <iostream>

int main(){
    int value = 5;
    int &reference_to_value = value;
    int *ptr = nullptr;
    ptr = &value;
    *ptr = 6;
    std::cout << value << std::endl;

    std::cout << reference_to_value << std::endl;


    int i = 0;
    int *ip = &i;

    int j = 0;
    int *myptr = &j;

    myptr? std::cout << "true" : std::cout << "false";
    std::cout << std::endl;

    int fourty_two = 42;
    void *p = &fourty_two;

    // std::cout << *p << std::endl;


    int a = 42;
    int *pointer_to_a = &a;

    std::cout << pointer_to_a << std::endl;
    std::cout << &pointer_to_a << std::endl;


    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;

    int *iq = &ival;
    int *&r = iq;
    std::cout << ival << std::endl;


    return 0;
}