#include <iostream>

extern char i;
int a_1_or_2;
double Double = 3.14;

int main(){
    std::cout << "Hi \x4dO\115!\n";

    int hundred = 10e1;
    std::cout << hundred << std::endl;

    int myint = {42};
    std::cout << myint << std::endl;

    std::cout << i << std::endl;


    int i = 100, sum = 0;
    for(int i=0; i != 10; ++i){
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;

    return 0;
    
}

char i = 97;