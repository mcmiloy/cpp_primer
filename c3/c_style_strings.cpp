#include <iostream>
#include <cstring>
#include <vector>

int *VecToAry(std::vector<int> vec);

int main(){
    char mystring[] = "Hello, World!";
    std::cout << strlen(mystring) << std::endl; //strlen comes from cstring

    char ca[] = {'C', '+', '+', '\0'}; //C style string. Do not forget \0. std::string preferred in C++
    std::cout << strlen(ca) << " " << ca << std::endl;

    const char ca2[] = {'h','e','l','l','o','\0'};
    const char *cp = ca2;
    while(*cp){
        std::cout << *cp << std::endl;
        ++cp;
    }


    // using an array to initialize a vector:

    int int_arr[] = {0,1,2,3,4,5};
    std::vector<int> ivec(std::begin(int_arr), std::end(int_arr));

    for(auto item: ivec){
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::vector<int> initializer{1,2,3,4,5,6,7,8,9,10};
    std::vector<int> ivec2;

    for(auto begin = initializer.begin(); begin < initializer.end(); begin+=2){
        ivec2.push_back(*begin);
    }

    for(auto item: ivec2)
        std::cout << item << " ";
    std::cout << std::endl;

    //initializing an array from a vec:
    std::vector<int> iVec3 = {1,2,3,4,5};
    int myary3[iVec3.size()];
    auto piVec3 =  iVec3.begin();
    auto pmyary3 = myary3;
    while(piVec3 != iVec3.end()){
        *pmyary3 = *piVec3;
        ++piVec3;
        ++pmyary3;
    }

    for(auto item: myary3)
        std::cout << item << " ";
    std::cout << std::endl;


    return 0;
}

