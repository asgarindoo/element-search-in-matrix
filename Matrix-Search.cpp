#include <iostream>

using namespace std;

const int MAX_ROWS = 100;  // Maksimum jumlah baris matriks
const int MAX_COLS = 100;  // Maksimum jumlah kolom matriks

// Fungsi untuk melakukan pencarian elemen dalam matriks berdasarkan baris terlebih dahulu
bool deepeningSearch(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, int target) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            int currentElement = matrix[row][col];
            cout << "Mencari elemen " << target << " pada baris " << row + 1 << " dan kolom " << col + 1 << " - ";
            cout << "Melewati elemen " << currentElement << endl;
            if (currentElement == target) {
                cout << "Elemen " << target << " ditemukan pada baris " << row + 1 << " dan kolom " << col + 1 << endl;
                return true;
            }
        }
    }

    return false; // Tidak ada elemen target yang ditemukan dalam matriks
}

int main() {
    int rows, cols, target;
    cout << "Masukkan jumlah baris matriks: ";
    cin >> rows;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> cols;

    int matrix[MAX_ROWS][MAX_COLS];
    cout << "\nMasukkan elemen-elemen matriks (" << rows << " baris x " << cols << " kolom):" << endl;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << "Masukkan elemen untuk [" << row + 1 << "][" << col + 1 << "]: ";
            int currentElement;
            cin >> currentElement;
            matrix[row][col] = currentElement;
        }
    }

    cout << "\nMasukkan elemen target: ";
    cin >> target;

    if (deepeningSearch(matrix, rows, cols, target)) {
        cout << "\nSolusi ditemukan! Elemen " << target << " ada dalam matriks." << endl;
    } else {
        cout << "\nTidak ditemukan solusi. Elemen " << target << " tidak ada dalam matriks." << endl;
    }

    return 0;
}
