#include <iostream>
using namespace std;
int main(){
    int n = 8;
    int array[n] = {12, 5, 5, 3, 8, 10, 11};
    bool ada = false;
    int i;

    for (i = 0; i < n; ++i) {
        if(array[i] == n) {
            ada = true;
            break;
        }
    }

    if (ada){
        cout << " data ditemukan di indeks ke-" << i << endl;
    } else {
        cout << " data tidak ditemukan." << endl;
    }
    return 0;
}