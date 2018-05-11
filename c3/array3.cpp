#include <iostream>

bool cmpare_arys(int *ary1, int *ary2, int ary1_size, int ary2_size);


int main(){
    const int myarray_size = 10;
    int myarray[myarray_size] = {0,1,2,3,4,5,6,7,8,9};

    int *begin = myarray;
    int *end = &myarray[myarray_size];

    for(int *p = begin; p != end; ++p){
        *p = 0;
    }

    for(auto item: myarray){
        std::cout << item << " ";
    }
    std::cout << '\n';


    const int ary1_size = 5;
    const int ary2_size = 5;
    int ary1[ary1_size] = {1,2,3,4,5};
    int ary2[ary2_size] = {1,2,3,4,5};
    std::cout << cmpare_arys(ary1, ary2, ary1_size, ary2_size) << std::endl;


    return 0;
}

bool cmpare_arys(int *ary1, int *ary2, int ary1_size, int ary2_size){
    if(ary1_size != ary2_size)
        return false;

    int *end1 = ary1 + ary1_size;
    while(ary1 != end1){
        if(*ary1 != *ary2)
            return false;
        ++ary1;
        ++ary2;
    }
    return true;
}