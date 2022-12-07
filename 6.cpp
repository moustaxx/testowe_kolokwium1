// Zaprojektuj i zdefiniuj funkcję dyadic(), która oblicza i zwraca iloczyn diadyczny
// dwóch wektorów 3-elementowych przekazanych w argumentach. Do reprezentacji wektorów
// i macierzy użyj tablic automatycznych. W funkcji głównej pokaż użycie tej funkcji.
// Iloczyn diadyczny dwóch wektorów n-wymiarowych daje w wyniku macierz nxn-wymiarową
// (zob. https://pl.wikipedia.org/wiki/Iloczyn_diadyczny)
#include <iostream>

void dyadic(float vec1[], float vec2[], int n) {
    float result[n * n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i * n + j] = vec1[i] * vec2[j];
        }
    }
    for (int i = 0; i < n * n; i++) {
        if (i % n == 0) std::cout << '\n';
        std::cout << result[i] << '\t';
    }
}

int main() {
    float vec1[] = { 3, 2, 1 };
    float vec2[] = { 4, 5, 6 };
    dyadic(vec1, vec2, 3);
    return 0;
}
