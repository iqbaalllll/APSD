#include <iostream>
#include <string>

using namespace std;

int main() {
    const int GAJI_POKOK = 300000;
    const int HARGA_LEMBUR_PER_JAM = 3500;
    const int JAM_KERJA_NORMAL = 8;

    string nama;
    int golongan, jamKerja;
    string pendidikan;
    double tunjanganJabatan = 0, tunjanganPendidikan = 0, honorLembur = 0;

    // Input data karyawan
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Karyawan: ";
    getline(cin, nama);
    cout << "Golongan Jabatan (1/2/3): ";
    cin >> golongan;
    cout << "Pendidikan (SMA/D1/D3/S1): ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja: ";
    cin >> jamKerja;

    // Menghitung tunjangan jabatan
    switch(golongan) {
        case 1:
            tunjanganJabatan = 0.05 * GAJI_POKOK;
            break;
        case 2:
            tunjanganJabatan = 0.10 * GAJI_POKOK;
            break;
        case 3:
            tunjanganJabatan = 0.15 * GAJI_POKOK;
            break;
        default:
            cout << "Golongan tidak valid." << endl;
            return 1;
    }

    // Menghitung tunjangan pendidikan
    if (pendidikan == "SMA") {
        tunjanganPendidikan = 0.025 * GAJI_POKOK;
    } else if (pendidikan == "D1") {
        tunjanganPendidikan = 0.05 * GAJI_POKOK;
    } else if (pendidikan == "D3") {
        tunjanganPendidikan = 0.20 * GAJI_POKOK;
    } else if (pendidikan == "S1") {
        tunjanganPendidikan = 0.30 * GAJI_POKOK;
    } else {
        cout << "Pendidikan tidak valid." << endl;
        return 1;
    }

    // Menghitung honor lembur
    if (jamKerja > JAM_KERJA_NORMAL) {
        honorLembur = (jamKerja - JAM_KERJA_NORMAL) * HARGA_LEMBUR_PER_JAM;
    }

    // Output hasil perhitungan
    cout << endl << "Siswa yang bernama " << nama << endl;
    cout << "Tunjangan Jabatan Rp " << tunjanganJabatan << endl;
    cout << "Tunjangan Pendidikan Rp " << tunjanganPendidikan << endl;
    cout << "Honor Lembur Rp " << honorLembur << endl;
     
     return 0;
}