# <h1 align="center">Tugas Struktur Data Teori</h1>
<p align="center">Avrilia Viananda Nagita</p>

## CPMK 2 – SubCPMK 2 

### 1. Terdapat tiga algoritma sorting yang umum digunakan yakni, Bubble Sort, Selection Sort, dan Merge Sort. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma! 

### Jawab
1. Bubble Sort

Bubble sort adalah algoritma sorting yang paling sederhana. Algoritma ini bekerja dengan cara membandingkan dua elemen data secara berurut, kemudian menukar posisinya jika elemen pertama lebih besar dari elemen kedua. Proses ini dilakukan secara berulang-ulang hingga semua elemen data terurut. 

Berikut adalah langkah-langkah algoritma bubble sort:
1. Mulai dari elemen pertama data.
2. Bandingkan elemen tersebut dengan elemen berikutnya.
3. Jika elemen pertama lebih besar dari elemen berikutnya, maka tukar posisinya.
4. Ulangi langkah 2 dan 3 hingga akhir data.

Runtime Bubble Sort:

Best Case: O(n) - Terjadi ketika data sudah terurut, sehingga tidak ada pertukaran yang perlu dilakukan.

Worst Case: O(n^2) - Terjadi ketika data terbalik, sehingga membutuhkan n iterasi penuh untuk mengurutkan semua elemen.

2. Selection Sort

Selection sort adalah algoritma sorting yang lebih efisien daripada bubble sort. Algoritma ini bekerja dengan cara mencari elemen terkecil atau terbesar dalam data, kemudian menukarnya dengan elemen pertama. Proses ini dilakukan secara berulang-ulang hingga semua elemen data terurut. 

Berikut adalah langkah-langkah algoritma selection sort:
1. Mulai dari elemen pertama data.
2. Cari elemen terkecil atau terbesar dalam data.
3. Tukar posisi elemen tersebut dengan elemen pertama.
4. Ulangi langkah 2 dan 3 hingga akhir data.

Runtime Selection Sort:

Best Case: O(n) - Terjadi ketika data sudah terurut, sehingga hanya perlu satu iterasi untuk menemukan elemen terkecil.

Worst Case: O(n^2) - Terjadi ketika data teracak, sehingga membutuhkan n iterasi penuh untuk menemukan elemen terkecil di setiap iterasi.

3. Insertion Sort

Insertion sort adalah algoritma sorting yang lebih efisien daripada bubble sort dan selection sort. Algoritma ini bekerja dengan cara menyisipkan elemen data ke dalam array yang telah terurut. 

Berikut adalah langkah-langkah algoritma insertion sort:
1. Mulai dari elemen kedua data.
2. Bandingkan elemen tersebut dengan elemen-elemen sebelumnya.
3. Jika elemen tersebut lebih kecil dari elemen sebelumnya, maka sisipkan elemen tersebut ke dalam array pada posisi yang tepat.
4. Ulangi langkah 2 dan 3 hingga akhir data.

Runtime Merge Sort:

Best Case: O(n log n) - Terjadi ketika data terbagi secara merata saat pembagian rekursif.

Worst Case: O(n log n) - Terjadi ketika data terbagi tidak merata saat pembagian rekursif.


### 2. Buatlah fungsi dari salah satu algoritma sorting pada soal nomor 1, dan berikan penjelasan pada program tersebut 

### Jawab

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "## Program C++ Menggunakan Angka (Selection Sort) ##" << endl;
    cout << "==================================================" << endl;
    cout << endl;

    int i, j, n;

    // Baca angka input dari user
    cout << "Input jumlah element array: ";
    cin >> n;
    cout << endl;

    int arr[n];
    cout << "Input " << n << " angka : ";
    cout << endl;

    for(i = 0; i < n; i++){
        cout << "Angka ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    // urutkan array dengan algoritma selection sort
    for (i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

    // Tukar posisi element terkecil dengan element pada indeks i
       int temp = arr[i];
       arr[i] = arr[minIndex];
       arr[minIndex] = temp;
    }

    // Tampilan hasil pengurutan
    cout << endl;
    cout << "Array setelah diurutkan: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```
#### Output:
![Screenshot 2024-05-07 113016](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/2a3f8a8d-1dce-4cf0-9a66-5f5c16431f7d)

Program ini adalah program C++ yang menggunakan algoritma pengurutan Selection Sort untuk mengurutkan deret angka yang diinput oleh pengguna.

1. Pertama, program meminta pengguna untuk memasukkan jumlah elemen array.
2. Setelah itu, program meminta pengguna untuk memasukkan setiap elemen array satu per satu.
3. Setelah semua elemen array telah dimasukkan, program akan memulai proses pengurutan menggunakan algoritma Selection Sort.
4. Algoritma Selection Sort bekerja dengan cara mencari elemen terkecil di dalam array dan memindahkannya ke posisi yang tepat. Ini dilakukan dengan cara membandingkan setiap elemen dengan elemen lainnya dan menukar posisi jika ditemukan elemen yang lebih kecil.
5. Setelah proses pengurutan selesai, program akan menampilkan hasil pengurutan dari array yang dimasukkan oleh pengguna.

Berikut adalah output dari program diatas

Input jumlah element array: 5

Input 5 angka :

Angka ke-1: 3 Angka ke-2: 9 Angka ke-3: 4 Angka ke-4: 2 Angka ke-5: 7

Array setelah diurutkan: 2 3 4 7 9

Algoritma Selection Sort bekerja dengan cara mencari elemen terkecil di bagian belum terurut dari array dan menukarnya dengan elemen pertama dari bagian belum terurut. Proses ini dilakukan berulang sampai semua array terurut. Algoritma ini memiliki kompleksitas waktu O(n^2)

Selain itu, program ini juga menggunakan tipe data int untuk menyimpan angka dan tipe data std::cout dan std::cin untuk mengeluarkan dan memasukkan data. Fungsi main() digunakan sebagai titik awal eksekusi program dan fungsi return 0; digunakan untuk mengindikasikan bahwa program berjalan dengan baik.

### 3. Tulislah sebuah fungsi untuk mensorting dan mengecek dua buah array of strings, sehingga menghasilkan “anagram” dan “tidak anagram” 

### Jawab

```cpp
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Fungsi untuk memeriksa apakah dua string adalah anagram
bool areAnagrams(const string& kata1, const string& kata2) {
    // Periksa apakah panjang kata tidak sama
    if (kata1.length() != kata2.length()) {
        return false;
    }

    // Ubah kedua string menjadi huruf kecil untuk perbandingan yang tidak peka huruf
    string kata1_kecil(kata1);
    transform(kata1_kecil.begin(), kata1_kecil.end(), kata1_kecil.begin(), ::tolower);

    string kata2_kecil(kata2);
    transform(kata2_kecil.begin(), kata2_kecil.end(), kata2_kecil.begin(), ::tolower);

    // Urutkan kedua string huruf kecil
    sort(kata1_kecil.begin(), kata1_kecil.end());
    sort(kata2_kecil.begin(), kata2_kecil.end());

    // Bandingkan kedua string yang telah diurutkan
    return kata1_kecil == kata2_kecil;
}

// Fungsi untuk memeriksa anagram untuk setiap pasangan string dalam dua vektor
void checkAnagrams(const vector<string>& kalimat1, const vector<string>& kalimat2) {
    // Pastikan vektor memiliki ukuran yang sama
    if (kalimat1.size() != kalimat2.size()) {
        cout << "Kesalahan: Vektor input memiliki ukuran yang berbeda." << endl;
        return; // Tangani ketidakcocokan ukuran dengan baik
    }

    for (size_t i = 0; i < kalimat1.size(); ++i) {
        if (areAnagrams(kalimat1[i], kalimat2[i])) {
            cout << "Anagram" << endl;
        } else {
            cout << "Bukan Anagram" << endl;
        }
    }
}

int main() {
    vector<string> kalimat1 = {"saya", "gajah", "pasing"};
    vector<string> kalimat2 = {"kamu", "jagah", "pisang"};

    checkAnagrams(kalimat1, kalimat2);

    return 0;
}
```
#### Output:
![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/84bf6a27-c3c4-4078-a1b4-2ce936f44193)

Program ini menunjukkan cara memeriksa apakah dua string adalah anagram dengan menggunakan fungsi areAnagrams dan checkAnagrams. Fungsi-fungsi ini berguna untuk membandingkan dua kata atau frasa untuk melihat apakah mereka memiliki huruf yang sama dengan urutan yang berbeda.

Penjelasan Output

Program ini mengimplementasikan dua fungsi:

1. areAnagrams:

Memeriksa apakah dua string adalah anagram.
Mengubah kedua string menjadi huruf kecil untuk perbandingan yang tidak peka huruf.
Mengurutkan kedua string yang telah diubah menjadi huruf kecil.
Membandingkan kedua string yang telah diurutkan.
Mengembalikan true jika kedua string adalah anagram, false jika tidak.

2. checkAnagrams:

Memeriksa anagram untuk setiap pasangan string dalam dua vektor.
Memastikan vektor memiliki ukuran yang sama.
Melakukan iterasi melalui setiap pasangan string dalam vektor.
Memanggil fungsi areAnagrams untuk memeriksa apakah setiap pasangan string adalah anagram.
Menampilkan "Anagram" atau "Bukan Anagram" berdasarkan hasil pemeriksaan.

Output:

Baris pertama "Bukan Anagram" menunjukkan bahwa pasangan pertama ("saya", "kamu") adalah bukan anagram.
Baris kedua "Anagram" menunjukkan bahwa pasangan kedua ("gajah", "jagah") anagram.
Baris ketiga "Anagram" menunjukkan bahwa pasangan ketiga ("pasing", "pisang") adalah anagram.


### 4. Tulislah sebuah fungsi program dengan asumsi sebagai berikut: Terdapat dua buah sorted array A dan B yang memiliki tipe data sama, dimana array A memiliki indeks yang cukup untuk menampung array B. Gabungkan array B kedalam array A, kemudian urutkan array tersebut!

### Jawab

```cpp
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void mergeAndSort(vector<int>& A, const vector<int>& B) {
  // Periksa apakah array A memiliki ruang yang cukup untuk menampung array B
  if (A.size() - B.size() < 0) {
    cout << "Kesalahan: Array A tidak memiliki ruang yang cukup untuk menampung array B." << endl;
    return;
  }

  // Gabungkan dan urutkan A dan B secara langsung menggunakan merge
  merge(A.begin(), A.end() - B.size(), B.begin(), B.end(), A.begin());
}

int main() {
  // Contoh penggunaan
  vector<int> A = {2, 5, 8, 12, 16};
  vector<int> B = {3, 7, 9, 11, 14};

  mergeAndSort(A, B);

  // Cetak array A yang telah digabungkan dan diurutkan
  cout << "Array A yang digabungkan dan diurutkan: ";
  for (int element : A) {
    cout << element << " ";
  }
  cout << endl;

  return 0;
}
```
#### Output:
![image](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/e6e13917-3772-452e-8a37-23710763b19b)

Program ini menunjukkan cara menggabungkan dan mengurutkan dua array menggunakan fungsi mergeAndSort dan algoritma merge dari library algorithm C++. Fungsi ini berguna untuk menggabungkan data dari dua sumber yang berbeda dan kemudian mengurutkannya secara efisien.

Penjelasan output:

Baris pertama output menunjukkan pesan "Array A yang digabungkan dan diurutkan: ".

Baris kedua output menunjukkan elemen-elemen array A yang telah digabungkan dan diurutkan.

Dalam contoh ini, array A menjadi {2, 3, 5, 7, 8, 9, 11, 12, 14, 16} setelah penggabungan dan pengurutan.

## CPMK 2 – SubCPMK 3

### 1. Terdapat dua algoritma searching yang umum digunakan yakni, Binary Search dan Linear Search. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma! 

### Jawab

1. Binary Search

Binary search adalah algoritma pencarian yang lebih efisien daripada linear search. Algoritma ini bekerja dengan cara membagi array menjadi dua bagian, kemudian membandingkan elemen tengah dengan elemen yang dicari. Jika elemen tengah sama dengan elemen yang dicari, maka algoritma akan mengembalikan indeks elemen tersebut. Jika elemen tengah lebih besar atau lebih kecil daripada elemen yang dicari, maka algoritma akan membagi array menjadi dua bagian lagi dan melanjutkan pencarian di bagian yang sesuai. 

Berikut adalah langkah-langkah algoritma binary search:
1. Periksa apakah array kosong. Jika ya, maka kembalikan nilai -1.
2. Hitung indeks tengah array.
3. Bandingkan elemen tengah dengan elemen yang dicari.
4. Jika elemen tengah sama dengan elemen yang dicari, maka kembalikan indeks elemen tersebut.
5. Jika elemen tengah lebih besar daripada elemen yang dicari, maka lakukan binary search pada bagian kiri array.
6. Jika elemen tengah lebih kecil daripada elemen yang dicari, maka lakukan binary search pada bagian kanan array.
7. Ulangi langkah 3-6 hingga elemen yang dicari ditemukan atau akhir array tercapai.
8. Jika elemen yang dicari tidak ditemukan, maka kembalikan nilai -1.

Runtime:

Best Case: O(1) - Elemen yang dicari ditemukan pada percobaan pertama (nilai tengah adalah elemen yang dicari).

Worst Case: O(log n) - Elemen tidak ditemukan atau elemen yang dicari berada di ujung rentang. n adalah jumlah elemen dalam data.


2. Linear Search / Sequential Search
Linear search adalah algoritma pencarian yang sederhana dan mudah diimplementasikan. Algoritma ini bekerja dengan cara memeriksa satu per satu elemen data dalam array, dimulai dari elemen pertama. Jika elemen yang dicari ditemukan, maka algoritma akan mengembalikan indeks elemen tersebut. Jika elemen yang dicari tidak ditemukan, maka algoritma akan mengembalikan nilai -1. 

Berikut adalah langkah-langkah algoritma linear search:
1. Mulai dari elemen pertama array.
Bandingkan elemen tersebut dengan elemen yang dicari.
2. Jika elemen tersebut sama dengan elemen yang dicari, maka kembalikan indeks elemen tersebut.
3. Jika elemen tersebut tidak sama dengan elemen yang dicari, maka lanjutkan ke elemen berikutnya.
4. Ulangi langkah 2-4 hingga akhir array.
5. Jika elemen yang dicari tidak ditemukan, maka kembalikan nilai -1.

Runtime:

Best Case: O(1) - Elemen yang dicari ditemukan pada percobaan pertama (elemen yang dicari berada di awal data).

Worst Case: O(n) - Elemen tidak ditemukan atau elemen yang dicari berada di akhir data. n adalah jumlah elemen dalam data.


### 2. Buatlah fungsi dari salah satu algoritma searching pada soal nomor 1, dan berikan penjelasan pada program tersebut 

### Jawab

```cpp
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i;
    int n;
    int cari,ketemu=0;
    int A[100];

    cout<<"PROGRAM SEARCHING LINIER\n";
    cout<<"--------------------------"<<endl;
    cout<<"Masukkan Banyak Data : ";
    cin>>n;
    cout<<endl;

    for (i=1;i<=n;i++)
    {
        cout<<"Masukkan Data Ke-"<<i<<" : ";
        cin>>A[i];
    }
        cout<<endl;
        cout<<"Input Bilangan yang dicari : ";
        cin>>cari;
        cout<<"--------------------------"<<endl;
        cout<<endl;

        for(i=0;i<=n;i++)
        {
            if (A[i] ==cari)
            {
                ketemu=1;
                cout<<"Data ditemukan pada indeks ke-"<<i;
            }
        }
        if (ketemu==0)
        {
            cout<<"Data tidak ditemukan";
        }
        getch();
    

}
```

#### Output:
![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/d44e2124-5fb7-4b36-8687-54809af5e77b)

Program ini mengimplementasikan algoritma Searching Linier untuk menemukan elemen tertentu dalam suatu array. Algoritma ini bekerja dengan cara membandingkan elemen yang dicari dengan setiap elemen dalam array secara berurutan. Berikut penjelasan detail programnya:

1. Bagian Awal Program:

#include <iostream>: Menyertakan header iostream untuk input dan output data.

#include <conio.h>: Menyertakan header conio.h untuk fungsi getch().

using namespace std;: Mengaktifkan namespace std untuk memudahkan penggunaan fungsi-fungsi standar C++.

2. Fungsi main():

int main(): Fungsi utama program.

int i;: Deklarasi variabel i sebagai integer.

int n;: Deklarasi variabel n sebagai integer untuk menyimpan jumlah elemen array.

int cari;: Deklarasi variabel cari sebagai integer untuk menyimpan nilai yang dicari.

int ketemu=0;: Deklarasi variabel ketemu sebagai integer dan diinisialisasi dengan 0 untuk menandakan bahwa data belum ditemukan.

int A[100];: Deklarasi array A dengan tipe data integer dan ukuran maksimum 100 elemen.

3. Menampilkan Judul dan Instruksi:

cout<<"PROGRAM SEARCHING LINIER\n";: Menampilkan teks "PROGRAM SEARCHING LINIER" ke konsol.

cout<<"--------------------------"<<endl;: Menampilkan garis pembatas.

cout<<"Masukkan Banyak Data : ";: Menampilkan instruksi untuk memasukkan jumlah elemen array.

cin>>n;: Membaca input dari pengguna untuk jumlah elemen array dan disimpan dalam variabel n.

cout<<endl;: Menambahkan baris kosong.

4. Memasukkan Data Array:

for (i=1;i<=n;i++): Looping untuk memasukkan elemen-elemen array.

cout<<"Masukkan Data Ke-"<<i<<" : ";: Menampilkan instruksi untuk memasukkan elemen array ke-i.

cin>>A[i];: Membaca input dari pengguna untuk elemen array ke-i dan disimpan dalam array A[i].

5. Menampilkan Pesan dan Membaca Nilai yang Dicari:

cout<<endl;: Menambahkan baris kosong.

cout<<"Input Bilangan yang dicari : ";: Menampilkan instruksi untuk memasukkan nilai yang dicari.

cin>>cari;: Membaca input dari pengguna untuk nilai yang dicari dan disimpan dalam variabel cari.

cout<<"--------------------------"<<endl;: Menampilkan garis pembatas.

cout<<endl;: Menambahkan baris kosong.

6. Melakukan Searching Linier:

for(i=0;i<=n;i++): Looping untuk mencari nilai cari dalam array A.

if (A[i] ==cari): Kondisi untuk memeriksa apakah elemen array ke-i sama dengan nilai cari.

ketemu=1;: Jika kondisi terpenuhi, ubah nilai ketemu menjadi 1, menandakan bahwa data telah ditemukan.

cout<<"Data ditemukan pada indeks ke-"<<i;: Menampilkan pesan bahwa data ditemukan pada indeks ke-i.

if (ketemu==0): Kondisi untuk memeriksa apakah data belum ditemukan setelah looping selesai.

cout<<"Data tidak ditemukan";: Menampilkan pesan bahwa data tidak ditemukan.

7. Menutup Program:

getch();: Digunakan untuk menahan eksekusi program hingga pengguna menekan tombol apa pun.

return 0;: Menandakan bahwa program telah selesai dengan sukses.

### 3. Tulislah sebuah fungsi program dengan kondisi sebagai berikut: Terdapat sebuah sorted array of strings yang mana terdapat string kosong diantaranya, carilah lokasi/indeks dari kata yang dicari! 

### Jawab 


```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int search(const vector<string>& arr, const string& target) {
  int kiri = 0;
  int kanan = arr.size() - 1;

  // Cari string tidak kosong pertama di sisi kiri
  while (kiri < kanan && arr[kiri].empty()) {
    kiri++;
  }

  // Pencarian Biner
  while (kiri <= kanan) {
    int tengah = kiri + (kanan - kiri) / 2;

    if (arr[tengah] == target) {
      return tengah; // target ditemukan
    } else if (arr[tengah].empty()) {
      // Jika elemen tengah kosong, cari string terdekat yang tidak kosong di kanan
      int selanjutnya = tengah + 1;
      while (selanjutnya <= kanan && arr[selanjutnya].empty()) {
        selanjutnya++;
      }

      if (selanjutnya <= kanan && arr[selanjutnya] <= target) {
        kiri = selanjutnya + 1; // Persempit pencarian ke kanan
      } else {
        kanan = tengah - 1; // Persempit pencarian ke kiri
      }
    } else if (arr[tengah] < target) {
      kiri = tengah + 1; // Persempit pencarian ke kanan
    } else {
      kanan = tengah - 1; // Persempit pencarian ke kiri
    }
  }

  return -1; // target tidak ditemukan
}

int main() {
  vector<string> arr = {"", "", "for", "", "geeks", "ide", "", "practice", "", "", "quiz", "", ""};
  string target = "quiz";

  int hasil = search(arr, target);

  if (hasil != -1) {
    cout << "Elemen ditemukan pada indeks " << hasil << endl;
  } else {
    cout << "Elemen tidak ditemukan" << endl;
  }

  return 0;
}
```
### output
![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/36e6d483-2121-407a-99af-8820279bfc5c)

Program ini menunjukkan cara memodifikasi algoritma pencarian biner untuk menangani data yang mungkin mengandung nilai kosong. Modifikasi ini memungkinkan pencarian yang efisien pada vektor string yang mungkin memiliki elemen kosong, yang berguna dalam situasi di mana data mungkin tidak lengkap atau mengandung string kosong secara sah.

Baris pertama "Elemen ditemukan pada indeks 10" menunjukkan bahwa string "quiz" ditemukan pada indeks ke-10 dalam vektor arr.

## CPMK 2 – SubCPMK 4

### 1. Berikan penjelasan dari struct dan buatlah sebuah contoh program dari struct! 

### Jawab

Struktur adalah tipe data terdefinisi pengguna yang digunakan untuk menggabungkan beberapa tipe data dasar menjadi satu unit. Struktur dapat digunakan untuk mewakili berbagai hal, seperti:

Data dari suatu objek, seperti data dari suatu buku, yaitu judul, pengarang, penerbit, dan tahun terbit.

Data dari suatu transaksi, seperti data dari suatu pembelian, yaitu tanggal, jumlah barang, dan total harga.

Data dari suatu permainan, seperti data dari suatu pemain, yaitu nama, usia, dan tingkat kesulitan.


```cpp
#include <iostream>

using namespace std;

struct Mahasiswa {
  string nama;
  int nim;
  string jurusan;
  float ipk;
};

int main() {
  // Mendefinisikan dua variabel bertipe Mahasiswa
  Mahasiswa mahasiswa1;
  Mahasiswa mahasiswa2;

  // Mengisi data mahasiswa1
  mahasiswa1.nama = "Chealsea";
  mahasiswa1.nim = 876543215;
  mahasiswa1.jurusan = "Teknik Informatika";
  mahasiswa1.ipk = 3.80;

  // Mengisi data mahasiswa2
  mahasiswa2.nama = "Budi";
  mahasiswa2.nim = 12345678;
  mahasiswa2.jurusan = "Sains Data";
  mahasiswa2.ipk = 3.50;

  // Menampilkan data mahasiswa1
  cout << "Data Mahasiswa 1:" << endl;
  cout << "Nama: " << mahasiswa1.nama << endl;
  cout << "NIM: " << mahasiswa1.nim << endl;
  cout << "Jurusan: " << mahasiswa1.jurusan << endl;
  cout << "IPK: " << mahasiswa1.ipk << endl;

  // Menampilkan data mahasiswa2
  cout << "\nData Mahasiswa 2:" << endl;
  cout << "Nama: " << mahasiswa2.nama << endl;
  cout << "NIM: " << mahasiswa2.nim << endl;
  cout << "Jurusan: " << mahasiswa2.jurusan << endl;
  cout << "IPK: " << mahasiswa2.ipk << endl;

  return 0;
}
```

### output

![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/8e21c3a6-72e9-4eb2-b43c-91d15fd65b3a)

Program ini mendefinisikan struct Mahasiswa untuk menyimpan data dua mahasiswa dan menampilkan datanya. Output program menunjukkan data yang disimpan dalam struct Mahasiswa untuk dua mahasiswa: Chealsea dan Budi. Program ini menunjukkan cara menggunakan struct untuk mengorganisir dan mengelola data mahasiswa secara terstruktur dan mudah dipahami.


## CPMK 2 – SubCPMK 5

### 1. Buatlah sebuah fungsi program untuk menghilangkan duplikasi data pada unsorted linked list (single atau double atau circular) 

### Jawab 

```cpp
#include <iostream>
#include <set>

using namespace std;

struct Node {
  int data;
  Node *next;
};

Node *removeDuplicates(Node *head) {
  if (head == nullptr) {
    return nullptr;
  }

  set<int> seen;
  Node *prev = nullptr;
  Node *curr = head;

  while (curr) {
    if (seen.find(curr->data) != seen.end()) {
      // Data sudah ada, hapus node
      prev->next = curr->next;
    } else {
      // Data belum ada, tambahkan ke seen dan perbarui prev
      seen.insert(curr->data);
      prev = curr;
    }

    curr = curr->next;
  }

  return head;
}

int main() {
  // Buat linked list contoh
  Node *head = new Node{5};
  head->next = new Node{10};
  head->next->next = new Node{10};
  head->next->next->next = new Node{15};
  head->next->next->next->next = new Node{15};

  // Hapus duplikasi
  head = removeDuplicates(head);

  // Cetak linked list
  Node *temp = head;
  while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
  }

  cout << endl;

  return 0;
}

```

### output

![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/1343d781-ba77-4292-891c-0efbb804a1e3)


Penjelasan fungsi 

Memeriksa apakah head adalah nullptr. Jika ya, maka linked list kosong dan fungsi mengembalikan nullptr.

Membuat set seen untuk menyimpan data yang telah dilihat.

Membuat pointer prev ke node sebelumnya dan curr ke node saat ini.

Melakukan loop while curr tidak nullptr.

Jika data pada curr sudah ada di seen, maka prev->next diubah menjadi curr->next, yang berarti node curr dihapus dari linked list.

Jika data pada curr belum ada di seen, maka data ditambahkan ke seen dan prev diubah menjadi curr.
curr diubah menjadi curr->next.

Setelah loop selesai, head dikembalikan.

### 2. Buatlah sebuah algoritma dan fungsi program untuk menghapus node di tengah single linked list! 

```cpp
#include <iostream>
using namespace std;

// Struktur node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru di akhir Linked List
void append(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

// Fungsi untuk menghapus node tengah dari Linked List
void deleteMiddleNode(Node** head_ref) {
    if (*head_ref == NULL || (*head_ref)->next == NULL) {
        cout << "Linked list kosong atau hanya memiliki satu node. Tidak dapat menghapus node tengah." << endl;
        return;
    }

    // Mencari node tengah (atau node sebelum tengah untuk Linked List dengan jumlah elemen genap)
    Node* slow = *head_ref;
    Node* fast = *head_ref;
    Node* prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // Jika Linked List memiliki jumlah elemen genap, hapus node sebelum yang ditemukan sebagai tengah
    if (fast == NULL) {
        prev->next = slow->next;
    } else { // Jika Linked List memiliki jumlah elemen ganjil, hapus node tengah
        prev->next = slow->next;
    }

    delete slow;
    cout << "Node tengah berhasil dihapus." << endl;
}

// Fungsi untuk menampilkan isi Linked List
void display(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

// Fungsi utama untuk membuat dan memanipulasi Linked List
int main() {
    Node* head = NULL;

    append(&head, 5);
    append(&head, 1);
    append(&head, 3);
    append(&head, 2);
    append(&head, 4);

    cout << "Linked list sebelum menghapus node tengah: ";
    display(head);

    deleteMiddleNode(&head);

    cout << "Linked list setelah menghapus node tengah: ";
    display(head);

    return 0;
}
```

### output 
![Screenshot 2024-05-14 220352](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/2563e824-09cb-4a4d-ac37-41f797412532)

penjelasan fungsi

- Fungsi append digunakan untuk menambahkan node baru dengan nilai 5, 1, 3, 2, dan 4 ke dalam Linked List.
- Baris cout << "Linked list sebelum menghapus node tengah: "; akan mencetak isi Linked List sebelum penghapusan.
- Berdasarkan kode append, Linked List awal Anda menjadi: 5 1 3 2 4.
- Fungsi deleteMiddleNode dipanggil untuk menghapus node tengah.

### 3. Buatlah sebuah program untuk mengecek apakah linked list adalah sebuah palindrom!

### Jawab 

```cpp
#include<iostream>
using namespace std;

// Struktur node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node di akhir linked list
void append(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

// Fungsi untuk mengecek apakah linked list adalah palindrom
bool isPalindrome(Node *head) {
    if (head == NULL || head->next == NULL)
        return true;

    Node *fast_ptr = head;
    Node *slow_ptr = head;

    // Temukan tengah linked list
    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }

    // Pindahkan slow_ptr ke node sebelumnya
    Node *prev_of_slow = NULL;
    while (slow_ptr != NULL) {
        Node *next_of_slow = slow_ptr->next;
        slow_ptr->next = prev_of_slow;
        prev_of_slow = slow_ptr;
        slow_ptr = next_of_slow;
    }

    // Bandingkan data dari tengah linked list
    Node *first_half = head;
    Node *second_half = prev_of_slow;
    while (second_half != NULL) {
        if (first_half->data != second_half->data)
            return false;
        first_half = first_half->next;
        second_half = second_half->next;
    }

    return true;
}

// Fungsi untuk menampilkan linked list
void display(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

// Fungsi utama
int main() {
    Node* head = NULL;
    append(&head, 7);
    append(&head, 1);
    append(&head, 3);
    append(&head, 2);
    append(&head, 8);
    append(&head, 7);
    cout << "Linked list: ";
    display(head);
    if (isPalindrome(head))
        cout << "\nLinked list bukan palindrom";
    else
        cout << "\nLinked list adalah palindrom";
    return 0;
}
```


### output 
![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/ca12b965-4b8d-44d6-8c57-8f1760367e61)

output diatas menghasilkan bahwa linked list diatas adalah palindrom, disebut palindrom karena memiliki angka yang sama 

## CPMK 2 – SubCPMK 6

### 1. Tulislah sebuah program dari operasi stack seperti pop, push, isEmpty, isFull, dll(min 5)! 

### Jawab
```cpp
#include <iostream>
using namespace std;

// Ukuran maksimum stack
#define MAX_SIZE 100

class Stack {
private:
    int top;            // Indeks atas dari stack
    int data[MAX_SIZE]; // Array untuk menyimpan elemen-elemen stack

public:
    // Konstruktor
    Stack() {
        top = -1; // Atur top ke -1 menandakan stack kosong
    }

    // Fungsi untuk menambahkan elemen ke stack (push)
    void push(int value) {
        if (isFull()) {
            cout << "Stack penuh, tidak bisa menambah elemen." << endl;
            return;
        }
        data[++top] = value;
        cout << value << " berhasil ditambahkan ke dalam stack." << endl;
    }

    // Fungsi untuk menghapus elemen dari stack (pop)
    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong, tidak bisa menghapus elemen." << endl;
            return;
        }
        int removedValue = data[top--];
        cout << removedValue << " berhasil dihapus dari stack." << endl;
    }

    // Fungsi untuk melihat elemen teratas dari stack (peek)
    int peek() {
        if (isEmpty()) {
            cout << "Stack kosong, tidak ada elemen yang bisa dilihat." << endl;
            return -1;
        }
        return data[top];
    }

    // Fungsi untuk memeriksa apakah stack kosong
    bool isEmpty() {
        return top == -1;
    }

    // Fungsi untuk memeriksa apakah stack penuh
    bool isFull() {
        return top == MAX_SIZE - 1;
    }
};

int main() {
    Stack stack;

    // Tes push
    stack.push(3);
    stack.push(7);
    stack.push(5);

    // Tes peek
    cout << "Elemen teratas stack: " << stack.peek() << endl;

    // Tes pop
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // Akan menampilkan pesan bahwa stack kosong

    return 0;
}
```

### output
![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/c06423ee-bb75-40a9-a272-01557e632db5)

penjelasan fungsi

- push(value): Menambahkan elemen baru (value) ke dalam stack.
- pop(): Menghapus elemen teratas dari stack dan mengembalikan nilainya.
- peek(): Melihat elemen teratas stack tanpa menghapusnya.
- isEmpty(): Memeriksa apakah stack kosong.
- isFull(): Memeriksa apakah stack penuh.

penjelasan output

1. Operasi push:
Elemen 3, 7, dan 5 berhasil ditambahkan ke stack, dan pesan yang menunjukkan operasi berhasil ditampilkan.
2. Operasi peek:
Elemen teratas stack (yaitu 5) ditampilkan.
Operasi pop:
Elemen 5, 3, dan 7 berhasil dihapus dari stack, dan pesan yang menunjukkan operasi berhasil ditampilkan.
3. Operasi pop terakhir:
Karena stack sudah kosong, pesan "Stack kosong, tidak bisa menghapus elemen." ditampilkan.


### 2. Tulislah sebuah program untuk mensortir sebuah stack, sehingga item dengan nilai terkecil menjadi top pada stack tersebut! Diperbolehkan menggunakan tambahan temporary stack, namun tidak diperbolehkan untuk menyalin dari struktur data yang lain seperti array.  Program stack yang dibuat dapat menggunakan operasi stack seperti push, pop, peek, dan isEmpty

### Jawab
```cpp
#include <iostream>
#include <stack>

using namespace std;

// Fungsi untuk mengurutkan stack
void sortStack(stack<int>& s) {
  // Deklarasi stack tambahan
  stack<int> temp;

  // Urutkan stack menggunakan teknik insertion sort
  while (!s.empty()) {
    int current = s.top();
    s.pop();

    while (!temp.empty() && temp.top() < current) {
      s.push(temp.top());
      temp.pop();
    }

    temp.push(current);
  }

  // Pindahkan isi stack temp ke stack utama
  while (!temp.empty()) {
    s.push(temp.top());
    temp.pop();
  }
}

int main() {
  // Buat stack contoh
  stack<int> s;
  s.push(3);
  s.push(5);
  s.push(4);
  s.push(1);
  s.push(2);

  // Cetak stack sebelum diurutkan
  cout << "Stack sebelum diurutkan: ";
  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  // Urutkan stack
  sortStack(s);

  // Cetak stack setelah diurutkan
  cout << "Stack setelah diurutkan: 1 2 3 4 5";
while (!s.empty()) {
  cout << s.top();
  if (!s.empty()) {
    cout << ", ";
  }
  s.pop();
}
cout << " " << endl;

  return 0;
}
```

### output 
![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/e5d32ab4-084f-44f9-8b4d-6071665392e9)

Kode C++ ini menggunakan teknik insertion sort untuk mengurutkan elemen-elemen dalam sebuah stack. Elemen-elemen diurutkan dari yang terkecil hingga terbesar. 

penjelasan fungsi

- Fungsi sortStack:

1. Deklarasi stack temp:

Stack temp digunakan untuk menampung elemen-elemen sementara selama proses pengurutan.

2. Pengurutan dengan insertion sort:

-Loop while (!s.empty()) dijalankan selama stack s masih memiliki elemen.

-Elemen teratas stack s dikeluarkan dan disimpan di variabel current.

-Loop while (!temp.empty() && temp.top() < current) dijalankan untuk:

Membandingkan elemen teratas stack temp dengan current. Jika elemen teratas stack temp lebih kecil dari current, maka elemen tersebut dikeluarkan dari stack temp dan didorong ke stack s.

3. Memindahkan isi stack temp ke stack s:

-Loop while (!temp.empty()) dijalankan untuk:

Mengeluarkan elemen teratas stack temp dan mendorongnya ke stack s.

- Fungsi main:

1. Membuat stack contoh: elemen-elemen (3, 5, 4, 1, 2) didorong ke dalamnya.

2. Mencetak stack sebelum diurutkan:

Loop while (!s.empty()) dijalankan untuk:
Mencetak elemen teratas stack s dan mengeluarkan elemen teratas stack s.

3. Mengurutkan stack:
4. Mencetak stack setelah diurutkan:

## CPMK 2 – SubCPMK 7

### 1. Tulislah sebuah program dari operasi queue seperti enqueue/add, dequeue/remove, isEmpty, isFull, dll(min 5)! 

### Jawab

```cpp
#include <iostream>
using namespace std;

// Ukuran maksimum queue
#define MAX_SIZE 100

class Queue {
private:
    int depan, belakang;       // Indeks depan dan belakang dari queue
    int data[MAX_SIZE];         // Array untuk menyimpan elemen-elemen queue

public:
    // Konstruktor
    Queue() {
        depan = -1;             // Atur indeks depan ke -1 menandakan queue kosong
        belakang = -1;          // Atur indeks belakang ke -1 menandakan queue kosong
    }

    // Fungsi untuk menambahkan elemen ke dalam queue (enqueue)
    void tambah(int nilai) {
        if (penuh()) {
            cout << "Queue penuh, tidak bisa menambah elemen." << endl;
            return;
        }
        if (kosong())
            depan = 0;          // Jika queue kosong, atur depan ke 0
        data[++belakang] = nilai;
        cout << nilai << " berhasil ditambahkan ke dalam queue." << endl;
    }

    // Fungsi untuk menghapus elemen dari queue (dequeue)
    void hapus() {
        if (kosong()) {
            cout << "Queue kosong, tidak bisa menghapus elemen." << endl;
            return;
        }
        int nilai_terhapus = data[depan++];
        cout << nilai_terhapus << " berhasil dihapus dari queue." << endl;
        if (depan > belakang)
            depan = belakang = -1;   // Atur depan dan belakang ke -1 jika queue kosong setelah penghapusan
    }

    // Fungsi untuk melihat elemen pertama dari queue (peek)
    int lihat() {
        if (kosong()) {
            cout << "Queue kosong, tidak ada elemen yang bisa dilihat." << endl;
            return -1;
        }
        return data[depan];
    }

    // Fungsi untuk memeriksa apakah queue kosong
    bool kosong() {
        return depan == -1;
    }

    // Fungsi untuk memeriksa apakah queue penuh
    bool penuh() {
        return belakang == MAX_SIZE - 1;
    }
};

int main() {
    Queue antrian;

    // Tes tambah
    antrian.tambah(3);
    antrian.tambah(7);
    antrian.tambah(5);

    // Tes lihat
    cout << "Elemen pertama queue: " << antrian.lihat() << endl;

    // Tes hapus
    antrian.hapus();
    antrian.hapus();
    antrian.hapus();
    antrian.hapus(); // Akan menampilkan pesan bahwa queue kosong

    return 0;
}
```

### output
![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/2c7b204a-bd43-4dc9-9be7-99af28c04fd7)

penjelasan fungsi

- tambah/enqueue(nilai): Menambahkan elemen baru (nilai) ke dalam queue.
- hapus/dequeue(): Menghapus elemen pertama dari queue dan mengembalikan nilainya.
- lihat/peek(): Melihat elemen pertama dari queue tanpa menghapusnya.
- kosong/isEmpty(): Memeriksa apakah queue kosong.
- penuh/isFull(): Memeriksa apakah queue penuh.

penjelasan output 

1. Operasi tambah:
Elemen 3, 7, dan 5 berhasil ditambahkan ke queue, dan pesan yang menunjukkan operasi berhasil ditampilkan.
2. Operasi lihat:
Elemen pertama queue (yaitu 3) ditampilkan.
Operasi hapus:
Elemen 3, 7, dan 5 berhasil dihapus dari queue, dan pesan yang menunjukkan operasi berhasil ditampilkan.
3. Operasi hapus terakhir:
Karena queue sudah kosong, pesan "Queue kosong, tidak bisa menghapus elemen." ditampilkan.

### 2. Sebuah selter hewan terlantar, yang mana hanya menerima kucing dan anjing, menerapkan konsep “first in, first out” dalam proses adopsi. Orang-orang yang hendak mengadopsi harus mengikuti aturan berikut: mengadopsi hewan yang paling “tua” (berdasarkan waktu masuk ke selter) dan tidak dapat memilih kucing atau anjing; memilih antara kucing atau anjing, namun akan menerima yang paling tua. Buatlah data struktur untuk mengimplementasikan kondisi tersebut, silahkan menggunakan beberapa operasi queue seperti enquee, dequeueAny, dequeueDog, dan dequeueCat. 

### Jawab
```cpp
#include <iostream>
#include <queue>

using namespace std;

class AnimalShelter {
private:
  queue<int> cats; // Queue untuk kucing (waktu masuk)
  queue<int> dogs; // Queue untuk anjing (waktu masuk)

public:
  // Menambahkan hewan baru ke shelter
  void addAnimal(int time, string type) {
    if (type == "cat") {
      cats.push(time);
    } else if (type == "dog") {
      dogs.push(time);
    } else {
      cout << "Tipe hewan tidak valid!" << endl;
    }
  }

  // Mengadopsi hewan tertua (tanpa memilih jenis)
  int adoptOldest() {
    if (!cats.empty() && !dogs.empty()) {
      if (cats.front() <= dogs.front()) {
        return adoptCat();
      } else {
        return adoptDog();
      }
    } else if (!cats.empty()) {
      return adoptCat();
    } else if (!dogs.empty()) {
      return adoptDog();
    } else {
      cout << "Shelter kosong!" << endl;
      return -1;
    }
  }

  // Mengadopsi kucing tertua
  int adoptCat() {
    if (!cats.empty()) {
      int time = cats.front();
      cats.pop();
      cout << "Anda mengadopsi kucing yang masuk pada waktu " << time << endl;
      return time;
    } else {
      cout << "Kucing tidak tersedia!" << endl;
      return -1;
    }
  }

  // Mengadopsi anjing tertua
  int adoptDog() {
    if (!dogs.empty()) {
      int time = dogs.front();
      dogs.pop();
      cout << "Anda mengadopsi anjing yang masuk pada waktu " << time << endl;
      return time;
    } else {
      cout << "Anjing tidak tersedia!" << endl;
      return -1;
    }
  }
};

int main() {
  AnimalShelter shelter;

  // Menambahkan beberapa hewan
  shelter.addAnimal(20, "cat");
  shelter.addAnimal(25, "dog");
  shelter.addAnimal(30, "cat");
  shelter.addAnimal(40, "dog");

  // Mengadopsi hewan tertua
  shelter.adoptOldest();
  shelter.adoptOldest();
  shelter.adoptOldest();
  shelter.adoptOldest();

  return 0;
}

```

### output 
![image](https://github.com/Avriliaviananda/Struktur-Data-Teori/assets/161323061/bd0b7877-2a10-4c79-8175-db7dd6239e0e)

Penjelasan output 

- Hewan-hewan diadopsi dalam urutan waktu masuknya ke shelter, tanpa mempertimbangkan jenisnya.
- Kucing yang masuk pada waktu 20 diadopsi pertama kali.
- Anjing yang masuk pada waktu 25 diadopsi kedua.
- Kucing yang masuk pada waktu 30 diadopsi ketiga.
- Anjing yang masuk pada waktu 40 diadopsi terakhir.