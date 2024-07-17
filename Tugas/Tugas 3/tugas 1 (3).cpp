#include <iostream>
#include <string>
using namespace std;

// Kelas Siswa
class Siswa {
private:
    string nama;
    int nim;

public:
    // Konstruktor
    Siswa(string _nama, int _nim) {
        nama = _nama;
        nim = _nim;
    }

    // Menampilkan data siswa
    void tampilkanData() {
        cout << "Nama siswa: " << nama << endl;
        cout << "NIM: " << nim << endl;
    }
};

// Fungsi untuk menginput data siswa (nama dan NIM), nilai pertandingan, dan menghitung rata-rata
float inputNilaiPertandingan() {
    string nama;
    int nim;
    float nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;

    // Meminta masukan nama dan NIM siswa
    cout << "Masukkan nama siswa: ";
    cin >> nama;
    cout << "Masukkan NIM siswa: ";
    cin >> nim;

    // Meminta masukan nilai pertandingan
    cout << "Masukkan nilai pertandingan 1: ";
    cin >> nilaiPertandingan1;
    cout << "Masukkan nilai pertandingan 2: ";
    cin >> nilaiPertandingan2;
    cout << "Masukkan nilai pertandingan 3: ";
    cin >> nilaiPertandingan3;

    // Menghitung nilai rata-rata
    float rataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3.0;

    // Membuat objek Siswa berdasarkan input nama dan NIM
    Siswa siswa(nama, nim);

    // Menampilkan data siswa
    cout << "Data siswa:" << endl;
    siswa.tampilkanData();

    return rataRata;
}

int main() {
    // Memanggil fungsi untuk input nilai pertandingan dan mendapatkan nilai rata-rata
    float nilaiRataRata = inputNilaiPertandingan();

    // Menampilkan nilai rata-rata pertandingan
    cout << "Nilai rata-rata pertandingan adalah: " << nilaiRataRata << endl;

    // Memeriksa dan memberikan peringkat juara berdasarkan nilai rata-rata
    if (nilaiRataRata > 80) {
        cout << "Selamat! Anda adalah Juara 1." << endl;
    } else if (nilaiRataRata >= 75) {
        cout << "Anda adalah Juara 2." << endl;
    } else if (nilaiRataRata >= 65) {
        cout << "Anda adalah Juara 3." << endl;
    } else {
        cout << "Maaf, Anda tidak mendapatkan peringkat juara." << endl;
    }

    return 0;
}