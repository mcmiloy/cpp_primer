#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int mysum(int i, int j){
    return i + j;
}

void default_args(int i = 0){
    cout << i << endl;
}

int mysum(double i, const int j){
    return i*j;
}

int main(){
    cout << mysum(3,4) << endl; // this uses mysum with two ints
    cout << mysum(3.0,4) << endl; // this use mysun with one int, two doubles

    default_args();
    return 0;
}