#include <iostream>
#include <string>
#include <vector>

int main(){
    int ia[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    // std::string mystring;
    // std::cin >> mystring;
    // std::cout << mystring << std::endl;

    std::vector<int> myvec = {1,2,3,4,5};
    std::cout << myvec.at(4) << std::endl; //vector.at(index) checks vector bounds


    return 0;
}