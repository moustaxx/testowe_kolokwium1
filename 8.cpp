// Napisz program, który pobiera od użytkownika dwie liczby jednobajtowe bez znaku t, s.
// Wylicz i wyświetl nową wartość w następujący sposób:
// 1) zamień 4 najmłodsze bity liczby s miejscami z 4 najstarszymi bitami liczby s;
// 2) w powstałej liczbie zaneguj bit znajdujący się na pozycji będącej wynikiem reszty z dzielenia t przez 8.
// PRZYKŁAD:
// t = 214; reszta z (t/8) = 6
// s = 93 = 0101 1101b
// 1)   1101 0101b
// 2)   1001 0101b = 149
#include <cstdio>

void printBin(unsigned char num, const unsigned size) {
    for (int i = 0; i < size; i++) {
        printf("%hhu",!!(num & (1 << size - i - 1)));
    }
    printf("\n");
}

int main() {
    unsigned char t, s;
    const unsigned bites = 8;
    scanf("%hhu%hhu", &t, &s);

    printf("0)=");
    printBin(s, bites);

    s = (s >> 4) + (s << 4);
    printf("1)=");
    printBin(s, bites);

    s ^= (1 << (t % 8));
    printf("2)=");
    printBin(s, bites);

    return 0;
}
