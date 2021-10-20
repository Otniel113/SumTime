#include <iostream>
#include <stdlib.h>

using namespace std;


void menuUtama(int jam, int menit, int detik, int hitung);
int convertDetik(int jam, int menit, int detik);
int kalkulasi(int jam, int menit, int detik);
int convertBackJam(int waktu);
int convertBackMenit(int waktu);
int convertBackDetik(int waktu);

void menuUtama(int jam, int menit, int detik, int hitung){
    cout << "Total sekarang adalah : " << jam << " jam " << menit << " menit " << detik << " detik " << endl;
    cout << "Anda sudah memasukkan data sebanyak = " << hitung << " kali" << endl;
    cout << "\nApa yang ingin Anda lakukan?" << endl;
    cout << "1. Tambah waktu" << endl;
    cout << "2. Selesai" << endl;
    cout << "\nPilihan Anda : ";
}

int convertDetik(int jam, int menit, int detik){
    return (jam*3600+menit*60+detik);
}

int kalkulasi(int jam, int menit, int detik){
    int jam_baru, menit_baru, detik_baru;
    cout << "\nMasukkan jam, menit dan detik : " << endl;
    cout << "Jam = ";
    cin >> jam_baru;
    while (jam_baru<0){
        cout << "Masukkan Jam yang valid (lebih besar atau sama dengan 0) : ";
        cin >> jam_baru;
    }

    cout << "\nMenit = ";
    cin >> menit_baru;
    while (menit_baru>59 || menit_baru<0){
        cout << "Masukkan Menit yang valid (dari 0-59) = ";
        cin >> menit_baru;
    }

    cout << "\nDetik = ";
    cin >> detik_baru;
    while (detik_baru>59 || detik_baru<0){
        cout << "Masukkan Detik yang valid (dari 0-59) = ";
        cin >> detik_baru;
    }

    int sumDetikBaru = convertDetik(jam_baru,menit_baru,detik_baru);
    int sumDetik = convertDetik(jam,menit,detik);
    sumDetik = sumDetik+sumDetikBaru;
    return sumDetik;
}

int convertBackJam(int waktu){
    return (waktu/3600);
}

int convertBackMenit(int waktu){
    return ((waktu%3600)/60);
}

int convertBackDetik(int waktu){
    return (waktu%60);
}

int main()
{
    int jam=0;
    int menit=0;
    int detik=0;
    int pil, waktu, hitung=0;;

    do{
        menuUtama(jam,menit,detik,hitung);
        cin >> pil;
        if (pil == 1){
            waktu = kalkulasi(jam,menit,detik);
            jam = convertBackJam(waktu);
            menit = convertBackMenit(waktu);
            detik = convertBackDetik(waktu);
            hitung++;
        }else if (pil == 2){
        }else{
            cout << "Masukkan angka yang valid" << endl;
        }
        system("PAUSE");
        system("CLS");
    }while (pil != 2);

    cout << "Total Akhir adalah : " << jam << " jam " << menit << " menit " << detik << " detik " << endl;
    system("PAUSE");
    return 0;
}
