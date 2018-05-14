#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main(){
    int i = 5;
    beg:
    cout << i << endl;
    --i;
    if(i!=0) goto beg;
    cout << "Launch!" << endl;


    return 0;
}