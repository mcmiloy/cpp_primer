#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;


int main(){
    int num;
    vector<int> nums;
    while(std::cin >> num)
        nums.push_back(num);

    auto n = nums.size();
    for(auto i = 0; i<n/2; ++i){
        std::cout << nums[i] + nums[n-1-i] << std::endl;
    }
    if((n%2) != 0)
        std::cout << nums[num/2];



    return 0;
}