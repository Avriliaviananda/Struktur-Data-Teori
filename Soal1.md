# <h1 align="center">SOAL 1</h1>
<p align="center">Avrilia Viananda Nagita</p>

## Dasar Teori

Priority Queue

Antrian Prioritas adalah tipe struktur data yang mirip dengan antrian biasa, tetapi memperhitungkan tingkat prioritas. Setiap komponen dalam Antrian Prioritas memiliki tingkat prioritas yang menentukan urutan proses pengambilannya. Elemen yang memiliki prioritas paling tinggi akan selalu diutamakan untuk diambil terlebih dahulu, tanpa memperdulikan kapan ia dimasukkan ke dalam antrian. Antrian prioritas adalah jenis struktur data berdasarkan antrian umum. Dalam antrian prioritas, salah satu cara implementasinya adalah dengan menggunakan struktur data heap. Dalam implementasi ini ada 3
pokok atribut yaitu heaps, comparator, dan last. [2]

Struktur Priority Queue :

![image](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/adef656c-cd7e-4c3f-b84f-4c73ee8e9cca)

Tumpukan menunjuk ke akar, terakhir menunjuk ke elemen akhir , dan pembanding menampilkan perbandingan untuk memanipulasi posisi.
Heap adalah struktur data berbasis pohon dengan properti khusus. [1]

Heap dapat dibagi menjadi dua jenis: heap maksimum  dan heap minimum.

Tumpukan Maksimum: Nilai  setiap node  selalu lebih besar atau sama dengan nilai node turunannya.
Artinya elemen dengan nilai maksimum selalu berada di simpul akar.

Minimum heap: Sebaliknya, nilai tiap node selalu lebih kecil atau sama dengan nilai node turunannya.
Elemen dengan nilai minimum menjadi posisi akar.
Operasi dasar di heap, seperti menyisipkan dan menghapus elemen, dapat dilakukan dalam waktu logaritmik (log n) dan relatif efisien untuk kumpulan data  besar. [3]

## Program
```cpp
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
```








## Referensi
[1] Anita Sindar., STRUKTUR DATA DAN ALGORITMA DENGAN C++, Banten : CV.AA.RIZKY, 2019.

[2]  T. Cormen, C. Leiserson, R. Rivest, and C. Stein. Introduction to Algorithms, 2nd edition. MIT Press
and McGraw-Hill Book Company, 2001.

[3] Goodrich, Tamassia, Mount. Data Structure
and Algorithms in C++, Wiley, 2020.