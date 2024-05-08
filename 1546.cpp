#include <iostream>

int main() {
    int max = -987654321, N, score, sum = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> score;
        if(max < score) {
            max = score;
        }

        sum += score;
    }
    double newAvg = (double) sum / max * 100 / N;
    std::cout << newAvg << std::endl;
}