// Napisz funkcję, która przyjmuje w argumencie liczbę całkowitą (bez znaku, mniejszą niż 65536)
// w postaci napisu. Funkcja ma dokonać konwersji tego napisu do liczby całkowitej i zwrócić jej wartość.
// Zademonstruj użycie tej funkcji w funkcji głównej.
// PRZYKŁAD:
// IN: "1234"
// OUT: 1234
#include <cstdio>
#include <cmath>

typedef unsigned short int usint;

usint f(char str[]) {
    usint result = 0;
    int size = 0;

    while (str[size]) size++;
    for (int i = 0; i < size; i++) {
        result += (str[i] - 48) * pow(10, size - i - 1);
    }
    return result;
}

int main() {
    char str[] = "1234";
    printf("\nWynik: %d\n", f(str));
    return 0;
}
