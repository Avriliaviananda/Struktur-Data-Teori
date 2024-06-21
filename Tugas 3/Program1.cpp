#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Buat antrian prioritas bilangan bulat
    priority_queue<int> pq;

    // Masukkan beberapa elemen ke dalam antrian prioritas
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(5);
    pq.push(1);

    // Cetak elemen teratas dari antrian prioritas (elemen terbesar)
    cout << "Elemen teratas: " << pq.top() << endl;

    // Hapus elemen teratas dari antrian prioritas
    pq.pop();

    // Cetak elemen teratas dari antrian prioritas lagi
    cout << "Elemen teratas setelah pop: " << pq.top() << endl;

    // Cetak ukuran antrian prioritas
    cout << "Ukuran: " << pq.size() << endl;

    // Periksa apakah antrian prioritas kosong
    cout << "Kosong: " << (pq.empty()? "true" : "false") << endl;

    return 0;
}