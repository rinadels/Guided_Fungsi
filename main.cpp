#include <iostream>

using namespace std;

int s;//ini adalah variabel global artinya bisa digunain dimana saja
int hitung_keliling (int s) { //fungsi hitung keliling dengan tipe data int variabel s dan parameter int s
    return 4*s; //rumus menghitung keliling persegi
}
int hitung_luas (int s) { //fungsi hitung luas dengan tipe data int variabel s dan parameter int s
    return s*s; //rumus menghitung luas persegi
}

int masukan;
int main (){
    cout << "Masukkan Panjang Sisi :";
    cin >> s;
    cout << "Keliling :" << hitung_keliling (s) << endl;
    cout << "Luas :" << hitung_luas (s) << endl;

    return 0;
}
