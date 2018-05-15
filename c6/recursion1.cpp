#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int factorial(int val){
    if (val < 2){
        return 1;
    } else {
        return factorial(val-1) * val;
    }
}

void print_vec(vector<int> vec){
    if(vec.size() == 0) return;
    else{
        cout << vec[0] << endl;
        vec.erase( vec.begin() );
        print_vec(vec);
        return;
    }
}


int main(){
    cout << factorial(5) << endl;

    vector<int> myvec = {1,2,3,4,5};
    for(auto item : myvec) cout << item << endl;

    return 0;
}