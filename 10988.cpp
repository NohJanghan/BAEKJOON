#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;

    bool flag = true;
    for (int i = 0; i < str.length() / 2; i++)
    {
        if(str[i] != str[str.length() - i - 1]) {
            flag = false;
            break;
        }
    }
    
    std::cout << flag << std::endl;

    return 0;
}