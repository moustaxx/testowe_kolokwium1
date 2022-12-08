// // Napisz funkcję matRows(), która przyjmuje jako argumenty:
// jednowymiarową tablicę automatyczną liczb całkowitych mat, liczby całkowite n, m.
// Tablicę mat należy zinterpretować jako tablicę dwuwymiarową o n wierszach i m kolumnach
// w której kolejne komórki ustawione są wierszami.
// Funkcja powinna zwrócić liczbę wierszy, w których liczby posortowane są rosnąco.
// PRZYKŁAD:
// IN n = 2, m = 3
// IN mat = [1, 6, 3, 5, 6, 7]
// OUT: 1
// bo: mat = | 1 6 3 | (nieposortowane)
//           | 5 6 7 | (posortowane)
#include <iostream>

// wydajniejsze ale bez interpretacji wielowymiarowej ?
// int matRows(int mat[], int n, int m) {
//     int last = mat[0];
//     int sorted = 0;
//     int sortedRows = 0;
//     for (int i = 0; i < n * m; i++) {
//         if (i % m == 0) {
//             sorted = 0;
//             last = mat[i];
//             continue;
//         }
//         if (last < mat[i]) sorted += 1;
//         if (sorted == m - 1) sortedRows += 1;
//         last = mat[i];
//     }
//     return sortedRows;
// }

int matRows(int mat[], int n, int m) {
    int last = mat[0];
    int sorted = 0;
    int sortedRows = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j == 0) {
                sorted = 0;
                last = mat[i * m + j];
                continue;
            }
            if (last < mat[i * m + j]) sorted += 1;
            if (sorted == m - 1) sortedRows += 1;
            last = mat[i * m + j];
        }
    }
    return sortedRows;
}

int main() {
    const int n = 3, m = 3;
    int mat[] = {
        1, 6, 3,
        5, 6, 7,
        5, 6, 7
    };
    std::cout << matRows(mat, n, m);
    return 0;
}

