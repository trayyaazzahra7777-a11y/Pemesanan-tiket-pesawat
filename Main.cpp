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
