#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main(){
    cout << "Don't repeat yourself: ";
    string user_input;
    vector<string> v;
    while(cin >> user_input)
        v.push_back(user_input);

    auto beg = v.begin();
    auto current = v.begin();
    while(beg != v.end()){
        current = (beg+1);
        while(current != v.end() && *beg != *current)
            current++;
        if(current != v.end()) break;
        beg++;
    }

    if(beg != v.end()) cout << "You repeated yourself. (" << *current << ")\n";
    else cout << "You didn't repeat yourself. Congratz.\n";

    

    return 0;
}