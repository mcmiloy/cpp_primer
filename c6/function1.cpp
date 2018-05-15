#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

#include "c6.h"

int main(){
    cout << factorial(5) << endl;

    cout << myabs(3) << endl;
    cout << myabs(-3) << endl;
    cout << myabs(0) << endl;

    count_calls();
    count_calls();
    count_calls();
    cout << count_calls() << endl;


    return 0;
}