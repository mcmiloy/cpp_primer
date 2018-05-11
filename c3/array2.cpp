#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;


int main(){
    // unsigned scores[11] = {}; //filled with zeroes...
    // unsigned grade;
    // while(std::cin >> grade){
    //     if(grade <= 100)
    //         ++scores[grade/10];
    // }


    int myarray[10]{};
    for(int i; i<(sizeof(myarray)/sizeof(*myarray)); ++i){
        myarray[i] = i;
    }

    int myarray2[sizeof(myarray)/sizeof(*myarray)]{};
    for(int i; i<(sizeof(myarray)/sizeof(*myarray)); ++i){
        myarray2[i] = myarray[i];
    }


    for(auto item: myarray2)
        std::cout << item << std::endl;

    string nums[] = {"one", "two", "three"};
    string *p = &nums[0];
    string *p2 = nums; // an array is (almost) just a pointer to the first element

    int ia[] = {1,2,3,4,5,6};
    decltype(ia) ia3 = {0,1,2,3,4,5}; // now ia3 really is an int array with 6 elements

    int ary[10] = {0,1,2,3,4,5,6,7,8,9};
    int *aryend = &ary[10]; //points to the first address after the end of the array (one of the end pointer)
    for(int *b = ary; b!=aryend; ++b)
        std::cout << *b << std::endl; //you can do this, but this is error prone. Don't do this.

    int myary2[] = {0,1,2,3,4,5,6,7,8,9};
    int *beg = std::begin(myary2); // std::begin and std::end come from <vector>
    int *last = std::end(myary2);
    std::vector<int> myvec2;
    while(beg != last){
        myvec2.push_back(*beg);
        ++beg;
    }

    for(auto item: myvec2){
        std::cout << item << std::endl;
    }




    return 0;
}