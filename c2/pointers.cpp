#include <iostream>
#include <cstdlib>



int main(){
    int ival = 42;
    int *p = &ival;
    *p = 0;

    std::cout << ival << std::endl;

    int *p1 = 0; // this initializes p1 to be a nullpointer.
    int *p2 = nullptr; //this is the c++11 way to do it
    int *p3 = NULL; //this comes from cstdlib; avoid: use nullptr instead.

    p ? std::cout << "true" : std::cout << "false";
    std::cout << std::endl;

    p2 ? std::cout << "true" : std::cout << "false";
    std::cout << std::endl;

    // std::cout << *p2 << std::endl; <-- doesn't work because p2 is nullptr.

    int *emptypointer; //bad bad bad: don't do this!! Initialize ALL pointers. If necessary to nullptr

    std::cout << *emptypointer /*for some reason there is one in here*/ << std::endl;

    //*void pointers:
    double obj = 3.14, *pd = &obj;
    void *pv = &obj;
    pv = pd;





    return 0;
}