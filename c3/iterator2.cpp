#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

int main(){
    vector<int> myvec{1,2,3,4,5,6,7,8,9};
    for(auto it = myvec.begin(); it!=myvec.end(); ++it){
        (*it) *= 2;
    }

    for(auto item: myvec)
        std::cout << item << " ";

    std::cout << std::endl;

    return 0;
}