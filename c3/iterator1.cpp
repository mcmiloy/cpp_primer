#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;


int main(){
    string s("some string");
    if(s.begin() != s.end()){
        auto it = s.begin();
        *it = toupper(*it);
    }

    for(auto ti = (--s.end()); ti != (ti-=s.size()); --ti){
        std::cout << *ti << std::endl;
    }
    vector<vector<int>> myvec = {{1},{},{3}};
    auto it3 = myvec.cbegin(); //like s.begin() but only allows to read
    // *it3.empty() is not valid
    std::cout << (*it3).empty() << std::endl; // is valid
    std::cout << (++it3)->empty() << std::endl; // is a shortcut for the preceding line.

    std::cout << s << std::endl;

    return 0;
}