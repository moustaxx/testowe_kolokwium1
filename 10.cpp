// Zdefiniuj funkcję, która przyjmuje jako argumenty: napis str oraz automatyczną
// tablicę liczb całkowitych bez znaku occ o długości równej ilości znaków w napisie str.
// Funkcja powinna w i-ty element tablicy occ wpisać liczbę wystąpień (w całym napisie str)
// i-tego znaku z tego napisu. Napis str może zawierać jedynie małe i wielkie litery oraz spacje.
// Małe i wielkie litery zliczamy łącznie, jako ten sam znak.
// PRZYKŁAD:
// IN str = “Ala ma kota”
// OUT occ = [4, 1, 4, 2, 1, 4, 2, 1, 1, 1, 4]
#include <iostream>

void f(char str[], unsigned occ[]) {
    int chars['Z' - 'A' + 1] = {}; // [0]=space, A-Z
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            chars[0]++;
            continue;
        }
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';
        chars[str[i] - 'a' + 1]++;
    }

    for (int i = 0; str[i]; i++) {
        occ[i] = str[i] == ' ' ? chars[0] : chars[str[i] - 'a' + 1];
    }

    for (int i = 0; str[i]; i++) std::cout << occ[i] << " ";
}

int main() {
    char str[] = "Ala ma kota";
    int size = 0;
    while (str[size]) size++;
    unsigned *occ = new unsigned[size];

    f(str, occ);
    delete[] occ;
    return 0;
}
