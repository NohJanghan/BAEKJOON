#include <iostream>

int main() {
    int arr[101] = {0, };
    int N, M;
    std::cin >> N >> M;
    for (int i = 1; i < N + 1; i++)
    {
        arr[i] = i;
    }
    
    for (int i = 0; i < M; i++)
    {
        int a, b;
        std::cin >> a >> b;

        // swap
        if(a != b) {
            arr[a] ^= arr[b];
            arr[b] ^= arr[a]; // arr[b] = arr[a]
            arr[a] ^= arr[b]; // arr[a] = arr[b]
        }
    }

    for (int i = 1; i < N + 1; i++)
    {
        std::cout << arr[i] << ' ';
    }
    
    std::cout << std::endl;
    return 0;
}