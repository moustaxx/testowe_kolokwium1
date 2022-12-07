// Napisz funkcję, która przyjmuje jednobajtową liczbę całkowitą bez znaku v,
// liczbę całkowitą b i zmienną logiczną f. Funkcja powinna pozostawić
// jedynie wartość 4 najmłodszych bitów liczby v, a następnie zanegować
// wartość tych 4-ech bitów, jeżeli f jest równe true, w przeciwnej sytuacji
// ten krok powinien być pominięty. Na koniec funkcja powinna zanegować bit
// na pozycji b i zwrócić nową wartość. W przogramie głównym Wyświetli wartość
// zwróconą przez funkcję z zadanymi argumentami.
// PRZYKŁAD:
// IN: v = 13, b = 6, f = true
// OUT: 66
#include <iostream>

int f(unsigned char v, int b, bool f) {
    v <<= 4;
    if (f) v = ~v;
    v >>= 4;
    v ^= (1 << b);
    return v;
}

int main() {
    std::cout << f(13, 6, true);
    return 0;
}
