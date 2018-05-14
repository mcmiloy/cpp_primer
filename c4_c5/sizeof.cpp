#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

struct Test{
    int test1, test2, test3, test4;
};

int main(){
    Test test;
    Test *testptr = &test;
    vector<int> testvec;
    for(int i=0; i<1000; ++i){
        testvec.push_back(i);
    }

    // cout << sizeof test << "\n"; // same as next line
    cout << "size of struct with 4 ints: " << sizeof(Test) << "\n";
    cout << "size of ptr to mentioned struct: " << sizeof testptr << "\n"; // need () for Types but not expressions
    cout << "char: " << sizeof(char) << "\n";
    cout << "vector with lots of elements: " << sizeof(testvec) << "\n"; // doesn't take into account the numbers put into it
    cout << "int vector with no elements: " << sizeof(vector<int>) << "\n";

    int intary[] = {1,2,3,4,5,6,7,8,9,10};
    int *aryptr = intary;
    cout << "Ten element int array: " << sizeof(intary) << "\n";
    cout << "pointer to ten element int array: " << sizeof(aryptr) << "\n";
    cout << "first element of array: " << sizeof(*intary) << "\n";
    cout << "number of items in array: " << sizeof(intary)/sizeof(*intary) << "\n";

    cout << "\n\n";

    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;

    // comma operator:

    vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
    vector<int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt){ // here for operates two variables at the same time
        ivec[ix] = cnt;
    }

    for(auto item: ivec) cout << item << " "; cout << "\n";


    for(int i=0, j=20; i<10 && j<50; ++i, ++j){
        cout << i << " " << j << "\n";
    }

    // explicit conversions (casts)
    //  beware of casts... they are dangerous (honestly why would you use them...)
    // reinterpret_cast is very very dangerous and machine dependent

    double pi = 3.14159;
    // old-style cast
    cout << (int)pi + 7 << endl; //probably shouldn't use: very inexplicit
    // could be any of const_cast, static_cast, or reinterpret_cast....

    // new-style cast (named casts)
    cout << static_cast<int>(pi) + 7 << endl; 
    // other casts: const_cast, reinterpret_cast, dynamic_cast


    return 0;
}