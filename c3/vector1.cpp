#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

int main(){
    // char a1[] = {'C', '+', '+'}; // Don't forget the NULL character
    // char *pa1 = a1;
    // pa1 += 4;
    // *pa1 = 'c';
    // std::cout << *pa1 << std::endl;
    // char a2[] = "C++";
    // for(int i = 0; i<sizeof(a2)/sizeof(*a2); ++i)
    //     std::cout << (a1[i] == a2[i]) << std::endl;
    //std::cout << ((char)0 == '\0') << std::endl; // the character with charactercode 0 is NULL.
    // std::cout << a1 << std::endl;

    // vector<int> v1;
    // vector<int> v2(10);
    // vector<int> v3(10, 42);
    // vector<int> v4{10};
    // vector<int> v5{10,42};
    // vector<string> v6{10};
    // vector<string> v7{10, "hi"};
    
    // for(auto item: v6)
    //     std::cout << item << std::endl;

    vector<int> v2;
    for(int i=0; i!=100; ++i)
        v2.push_back(i);
    
    string word;
    vector<string> text;
    while (std::cin >> word)
        text.push_back(word);

    // int num;
    // vector<int> ints;
    // while(std::cin >> num)
    //     ints.push_back(num);

    vector<int> v8{1,2,3,4,5,6,7,8};
    for(auto &i: v8)
        i*=i;
    for(auto i : v8)
        std::cout << i << " ";
    std::cout << std::endl;
    
    return 0;
}