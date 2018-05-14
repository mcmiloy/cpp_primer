#include <iostream>


int main(){
    int i  = 50;
    int res = 0;
    while(i<100) res += i, ++i;

    std::cout << res << std::endl;

    res = 0;
    for(int i = 0; i<100; ++i) res += i;
    std::cout << res << std::endl;
    
    

    return 0;
}