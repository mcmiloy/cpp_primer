#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

int main(){
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while(std::cin >> grade){
        if (grade <= 100)
            ++scores[grade/10];
    // same as
    // auto ind = grade/10;
    // scores[ind] = scores[ind] + 1;

    // the subscript operator vector[index] does not add elements to vector!!
    }
}