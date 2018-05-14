#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main(){
    string s = "hello world";
    for(decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index){
        s[index] = toupper(s[index]);
    }

    cout << s << endl;

    int i = 0;
    do{ // enters the loop at least once.
        cout << i << endl;
        ++i;
    } while(i<0);

    string answ1;
    string answ2;
    cin >> answ1 >> answ2;
    do{
        if(answ1 < answ2)
            cout << answ1 << " < " << answ2 << endl;
        else if(answ2 < answ1)
            cout << answ2 << " < " << answ1 << endl;
        else
            cout << answ1 << " == " << answ2 << endl;
    } while(cin >> answ1 >> answ2);



    return 0;
}