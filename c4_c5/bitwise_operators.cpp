#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;


int main(){
    unsigned long quiz1 = 0;
    quiz1 |= (1UL << 27); // student 27 passed the test

    quiz1 &= ~(1UL << 27); // student 27 failed the test

    bool status = quiz1 & (1UL << 27); // checks if student 27 passed


    unsigned char q = 'q';
    unsigned long something = (~q << 6);
    cout << something << "\n";

    return 0;
}