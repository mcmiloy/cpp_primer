#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

#include "myfuncs.h"


int main(){
    vector<int> myvec = range(0,10,1);
    for(auto item: myvec)
        cout << item << endl;


    cout << "Changed" << endl;
}