# <h1 align="center">SOAL 4</h1>
<p align="center">Avrilia Viananda Nagita</p>

## Dasar Teori

1. Graph 

Graf adalah kumpulan noktah (simpul) di dalam bidang dua dimensi yang dihubungkan dengan sekumpulan garis (sisi). Graph dapat digunakan untuk merepresentasikan objek-objek diskrit dan hubungan antara objek-objek tersebut. Representasi visual dari graph adalah dengan menyatakan objek sebagai noktah, bulatan atau titik (Vertex), sedangkan hubungan antara objek dinyatakan dengan garis (Edge).[1]

G = (V, E)

Dimana :

- G = Graph
- V = Simpul atau Vertex, atau Node, atau Titik
- E = Busur atau Edge, atau arc [1]

Graf merupakan suatu cabang ilmu yang memiliki banyak terapan. Banyak sekali struktur yang bisa direpresentasikan dengan graf, dan banyak masalah yang bisa diselesaikan dengan bantuan graf. Seringkali graf digunakan untuk merepresentasikan suaru jaringan. Misalkan jaringan jalan raya dimodelkan graf dengan kota sebagai simpul (vertex/node) dan jalan yang menghubungkan setiap kotanya sebagai sisi (edge) yang bobotnya (weight) adalah panjang dari jalan tersebut.[2]

![image](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/8078c7ee-2cf4-4389-a9e3-2db0f1bc49a1)

Jenis Graph  

a. Graph Berarah (Directed Graph) : jika sisi-sisi graph hanya 
berlaku satu arah. 
Misalnya : {x,y} yaitu arah x ke y, bukan dari y ke x; x 
disebut origin dan y disebut terminus. Secara notasi sisi 
digraph ditulis sebagai vektor (x, y).[3]

b.  Graph Tak Berarah (undirected graph atau undigraph): 
setiap sisi {x, y} berlaku pada kedua arah: baik x ke y 
maupun y ke x. Secara grafis sisi pada undigraph tidak 
memiliki 
mata panah dan secara notasional 
menggunakan kurung kurawal. [3]

c.    Graph Berbobot (Weighted Graph):
Jika setiap busur mempunyai nilai yang menyatakan hubungan antara 2 buah simpul, maka busur tersebut dinyatakan memiliki bobot. Bobot sebuah busur dapat menyatakan panjang sebuah jalan dari 2 buah titik, jumlah rata-rata kendaraan perhari yang melalui sebuah jalan, dll. [3]

2. Tree

Pohon adalah suatu bentuk struktur data nonlinier yang menggambarkan hubungan hierarki (hubungan satu-ke-banyak) antar elemen.
Pohon dapat didefinisikan sebagai kumpulan node dengan akar dan elemen khusus yang disebut  node lain. 

![image](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/8dabd091-49a1-4b60-a15c-3c519c362742)

Pengoperasian node berikut dalam pohon biner, atau traversal, dibagi menjadi tiga bagian: [2]

a.  PreOrder

b.  InOrder 

c.  PostOrder 

- Tree (atau pohon) sejumlah node yang berhubungan 
secara hirarkis dimana suatu node pada suatu hirarki merupakan cabang dari node dengan hirarki yang lebih tinggi dan juga memiliki cabang ke beberapa node lainnya dengan hirarki yang lebih rendah. [3]
- Root (atau akar) 
Node dengan hirarki tertinggi dinamakan root. 
- Leaf (atau daun) 
Node yang tidak memiliki cabang. 
- Internal node (atau node dalam) 
Node yang bukan merupakan leaf. 
- Edge (atau sisi atau cabang) 
Menyatakan hubungan hirarkis antara kedua node yang 
terhubungkan, biasanya digambarkan berarah (berupa panah) untuk menunjukkan node asal edge lebih tinggi dari node tujuan dari edge. [3]

## Program
```cpp
#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjLists;
    vector<bool> visited;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjLists.resize(vertices);
        visited.resize(vertices, false);
    }

    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
        adjLists[dest].push_back(src); // for undirected graph
    }

    void DFS(int vertex) {
        visited[vertex] = true;
        cout << "Visited " << vertex << endl;

        for (int adjVertex : adjLists[vertex]) {
            if (!visited[adjVertex]) {
                DFS(adjVertex);
            }
        }
    }

    void displayGraph() {
        for (int i = 0; i < numVertices; i++) {
            cout << "Adjacency list of vertex " << i << ": ";
            for (int j : adjLists[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);

    graph.displayGraph();

    cout << "Depth First Traversal: " << endl;
    graph.DFS(0);

    return 0;
}

```

## Referensi
[1] Muhammad Taufik Dwi Putra. et.al., Pemprograman Lanjut dengan C++, Bandung : Widina Media Utama, 2023.

[2] Afrizal Zein and Emi Sita Eriana., Algoritma dan Struktur Data, Tangerang Selatan: Unpam Press, 2022.

[3] Anita Sindar., STRUKTUR DATA DAN ALGORITMA DENGAN C++, Banten : CV.AA.RIZKY, 2019.