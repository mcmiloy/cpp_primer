#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

char &get_val(string &str, string::size_type ix){
    return str[ix];
}

vector<string> process(){
    return {"Hello", "World"}; // this is ok
}

vector<int> process2(){
    return {1, 2, 3, 4, 5}; // this is ok
}


int main(){
    string s("a value");
    cout << s << endl;
    get_val(s, 0) = 'A'; // returns a reference to  the first value of s
    cout << s << endl;

    for(auto item: process()){
        cout << item << endl;
    }

    for(auto item: process2()){
        cout << item << endl;
    }

    return 0; // if skipped it will be implicitly returned
}