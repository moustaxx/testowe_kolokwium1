// Napisz funkcję, która w parametrze przyjmuje tablicę liczb całkowitych.
// Funkcja powinna zwrócić element o największej liczbie bitów o wartości 1,
// jeśli w tablicy jest więcej liczb o takiej samej ilości bitów, funkcja
// powinna zwrócić tę, która wystąpiła w tablicy, jako ostatnia. Zilustruj
// działanie tej funkcji i wyświetli wynik zwrócony przez funkcję.
// PRZYKŁAD:
// IN: {1, 2, 3, 4, 5, 64}
// OUT: 5
#include <iostream>

int f(int arr[], int length) {
    int maxOnes = 0;
    int maxOnesCount = 0;
    for (int i = 0; i < length; i++) {
        int onesCount = 0;
        for (int j = 0; j < sizeof(int) * 8; j++) {
            if (arr[i] & 1 << j) onesCount++;
        }
        if (onesCount >= maxOnesCount) {
            maxOnes = arr[i];
            maxOnesCount = onesCount;
        }
    }
    return maxOnes;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 64 };
    int length = sizeof(arr) / sizeof(int);
    std::cout << f(arr, length);
    return 0;
}
