#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    cout << nilaiAkhir(nilai) << endl;

    return 0;
}
string nilaiAkhir(int nilai) {
    if (nilai >= 90) {
        return "Selamat! Anda mendapatkan nilai A";
    } else if (nilai >= 80) {
        return "Anda mendapatkan nilai B";
    } else if (nilai >= 70) {
        return "Anda mendapatkan nilai C";
    } else if (nilai >= 60) {
        return "Anda mendapatkan nilai D";
    } else {
        return "Anda mendapatkan nilai E";
    }
}



