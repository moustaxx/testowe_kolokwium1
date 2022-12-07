// Napisz rekurencyjną funkcję, która otrzymuje jako argument całkowitą liczbę nieujemną n
// i zwraca jako wartość n-ty wyraz ciągu zdefiniowanego w następujący sposób:
//  F_{n} = 1, gdy m <2
//  2F_{n-1}, gdy n>=2 i n<10
//  3F_{n-1} - F_{n-3}, gdy n >=10
// W funkcji głównej wczytaj od użytkownika całkowitą liczbę nieujemną i wyświetl wynik działania funkcji.
// PRZYKŁADY:
// IN: 1    IN: 4    WE: 10
// OUT: 1   OUT: 2   OUT: 704
#include <iostream>

int rec(unsigned n) {
    if (n < 2) return 1;
    if (n >= 2 && n < 10) return 2 * rec(n - 1);
    if (n >= 10) return 3 * rec(n - 1) - rec(n - 3);
}

int main() {
    std::cout << rec(1);
    std::cout << '\n';
    std::cout << rec(4);
    std::cout << '\n';
    std::cout << rec(10);
    std::cout << '\n';
    return 0;
}
