// Zdefiniuj funkcję seq(), która w argumencie otrzymuje nieujemną liczbę całkowitą n.
// Funkcja powinna zwracać, jako liczbę rzeczywistą, wartość elementu o indeksie n ciągu
// zdefiniowanego w następujący sposób:
// a_{0}=0, a_{1}=1
// a_{n} = a_{n-1} * pierwiastek(a_{n-2})
// a_{2} = 1 * 0 = 0
// a_{3} = 0 * 1 = 0
// a_{4} = 0 * 0 = 0
// Napisz program, który sprawdzi działanie tej funkcji. Program powinien wylosować
// liczbę n z przedziału obustronnie domkniętego <0;100>, a następnie wyświetlić wynik
// funkcji seq() dla wylosowanej liczby.
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

int seq(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return seq(n - 1) * sqrt(seq(n - 2));
}

int main() {
    srand(time(0));
    unsigned int n = rand() / (RAND_MAX / (100 + 1));
    std::cout << n << "\n";
    std::cout << seq(n);
    return 0;
}
