#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaSiswa;
    double nilaiKeaktifan, nilaiTugas, nilaiUjian;

    // Masukkan nama siswa
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa : ";
    getline(cin, namaSiswa);

    // Masukkan nilai keaktifan
    cout << "Nilai Keaktifan : ";
    cin >> nilaiKeaktifan;

    // Masukkan nilai tugas
    cout << "Nilai Tugas : ";
    cin >> nilaiTugas;

    // Masukkan nilai ujian
    cout << "Nilai Ujian : ";
    cin >> nilaiUjian;

    // Hitung nilai akhir (contoh sederhana)
    double nilaiAkhir = (nilaiKeaktifan + nilaiTugas + nilaiUjian) / 3.0;

    // Menampilkan nilai akhir
    cout << "Nilai Akhir untuk " << namaSiswa << " adalah: " << nilaiAkhir << endl;

    // Menentukan grade berdasarkan nilai akhir
    char grade;
    if (nilaiAkhir >= 80) {
        grade = 'A';
    } else if (nilaiAkhir >= 70) {
        grade = 'B';
    } else if (nilaiAkhir >= 60) {
        grade = 'C';
    } else if (nilaiAkhir >= 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Menampilkan grade
    cout << "Grade untuk " << namaSiswa << " adalah: " << grade << endl;

    return 0;
}