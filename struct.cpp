#include <iostream>
using namespace std;


struct mahasiswa

{
    string nim;
    string nama;
    string alamat; 
};


int main(){
    mahasiswa mhs;

    mhs.nim = "20220140194";
    mhs.nama = "Dhandha Dendriya";
    mhs.alamat = "balecatur";

    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cout << "Masukan NAMA = ";
    cin >> mhs.nama;
    cout << "Masukan Alamat = ";
    cin >> mhs.alamat;

    //menampilkan data struct
    cout << endl;
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Alamat = " << mhs.alamat << endl;
    

};