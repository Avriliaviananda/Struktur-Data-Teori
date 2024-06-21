# <h1 align="center">SOAL 3</h1>
<p align="center">Avrilia Viananda Nagita</p>

## Dasar Teori

Rekursif

Rekursi adalah proses dimana suatu  fungsi  memanggil dirinya sendiri.
 Fungsi  seperti ini disebut  fungsi rekursif .
 Fungsi rekursif memungkinkan panggilan dilakukan berulang kali.
merupakan proses yang berulang, sehingga harus ada syarat untuk menghentikan proses tersebut.
Jika tidak,  proses tidak akan pernah dihentikan sampai tidak ada lagi memori yang digunakan.
Jika suatu masalah dapat didefinisikan secara rekursif, yaitu jika masalah tersebut dapat diuraikan menjadi masalah serupa yang lebih sederhana, maka penyelesaian masalah dengan pendekatan rekursif dapat dilakukan.



![Screenshot 2024-05-27 134250](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/f25844a5-ebb8-457b-abaf-e0cb01d5068e)

Di sini, n==0 adalah kasus dasar yang akan menghentikan iterasi fungsi ketika n sama dengan nol. 

return(n-1) adalah fungsi rekursif yang akan membantu pengulangan kode. [2]

Bentuk penulisan fungsi rekursif 

![image](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/ff2c91f7-301b-4144-8bc6-43b9f6a0c13f) [3]

Karena hanya prosedur dan fungsi yang dapat dipanggil dalam suatu program, maka program rekursif harus dinyatakan dalam bentuk prosedur atau fungsi.
 Fungsi atau prosedur rekursif terdiri dari dua komponen: [3]

a. Basis (komponen basis) fungsi : Menghentikan rekursif dan memberi nilai 
yang terdefinisi 

b. Aturan rekursif (komponen induksi) fungsi : mendefinisikan dengan dirinya 
sendiri

## Program
```cpp
#include <iostream>

using namespace std;

// Fungsi untuk menghitung faktorial menggunakan rekursi
int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;

    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    cout << "Faktorial dari " << bilangan << " adalah " << faktorial(bilangan) << endl;

    return 0;
}
```

## Referensi
[1] Muhammad Taufik Dwi Putra. et.al., Pemprograman Lanjut dengan C++, Bandung : Widina Media Utama, 2023.

[2] Afrizal Zein and Emi Sita Eriana., Algoritma dan Struktur Data, Tangerang Selatan: Unpam Press, 2022.

[3] Anita Sindar., STRUKTUR DATA DAN ALGORITMA DENGAN C++, Banten : CV.AA.RIZKY, 2019.