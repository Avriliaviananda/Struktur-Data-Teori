# <h1 align="center">SOAL 2</h1>
<p align="center">Avrilia Viananda Nagita</p>

## Dasar Teori

Hash Table adalah sebuah struktur data yang terdiri atas sebuah tabel dan fungsi yang bertujuan untuk memetakan nilai kunci yang unik untuk setiap record (baris) menjadi angka (hash) lokasi record tersebut dalam sebuah tabel. Keunggulan dari struktur hash [1]

table ini adalah waktu aksesnya yang cukup cepat, jika record yang dicari langsung berada pada angka hash lokasi penyimpanannya. Akan tetapi pada kenyataannya sering sekali ditemukan hash table yang record-recordnya mempunyai angka hash yang sama (bertabrakan). Karena pemetaan hash function yang digunakan bukanlah pemetaan satusatu, (antara dua record yang tidak sama dapat dibangkitkan angka hash yang sama) maka dapat terjadi bentrokan (collision) dalam penempatan suatu data record. Untuk mengatasi hal ini, maka perlu diterapkan kebijakan resolusi bentrokan (collision resolution policy) untuk menentukan lokasi record dalam tabel. Umumnya kebijakan resolusi bentrokan adalah dengan mencari lokasi tabel yang masih kosong pada lokasi setelah lokasi yang berbentrokan. [1]

Fungsi hash adalah fungsi yang memetakan kunci ke salah satu nilai dalam tabel hash. Fungsi hash mengembalikan lokasi/alamat dimana kita dapat menyimpan kunci tertentu. Kami memasukkan kunci ke fungsi hash dan outputnya adalah alamat. Diagram berikut menggambarkan cara fungsi hash beroperasi:

Misalnya, fungsi hash yang mungkin bisa jadi

h(k) = k mod m

Dimana h(k) menunjukkan fungsi hash, m menunjukkan ukuran tabel hash dan k menunjukkan kunci atau nilai.[3]

![image](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/9443bc05-0d04-4671-8bb2-766bff460dac)

Tabel hash adalah struktur data yang menggunakan pasangan nilai kunci untuk menyimpan data secara asosiatif. Kunci dipetakan ke indeks masing-masing dalam array menggunakan fungsi hash, dan nilainya kemudian ditempatkan dalam array. Fungsi hash menerima kunci sebagai masukan dan mengembalikan indeks dalam array tempat nilainya dapat ditemukan. Tabel hash sering digunakan untuk membuat tabel pencarian, array asosiatif, dan kumpulan dinamis karena tabel ini menawarkan operasi pencarian, penyisipan, dan penghapusan kasus rata-rata dengan waktu konstan. [4]

Operasi dasar pada fungsi hash:
Operasi dasar yang dapat kita lakukan pada fungsi hash adalah:
1. Search: Operasi ini membantu mencari elemen dari tabel hash.
2. Insert: Operasi penyisipan digunakan untuk memasukkan nilai ke dalam tabel hash.
3. Delete: Digunakan untuk menghapus nilai dari tabel hash. [2]
## Program 
```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HashTable {
private:
    vector<string> tabel;

public:
    HashTable(int ukuran) {
        tabel.resize(ukuran);
    }

    // Fungsi untuk menambahkan elemen ke hash table
    void tambah(string kunci, string nilai) {
        int index = kunci.length() % tabel.size();
        tabel[index] = nilai;
    }

    // Fungsi untuk mencari elemen di hash table
    string cari(string kunci) {
        int index = kunci.length() % tabel.size();
        return tabel[index];
    }

    // Fungsi untuk menampilkan isi hash table
    void tampilkan() {
        for (int i = 0; i < tabel.size(); i++) {
            cout << "Index " << i << ": " << tabel[i] << endl;
        }
    }
};

int main() {
    HashTable ht(10);

    ht.tambah("nama", "John Doe");
    ht.tambah("alamat", "Jalan Sudirman 123");
    ht.tambah("telepon", "08123456789");

    cout << "Isi Hash Table:" << endl;
    ht.tampilkan();

    cout << "Cari nilai untuk kunci 'nama': " << ht.cari("nama") << endl;
    cout << "Cari nilai untuk kunci 'alamat': " << ht.cari("alamat") << endl;
    cout << "Cari nilai untuk kunci 'telepon': " << ht.cari("telepon") << endl;

    return 0;
}
```

## Referensi
[1] Muhammad Taufik Dwi Putra. et.al., Pemprograman Lanjut dengan C++, Bandung : Widina Media Utama, 2023.

[2] Afrizal Zein and Emi Sita Eriana., Algoritma dan Struktur Data, Tangerang Selatan: Unpam Press, 2022.

[3] Anita Sindar., STRUKTUR DATA DAN ALGORITMA DENGAN C++, Banten : CV.AA.RIZKY, 2019.

[4] Wikipedia (http://www.wikipedia.org/)
entry on Hash table
(http://en.wikipedia.org/wiki/Hash_table)
