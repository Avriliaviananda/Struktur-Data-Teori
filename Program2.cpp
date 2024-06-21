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