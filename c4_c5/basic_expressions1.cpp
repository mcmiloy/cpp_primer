#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main(){
    // int i = 0;
    // cout << i << " " << ++i << std::endl;
    // This is unspecified behaviour.
    // We are not guaranteed that i is evaluated before ++i

    // short short_value = 32767;
    // short_value += 1;
    // cout << short_value;
    // This is also undefined because 32767 is the largest short
    // Here it yields -32768

    float my_float = 3.5;
    int seven = 7;
    float my_float2 = seven/my_float;
    cout << my_float2 << std::endl;

    cout << -3 % 2 << std::endl; // Note that this yields -1

    int val = 42;
    if (val == true) cout << 42 << std::endl; // this checks if 42 == 1
    if (val) cout << "Forty Two" << endl; // this checks the truth value of 42
    
    int k = 3.99;
    cout << k << endl; // k is always rounded down (this yields 3)

    // vector<int> vi;
    // vi = {0,1,2,3,4,5};
    // vi = {5,4,3,2,1};

    // for(auto item: vi)
    //     cout << item << endl;

    int ival, jval;
    ival = jval = 0; // ok: both are zero

    int i = 0;
    while(++i < 5)
        cout << i << endl;

    int j = 42;
    j %= 20;
    cout << j << endl;

    // if(i = j){
    //     cout << "Stupid!" << endl;
    // }
    // Thankfully the compiler(clang++) warns us about this

    int za; double zr;
    zr = za = 3.5;
    cout << za << " " << zr << endl; // this makes zr = 3

    vector<int> v = {100, 200, 300};
    auto pbeg = v.begin();
    while (pbeg != v.end()){
        cout << *pbeg++ << endl; // = *(pbeg++): dereference and increment two-in-one
    }

    int *ptr = nullptr;
    cout << (ptr == nullptr) << endl;

    // ptr->mem is the same as (*ptr).mem

    string s1 = "a string", *p = &s1;
    auto n = s1.size();
    n = (*p).size();
    n = p->size();

    auto iter = v.begin();
    cout << ++*iter << endl;
    cout << *iter++;

    // int grade;
    // cin >> grade;
    // string finalgrade = (grade > 90) ? "high pass"
    //                                  : (grade < 80) ? "fail" : "pass";
    // Ternary operator... You can nest them but don't

    // std::cout << finalgrade << endl;
    

    cout << "\n\n";

    vector<int> myvec7;

    for(int i=0; i<10; ++i){
        myvec7.push_back(i);
    }

    for(auto &item: myvec7){
        item%2 ? item*=2 : item; 
    }

    for(auto item: myvec7){
        cout << item << ", ";
    }
    cout << "\n";

    unsigned four = 4;
    four = four << 1; // makes 4 to 8 (100 becomes 1000)
    cout << four << "\n";
    cout << (4>>1) << "\n"; // makes 4 to 2 (100 becomes 10)
    unsigned five = 5;
    five = five << 1;
    cout << five << "\n"; // makes 5 to 10 (101 becomes 1010)
    cout << (5>>1) << "\n"; //makes 5 to 2 (101 becomes 10)
    // it is undefined how negative shifts are handled: use unsigned types



    

    return 0;
}