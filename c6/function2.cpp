#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

// using pointers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}

// using references
void swap_w_reference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// compare strings without copying (more efficient)
// use const since we don't need to modify input
int comp_str(const string &s1, const string &s2){
    if (s1==s2)
        return 0;
    else if (s1<s2)
        return -1;
    else
        return 1;
}

string::size_type find_char(const string &s, char c, string::size_type &occurs){
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i){
        if (s[i] == c){
            if (ret == s.size())
                ret = i;
            ++occurs;
        }
    }
    return ret;
}

int try_to_change_const(/* const */ int i){
    return ++i; // doesn't work with const
}

// Give references to const when possible when writing functions
// First of all it's confusing and second it doesn't allow you to
// use the function with literals.

char first_letter(const string &s="Hello World"){
    return s[0];
}

void str_tolower(string &s){
    for(char &c: s)
        c = tolower(c);
}

bool has_capital(const string &s){
    for(auto sIt = s.begin(); sIt != s.end(); ++sIt){
        if(isupper(*sIt)) return true;
    }
    return false;
}

// Arrays as input parameters
// Can't directly do it. How to do it then?

// 1: Use a marker such as \0 in C-style strings
// catch: not always possible

// 2: explicitly pass array size
void print_array1(const int ary[], size_t size){
    for(auto i = 0; i < size; ++i){
        cout << *(ary+i) << " ";
    }
    cout << endl;
}

// function declared with trailing return
auto myfunc(int i) -> int {
    return ++i;
}

// 3: Modern way to do it
// pass one over the end pointer
void print_array2(const int *beg, const int *end){ // use const when you can!
    // for(auto it=beg; it != end; ++it)
    //     cout << *it << " ";
    // cout << endl;
    while(beg != end)
        cout << *beg++ << endl;
}

int main(){
    int a = 27;
    int b = 42;
    swap(&a ,&b);
    cout << a << ' ' << b << endl;
    swap_w_reference(a, b);
    cout << a << ' ' << b << endl;

    string s1 = "hello";
    string s2 = "hi";

    cout << comp_str(s1, s2) << endl;

    string mystring = "Hello, World";
    decltype(mystring.size()) mycount = 0;
    auto res = find_char(mystring, 'l', mycount);
    cout << res << " " << mycount << endl;
    
    cout << try_to_change_const(3) << endl;

    cout << first_letter("hello, World!") << endl;
    cout << first_letter() << endl; // default parameters.

    // wouldn't work if in the definition of the function
    // we hadn't declared the input const string.

    string mystring2 = "MyString";
    cout << has_capital(mystring2) << endl;
    str_tolower(mystring2);
    cout << mystring2 << endl;
    cout << has_capital(mystring2) << endl;


    int myary[] = {1,2,3,4,5};
    print_array2(std::begin(myary), std::end(myary));

    cout << myfunc(3) << endl;
    
    
}