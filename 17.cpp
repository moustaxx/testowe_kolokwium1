// Pewną powierzchnię pokrywają nadajniki radiowe. Każdy nadajnik znajduje
// się w pozycji oznaczonej za pomocą współrzędnych x, y na słupie o wysokości z.
// Każdy nadajnik zapewnia łączność w obszarze kuli o promieniu r, w której środku
// znajduje się nadajnik. Osoba z odbiornikiem znajduje się w pozycji x, y na
// wysokości gruntu (z=0). Odbiornik połączy się z najbliższym nadajnikiem, w
// którego zasięgu będzie. Napisz funkcję, która przyjmie parametry:
// (1) liczbę n nadajników,
// (2/3/4) trzy tablice, po jednej dla współrzędnych (x, y, z) kolejnych nadajników,
// (5) promień r nadajników,
// (6, 7) współrzędne x, y osoby z odbiornikiem. Wszystkie współrzędne są liczbami zmiennoprzecinkowymi.
// Funkcja powinna zwrócić indeks odbiornika, z którym połączy się odbiornik, lub -1,
// jeżeli nie połączy się z żadnym. Zilustruj użycie tej funkcji w programie; wyświetl na ekranie wynik.
// PRZYKŁAD:
// IN: n=6, x[]={2,2,3,5,6,8}, y[]={2,6,3,7,1,6}, z[]={2,1,1.5,2,2,2}, r=2.5, x=7, y=2.
// OUT: 4
#include <iostream>
#include <cmath>

int f(int n, float x[], float y[], float z[], float r, float posX, float posY) {
    int posZ = 0;
    int closestBTS = -1;
    float minDist = r + 1;
    for (int i = 0; i < n; i++) {
        float dist = sqrt(pow(posX - x[i], 2) + pow(posY - y[i], 2) + pow(posZ - z[i], 2));
        if (dist > minDist || dist > r) continue;
        minDist = dist;
        closestBTS = i;
    }
    return closestBTS;
}

int main() {
    float x[] = { 2, 2, 3, 5, 6, 8 }, y[] = { 2, 6, 3, 7, 1, 6 }, z[] = { 2, 1, 1.5, 2, 2, 2 };
    std::cout << f(6, x, y, z, 2.5, 7, 2);
    return 0;
}
