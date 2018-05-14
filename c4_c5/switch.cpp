#include <iostream>

int main(){
    int user_input;
    std::cout << "Enter a number: ";
    std::cin >> user_input;
    int i = 0;

    switch(user_input){
        case 1:
        case 3:
            std::cout << "Your number is one.\n"; // this code executes for 1 & 3
            i = 10;
            break;
            // int i = 1; this causes an error. i already declared
        case 2:
            std::cout << "Your number is two.\n"; break; // Don't for get the "break" when needed
        default:
            std::cout << "I don't know that number yet.\n"; break;
    }

    std::cout << i << std::endl;

    return 0;
}
