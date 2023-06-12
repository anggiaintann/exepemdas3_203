#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
    bidangDatar() { //constructor
        x = 0;
    }

    virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
    virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
    virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling

    void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }

    int getX() { //fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran :public bidangDatar {
public:
    void input() { // override fungsi input untuk Lingkaran
        int r;
        cout << "Masukkan jejari: ";
        cin >> r;
        setX(r);
    }

    float Luas(int a) { // override fungsi Luas untuk Lingkaran
        return 3.14 * a * a;
    }

    float Keliling(int a) { // override fungsi Keliling untuk Lingkaran
        return 2 * 3.14 * a;
    }
};

class Bujursangkar :public bidangDatar {
public:
    void input() { // override fungsi input untuk Bujursangkar
        int sisi;
        cout << "Masukkan sisi: ";
        cin >> sisi;
        setX(sisi);
    }

    float Luas(int a) { // override fungsi Luas untuk Bujursangkar
        return a * a;
    }

    float Keliling(int a) { // override fungsi Keliling untuk Bujursangkar
        return 4 * a;
    }
};

int main() {
    Lingkaran lingkaran;
    Bujursangkar bujursangkar;

    cout << "Lingkaran dibuat" << endl;
    lingkaran.input();
    cout << "Luas Lingkaran = " << lingkaran.Luas(lingkaran.getX()) << endl;
    cout << "Keliling Lingkaran = " << lingkaran.Keliling(lingkaran.getX()) << endl;

    cout << "Bujursangkar dibuat" << endl;
    bujursangkar.input();
    cout << "Luas Bujursangkar = " << bujursangkar.Luas(bujursangkar.getX()) << endl;
    cout << "Keliling Bujursangkar = " << bujursangkar.Keliling(bujursangkar.getX()) << endl;

    return 0;
}