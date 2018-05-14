#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main(){
    try{
        double num1, num2;
        cout << "please enter two numers you want to divide" << endl;
        cin >> num1 >> num2;
        if(num2==0) throw std::logic_error("You can't divide by zero!");
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    } catch(std::logic_error err){
        cout << err.what() << endl;
    }
}