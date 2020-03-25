#include <iostream> 
#include <limits>

using namespace std;

int main(){
    /*
     Variabel merupakan deklarasi sesuatu objek yang memiliki nilai yang bisa berubah-ubah.
     Cara Deklarasi Variabel : Tipe_Data Nama_Variabel;
     Contoh
        int A;

     */
    
    /* Tipe Data
        1. Bilangan Bulat
            1. short
            2. int
            3. long
        2. Bilangan Desimal
            1. float
            2. double
        3. Karakter
            1. char
        4. Boolean
    */ 

    // Tipe Data Short
    system("cls"); // Untuk Membersihkan Screen di terminal
    cout << "===== Tipe Data Bilangan Bulat =====" << endl << endl;
    short a; // Deklarasi
    cout << "1. Short" << endl;
    cout << "Ukuran   : " << sizeof(a) << " Byte (" << sizeof(a)*8 << "-Bit)" << endl;
    cout << "Maximal  : " << numeric_limits<short>::max() << endl;
    cout << "Minimal  : " << numeric_limits<short>::min() << endl;
    cout << "Unsigned : Max(" << numeric_limits<unsigned short>::max() << "), Min(" << numeric_limits<unsigned short>::min() << ")" << endl << endl;
    cin.get();

    // Tipe Data Integer
    system("cls"); // Untuk Membersihkan Screen di terminal
    cout << "===== Tipe Data Bilangan Bulat =====" << endl << endl;
    int b; // Deklarasi
    cout << "2. Integer" << endl;
    cout << "Ukuran   : " << sizeof(b) << " Byte (" << sizeof(b)*8 << "-Bit)" << endl;
    cout << "Maximal  : " << numeric_limits<int>::max() << endl;
    cout << "Minimal  : " << numeric_limits<int>::min() << endl;
    cout << "Unsigned : Max(" << numeric_limits<unsigned int>::max() << "), Min(" << numeric_limits<unsigned int>::min() << ")" << endl << endl;
    cin.get();

    // Tipe Data Long
    system("cls"); // Untuk Membersihkan Screen di terminal
    cout << "===== Tipe Data Bilangan Bulat =====" << endl << endl;
    long long c; // Deklarasi
    cout << "2. Long Long" << endl;
    cout << "Ukuran   : " << sizeof(c) << " Byte (" << sizeof(c)*8 << "-Bit)" << endl;
    cout << "Maximal  : " << numeric_limits<long long>::max() << endl;
    cout << "Minimal  : " << numeric_limits<long long>::min() << endl;
    cout << "Unsigned : Max(" << numeric_limits<unsigned long long>::max() << "), Min(" << numeric_limits<unsigned long long>::min() << ")" << endl << endl;
    cin.get();

    // Tipe Data float
    system("cls"); // Untuk Membersihkan screen di terminal
    cout << "===== Tipe Data Bilangan Desimal =====" << endl << endl;
    short d; // deklarasi 
    cout << "1. Float" << endl;
    cout << "Ukuran  : " << sizeof(d) << " Byte (" << sizeof(d)*8 << "-Bit)" << endl; 
    cout << "Maximal : " << numeric_limits<float>::max() << endl;
    cout << "Minimal : " << numeric_limits<float>::min() << endl;
    cin.get();

    // Tipe Data double
    system("cls"); // Untuk Membersihkan screen di terminal
    cout << "===== Tipe Data Bilangan Desimal =====" << endl << endl;
    double e; // deklarasi 
    cout << "1. Double" << endl;
    cout << "Ukuran  : " << sizeof(d) << " Byte (" << sizeof(d)*8 << "-Bit)" << endl; 
    cout << "Maximal : " << numeric_limits<double>::max() << endl;
    cout << "Minimal : " << numeric_limits<double>::min() << endl;
    cin.get();

    // Tipe Data Karakter
    system("cls"); // Untuk Membersihkan screen di terminal
    cout << "===== Tipe Data Character =====" << endl << endl;
    char f; // deklarasi 
    cout << endl;
    cout << "Ukuran : " << sizeof(f) << " Byte (" << sizeof(f)*8 << "-Bit)" << endl << endl;
    cin.get();

     // Tipe Data Boolean
    system("cls"); // Untuk Membersihkan screen di terminal
    cout << "===== Tipe Data Boolean =====" << endl << endl;
    bool g; // deklarasi 
    cout << endl;
    cout << "Ukuran : " << sizeof(g) << " Byte (" << sizeof(g)*8 << "-Bit)" << endl << endl;
    cout << "Maximal : " << numeric_limits<bool>::max() << endl;
    cout << "Minimal : " << numeric_limits<bool>::min() << endl;
    cin.get();

    return 0;
}