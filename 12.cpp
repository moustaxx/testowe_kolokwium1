// Napisz program, który wczyta od użytkownika dodatnią liczbę całkowitą r
// i wyświetli na ekranie terminala koło zbudowane ze znaków ‘#’ o
// promieniu równym r (zgodnie z przykładem poniżej). Równanie koła ma
// postać: x^2+y^2 <= r^2. Do obliczenia pierwiastka kwadratowego użyj
// funkcji std::sqrt() z biblioteki <cmath>.
// PRZYKŁAD:
// IN: 3
// OUT:
//     #
//   #####
//   #####
//  #######
//   #####
//   #####
//     #
#include <iostream>
#include <cmath>

int main() {
    int r;
    std::cin >> r;

    for (int y = -r; y < r + 1; y++) {
        for (int x = -r; x < r + 1; x++) {
            std::cout << (x * x + y * y <= r * r ? '#' : ' ');
        }
        std::cout << "\n";
    }
    return 0;
}
