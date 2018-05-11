#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

int main(){

    string text = "abcdefghijklmnopqrstuvwxyz";
    char sought = 'a';

    auto beg = text.begin(), end=text.end();
    auto mid = text.begin() + (end-beg)/2;
    int tries = 0;
    while(mid != end && *mid != sought){
        if(sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end-beg)/2;
        ++tries;
        if(*mid==sought) std::cout << "Success!" << std::endl;
    }
    std::cout << tries << std::endl;

    for(int i=0,j=0; i<10&&j<10; ++i&&++j){
        std::cout << i << " " << j << std::endl;
    }
    

}