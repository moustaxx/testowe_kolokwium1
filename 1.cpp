// Napisz program, który wczytuje od użytkownika 2 liczby całkowite r oraz h,
// które są odpowiednio promieniem koła oraz wysokością stożka zbudowanego
// na tym kole. Program ma wypisać na standardowym wyjściu objętość bryły.
// Jeżeli r lub h są mniejsze lub równe 0 wyświetl na standardowym wyjściu
// komunikat “Bledne dane”. (objętość stożka V=PI r^2 h / 3)
#include <iostream>
#include <cmath>

int main() {
    int r, h;
    std::cin >> r >> h;

    if (r <= 0 || h <= h <= 0) {
        std::cout << "Bledne dane";
        return 0;
    }

    std::cout << M_PI * r * r * h / 3;

    return 0;
}
