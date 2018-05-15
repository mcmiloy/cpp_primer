#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main(int argc, char *argv[]){
    cout << argc << "\n\n";
    for(int i = 0; i < argc; ++i){
        cout << argv[i] << endl;
    }

}