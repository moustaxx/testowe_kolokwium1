// Napisz program, który wczytuje od użytkownika liczbę całkowitą n (zakładamy, że n<20).
// Utwórz tablicę liczb zmiennoprzecinkowych arr, która będzie w stanie pomieścić n liczb,
// a następnie wczytaj do niej n wartości ze standardowego wejścia. Napisz funkcję, która
// przyjmuje taką tablicę w argumencie. Funkcja ma wyświetlić na standardowym wyjściu kolejne
// wyrazy ciągu od 1 do n zdefiniowanego wzorem:
// F(0) = 0
// F(n) = (-1)^n * arr_{n-1} + F_{n-1}
// gdzie: ^ - operacja potęgowania
// PRZYKŁAD:
// IN n: 3
// IN a: 0.4 0.2 1.4
// OUT: -0.4 -0.2 -1.6
#include <iostream>
#include <cmath>

float f(float arr[], int n, int i = 0) {
    if (n == 0) return 0;
    float result = pow(-1, n) * arr[n - 1] + f(arr, n - 1);
    std::cout << result << " ";
    return result;
}

int main() {
    float arr[20];
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) std::cin >> arr[i];

    f(arr, n);
    return 0;
}
