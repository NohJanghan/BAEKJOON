#include <iostream>
#include <string>

int main() {
    int N;
    std::string str;
    std::cin >> N;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        std::cin >> str;
        int memo[26] = {0, };
        bool flag = true;
        char before = '\0';
        for (const auto &i : str)
        {
            if(before == i) {
                continue;
            } else if(memo[i - 'a'] == 0) {
                memo[i - 'a']++;
                before = i;
            } else {
                flag = false;
                break;
            }
        }

        if(flag) count++;
    }

    std::cout << count << std::endl;
    
}