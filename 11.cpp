// Napisz program, który pobiera od użytkownika dwie liczby całkowite dodatnie n i m.
// Następnie program ma generować i wyświetlać na ekranie pseudolosowe zdanie,
// które ma być zbudowane z n słów a każde słowo ma być zbudowane z co najwyżej
// m znaków. W słowach mają się pojawiać, z równym prawdopodobieństwem, małe i duże litery.
// PRZYKŁAD:
// IN: 8 5
// OUT: jtETN jxpd G DDYmP NYtT HubNe IAByV jmN
#include <iostream>
#include <cstdlib>

int main() {
    srand(time(0));
    unsigned n, m;
    char arr[100];
    std::cin >> n >> m;

    unsigned wordLength = rand() % m + 1;
    unsigned wordIter = 0;
    unsigned wordsCount = 0;
    for (int i = 0; wordsCount < n; i++) {
        unsigned charIndex = rand() % (50 + 1);
        arr[i] = charIndex < 26 ? charIndex + 'A' : charIndex - 25 + 'a';
        if (wordIter == wordLength) {
            arr[i] = ' ';
            wordIter = 0;
            wordsCount += 1;
            wordLength = rand() % m + 1;
        } else wordIter++;
        std::cout << arr[i];
    }

    return 0;
}
