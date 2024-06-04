#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;

    // membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file 
    outfile.open("contohfile.text");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis 
    while(true) {
        cout << "= ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // Loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup file nya
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file" << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan dsini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak di temukan file makan akan menampilkan ini
    else cout << "unable to open file";
    return 0;
}