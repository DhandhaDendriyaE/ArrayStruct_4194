#include <iostream>
using namespace std;


struct detailAlamat
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nim;
    string nama;
    detailAlamat alamat;
};


int main(){
    mahasiswa mhs;

    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cin.ignore();
    cout << "Masukan NAMA = ";
    cin >> mhs.nama;
    cout << "Masukan Alamat Desa = ";
    cin >> mhs.alamat.desa;
    cout << "Masukan Alamat Kota";
    cin >> mhs.alamat.kota;

    cout << endl;
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Desa = " << mhs.alamat.desa << endl;
    cout << "Kota = " << mhs.alamat.kota << endl;
    
}