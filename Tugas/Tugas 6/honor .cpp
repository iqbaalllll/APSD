#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung total honor pegawai
int hitungTotalHonor(int jamKerja) {
    const int jamNormal = 8;
    const int honorHarian = 15000;
    const int honorLemburPerJam = 5000;

    int honorLembur = 0;
    if (jamKerja > jamNormal) {
        honorLembur = (jamKerja - jamNormal) * honorLemburPerJam;
    }

    return honorHarian + honorLembur;
}

int main() {
    int banyakData;
    cout << "Masukkan banyak data: ";
    cin >> banyakData;

    // Menampilkan header tabel
    cout << "| No | Nama Pegawai   | Jam Kerja | Honor Lembur | Total Honor |" << endl;
    cout << "|----|----------------|-----------|--------------|-------------|" << endl;
    
    for (int i = 1; i <= banyakData; ++i) {
        string namaPegawai;
        int jamKerja;

        cout << "| " << i << "  | ";
        cout << "Nama Pegawai: ";
        cin.ignore(); // Membersihkan buffer input
        getline(cin, namaPegawai);
        cout << "    Jam Kerja: ";
        cin >> jamKerja;

        int totalHonor = hitungTotalHonor(jamKerja);
        int honorLembur = (jamKerja > 8) ? (jamKerja - 8) * 5000 : 0;

        // Menampilkan data pegawai dalam tabel
        cout << "|    | " << namaPegawai << " | " << jamKerja << " | " << honorLembur << " | " << totalHonor << " |" << endl;
    }

    return 0;
}
