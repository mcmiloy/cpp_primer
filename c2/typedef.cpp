#include <iostream>
#include <vector>

int main(){
    typedef double db;
    typedef double *dbp;
    db a = 3.5;
    dbp aptr = &a;

    std::cout << a << std::endl;
    std::cout << *aptr << std::endl;

    using iVector = std::vector<int>;
    iVector myvec {1,2,3,4,5};

    int myarray[6] = {1,2,3,4,5};
    myarray[5] = 6;
    for(auto item: myarray)
        std::cout << item << '\n';
    std::cout << sizeof(myarray) << std::endl;


    auto myint = 5;
    std::cout << sizeof(myint) << '\n';
    auto mydouble = 5.0;
    std::cout << sizeof(mydouble) << '\n';
    auto sum = myint + mydouble;
    std::cout << sizeof(sum) << '\n';
    std::cout << sum << std::endl;

    for(auto item: myvec)
        std::cout << item << "\n";



    return 0;
}