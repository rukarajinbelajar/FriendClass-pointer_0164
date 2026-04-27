#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang
{
private:
    double d1,d2,s1,s2;
public:
double hitungLuas(){
    return 0.5*d1*d2;
}
void input(){
        cout << "Masukkan diagonal Layang-layang : " << endl;
        cin >> d1;
        cout << "Masukkan diagonal 2 Layang-layang :  " << endl;
        cin >> d2;
        cout << "Masukkan sisi 1 Layang-layang : " << endl;
        cin >> s1;
        cout << "Masukkan sisi 2 Layang-layang : " << endl;
        cin >> s2;
    }
    friend void tampilkanKeliling(LayangLayang objLayang, BelahKetupat objBelah);
};

class BelahKetupat {
    private:
    double d1, d2, sisi;
    public:
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }
 void input() {
    cout << "Masukkan diagonal 1 Belah Ketupat : " << endl; 
    cin >> d1;
    cout << "Masukkan diagonal 2 Belah Ketupat : " << endl; 
    cin >> d2;
    cout << "Masukkan sisi Belah Ketupat       : " << endl;
    cin >> sisi;
 }
 friend void tampilkanKeliling(LayangLayang objLayang, BelahKetupat objBelah);
};

void tampilkanKeliling(LayangLayang objLayang, BelahKetupat objBelah) 
{
    double kelilingLayang = 2 * (objLayang.s1 + objLayang.s2);
    double kelilingBelah = 4 * objBelah.sisi;
    
    cout << "Keliling Layang-Layang : " << kelilingLayang << endl;
    cout << "Keliling Belah Ketupat : " << kelilingBelah << endl;
}

int main() {
    LayangLayang objLayang;
    BelahKetupat objBelah;
    
    objLayang.input();
    cout << endl;
    objBelah.input();

    cout << "\n--- Hasil Luas ---" << endl;
    cout << "Luas Layang-Layang     : " << objLayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat     : " << objBelah.hitungLuas() << endl;

    cout << "\n--- Hasil Keliling ---" << endl;
    tampilkanKeliling(objLayang, objBelah);
    return 0;
}