#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct Pemesanan {
    string nama;
    string tujuan;
    string kelas;
    string transit;
    string seat;
    string kodePromo;
    double harga;
};

vector<Pemesanan> riwayat;

void tampilRiwayat() {
    if (riwayat.empty()) {
        cout << "\nBelum ada riwayat pemesanan.\n";
        return;
    }

    cout << "\n=== Riwayat Pemesanan ===\n";
    for (int i = 0; i < riwayat.size(); i++) {
        cout << "\nPemesanan ke-" << i + 1 << ":\n";
        cout << "Nama: " << riwayat[i].nama << endl;
        cout << "Tujuan: " << riwayat[i].tujuan << endl;
        cout << "Kelas: " << riwayat[i].kelas << endl;
        cout << "Transit: " << riwayat[i].transit << endl;
        cout << "Seat: " << riwayat[i].seat << endl;
        cout << "Kode Promo: " << (riwayat[i].kodePromo.empty() ? "-" : riwayat[i].kodePromo) << endl;
        cout << "Harga: Rp" << riwayat[i].harga << endl;
    }
void pesanTiket() {
    Pemesanan p;
    int pilihanTujuan, pilihanKelas, pilihanTransit;
    double hargaDasar = 0;

    cout << "\n=== PEMESANAN TIKET PESAWAT ===\n";
    cout << "Masukkan nama anda: ";
    getline(cin >> ws, p.nama);

    cout << "\nPilih tujuan penerbangan:\n";
    cout << "1. Makassar - Jakarta (RP. 1.200.000)\n";
    cout << "2. Palu - Makassar (RP. 900.000)\n";
    cout << "3. Jakarta - Malaysia (RP. 2.500.000)\n";
    cout << "Pilihan: ";
    cin >> pilihanTujuan;

    switch (pilihanTujuan) {
        case 1: p.tujuan = "Makassar - Jakarta"; hargaDasar = 1200000; break;
        case 2: p.tujuan = "Palu - Makassar"; hargaDasar = 900000; break;
        case 3: p.tujuan = "Jakarta - malaysia"; hargaDasar = 2500000; break;
        default: cout << "Pilihan tidak valid!\n"; return;
    }

    cout << "\nPilih kelas penerbangan:\n";
    cout << "1. Economy Class\n";
    cout << "2. Business Class\n";
    cout << "Pilihan: ";
    cin >> pilihanKelas;

    if (pilihanKelas == 1) {
        p.kelas = "Economy Class";
        hargaDasar *= 1.0;
    } else if (pilihanKelas == 2) {
        p.kelas = "Business Class";
        hargaDasar *= 1.75;
    } else {
        cout << "Pilihan tidak valid!\n"; return;
    }
