#include <iostream>
#include <string>
#include <cctype>

int main(){
    // std::string word;
    // // while(std::cin >> word)
    // //     std::cout << word << std::endl;

    // std::string line;
    // // while(getline(std::cin, line))
    // //     if(line.size() > 10)
    // //         std::cout << line << std::endl;
    // getline(std::cin, line);
    // auto len = line.size(); // it is important to note that line.size() is NOT an int. It is string::size_type
    // std::cout << len << std::endl;

    std::string str;
    std::string temp;
    std::cout << "string 1: ";
    while(std::cin >> temp){
        str += temp;
        str += " ";
    }
    std::cout << str << std::endl;

    return 0;
}