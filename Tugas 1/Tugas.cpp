#include <iostream>

using namespace std;

bool cekDuplikat(int arr[], int ukuran) {
  // Inisialisasi array penanda untuk melacak elemen yang dilihat
  int seen[ukuran];
  for (int i = 0; i < ukuran; i++) {
    seen[i] = 0;  // Menandai semua elemen sebagai belum dilihat
  }

  for (int i = 0; i < ukuran; i++) {
    if (seen[arr[i]]) {
      return true;  // Duplikat ditemukan
    }
    seen[arr[i]] = 1;  // Tandai elemen saat ini sebagai dilihat
  }

  return false;  // Tidak ada duplikat ditemukan
}

int main() {
  int arrA[] = {2, 1, 3, 4};
  int ukuranArrA = sizeof(arrA) / sizeof(arrA[0]);  // Tentukan ukuran array secara dinamis

  if (cekDuplikat(arrA, ukuranArrA)) {
    cout << "Array berisi duplikat." << endl;
  } else {
    cout << "Array tidak berisi duplikat." << endl;
  }

  return 0;
}
