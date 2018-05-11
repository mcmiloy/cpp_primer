#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string s("Hello World!!");
    decltype(s.size()) punct_cnt = 0;
    for(auto c: s)
        if(ispunct(c))
            ++punct_cnt;
    std::cout << punct_cnt <<
        " punctuation characters in " << s << std::endl;

    for (auto &c: s)
        c = toupper(c);
    std::cout << s << std::endl;

    s = "some string";

    if(!s.empty())
        s[0] = toupper(s[0]);

    std::cout << s << std::endl;

    for(decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
        s[index] = toupper(s[index]);

    std::cout << s << std::endl;

    false&&(std::cout << "hi"); // hi will not get printed

    std::string s2("Hello world"); 
    for (char &c2: s2)
        c2 = 'x';
    std::cout << s2 << std::endl;

    const std::string s3 = "Keep out!";
    for (char const &c : s3)
        std::cout << c << " ";
    std::cout << std::endl;
    


    return 0;
}