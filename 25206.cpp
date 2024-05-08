#include <string>
#include <iostream>

int main() {
    char subject[51];
    double credit;
    char grade[3];
    double score;

    double average = 0;
    int total_credit = 0;

    for (int i = 0; i < 20; i++)
    {
        std::cin >> subject >> credit >> grade;
        if(grade[0] == 'P') {
            continue;
        }

        score = 'F' - grade[0] ? 'F' - grade[0] - 1: 0;
        if (grade[1] == '+') {
            score += 0.5;
        }

        average += score * credit;
        total_credit += credit;
    }
    
    average /= total_credit;
    std::cout.precision(12);
    std::cout << std::fixed << average << std::endl;
    return 0;
}