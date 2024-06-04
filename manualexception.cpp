#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMYEAH" << endl;
        throw 0.5; // melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan di eksekusi" << endl;
    }
    catch (int a) {
        // blok ini di eksekusi 
        cout << "Pengecualian akan di eksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini di eksekusi*/
        cout << "default Pengecualian dieksekusi" << endl;
    }
    return 0;
}