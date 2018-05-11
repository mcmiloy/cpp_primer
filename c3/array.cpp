#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

int main(){
    int arr[10]{0}; // wenn man ohne {0} inizialisiert sind die Zellen mit lauter sinnlosen zahlen voll
    int arr2[5]{1,2,3,4,5};
    char mystring[5] = "asdf"; //einen platz muss man fuer '\0' lassen
    
    for(auto item: arr)
        std::cout << item << std::endl;


    return 0;
}