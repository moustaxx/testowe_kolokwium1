// Napisz funkcję rekurencyjną, która zamienia liczbę binarną,
// reprezentowaną za pomocą napisu, na liczbę całkowitą. Zademonstruj jej użycie.
// PRZYKŁAD:
// IN: "10010011"
// OUT: 147
#include <iostream>

///// iteracyjnie
// int binToDec(char bin[]) {
//     int result = 0;
//     int size = 0;
//     while (bin[size]) size++;

//     for (int i = 0; i < size; i++) {
//         int digit = bin[i] - 48;
//         if (digit == 1) result += 1 << size - i - 1;
//     }
//     return result;
// }

int binToDec(char bin[], int n, int i = 0, int result = 0) {
    if (!(n - 1)) return result;
    if (bin[i] - 48 == 1) result += 1 << n - 2;
    return binToDec(bin, n - 1, i + 1, result);
}

int main() {
    const int size = 9;
    char str[size] = "10010011";
    std::cout << binToDec(str, size);
    return 0;
}
