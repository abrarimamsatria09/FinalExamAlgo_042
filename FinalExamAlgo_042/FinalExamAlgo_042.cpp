#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
string jurusan[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa() {
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "Masukkan NIM: ";
        cin >> NIM[jumlahMahasiswa];
        cin.ignore();
        cout << "Masukkan Nama: ";
        cin >> NIM[jumlahMahasiswa];
        cout << "Masukkan Jurusan: ";
        cin >> jurusan[jumlahMahasiswa];
        cout << "Masukkan Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];
        
        jumlahMahasiswa++;
        
        cout << "Mahasiswa berhasil ditambahkan." << endl;
    } else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }
}

void tampilkanSemuaMahasiswa() {
    if (jumlahMahasiswa > 0) {
        cout << "Daftar Mahasiswa:" << endl;
        for (int i = 0; i < jumlahMahasiswa; i++) {
            cout << "NIM: " << NIM[i] << endl;
            cout << "Nama: " << nama[i] << endl;
            cout << "Jurusan: " << jurusan[i] << endl;
            cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
        }
    } else {
        cout << "Tidak ada mahasiswa yang terdaftar." << endl;
    }
}

void cariMahasiswaByNIM() {}

void algorithmSortByTahunMasuk() {}

int main() {
    int pilihan;
    
    do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        
        switch (pilihan) {
            case 1:
                tambahMahasiswa();
                break;
            case 2:
                tampilkanSemuaMahasiswa();
                break;
            case 3:
                cariMahasiswaByNIM();
                break;
            case 4:
                algorithmSortByTahunMasuk();
                break;
            case 5:
                cout << "Terima kasih! Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        
        cout << endl;
    } while (pilihan != 5);
    
    return 0;
}

/*2. Menggunakan struktur percabangan Switch, menggunakan Perulangan Do while, algoritma array dan algoritma pengurutan*/
/*3. Stack adalah suatu susunan koleksi data dimana data dapat ditambahkan dan dihapus selalu dilakukan pada bagian akhir data, yang disebut dengan top of stack.
     Stack bersifat LIFO(Last In First Out) sedangkan Queue adalah antrian data yang bersifat FIFO (First In First Out) dimana elemen yang pertama kali masuk ke antrian akan keluar pertama kalinya.*/
/*4. kita menggunakan algoritma stack pada saat ingin menerapkan panggilan fungsi,mempertahankan daftar batalkan untuk aplikasi, memeriksa tumpukan tanda kurung dalam ekspresi dan mengevaluasi ekspresi*/
/*5. A. 6
     b. dengan membaca dari kiri ke kanan pakai metode in order*/