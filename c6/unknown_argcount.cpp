#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;



int sum_all(std::initializer_list<int> li){
    int res = 0;
    for(auto item: li){
        res += item;
    }
    return res;
}


int main(){
    cout << sum_all({1,2,3,4,5}) << endl;



    return 0;
}