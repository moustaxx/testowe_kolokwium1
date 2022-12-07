// Napisz funkcję, która w argumencie przyjmuje napis (c-string)
// a następnie sprawdza, czy dany napis złożony jest z samych cyfr.
// W przypadku, gdy napis składa się z samych cyfr, funkcja powinna zwrócić
// liczbę całkowitą, którą reprezentuje napis lub wartość -1 w przeciwnym wypadku.
// W funkcji głównej wczytaj od użytkownika napis i wyświetl wynik działania funkcji.
// PRZYKŁADY:
// IN: "123ak"
// OUT: -1
// IN: "1001"
// OUT: 1001
#include <iostream>
#include <cmath>

int f(char str[]) {
    int result = 0;
    int length = 0;
    while (str[length]) length++;

    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') result += (str[i] - '0') * pow(10, length - i - 1);
        else return -1;
    }
    return result;
}

int main() {
    char str1[] = "123ak", str2[] = "1001";
    std::cout << f(str1);
    std::cout << '\n';
    std::cout << f(str2);
    return 0;
}
