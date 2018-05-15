#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

#include "myfuncs.h"


vector<int> range(int beg, int end, int step = 0){
    vector<int> ret{};
    if(step > 0){
        for(int i = beg; i<end; i+=step){
            ret.push_back(i);
        }
    } else if(step < 0) {
        for(int i = beg; i>end; i+=step){
            ret.push_back(i);
        }
    }
    return ret;
}
