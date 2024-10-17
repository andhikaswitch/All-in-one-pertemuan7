#include <iostream>
using namespace std;

int main() {
    int jumlah_array;

    cout << "Masukkan jumlah elemen array: ";
    cin >> jumlah_array;

    int array[jumlah_array];

    cout << "Masukkan " << jumlah_array << " angka:" << endl;
    for (int i = 0; i < jumlah_array; i++) { //loop jumlah_array misal input 5 bakal loop dari 0-4=total 5 kali
        cout << "Elemen ke-" << i + 1 << ": "; //i+1 maksudnya kita ngambil dari i di loop.jadi i+1 artinya bakal di ulang 5 kali kalo di ambil contoh dari contoh diatas..intinya buat nambah elemen ke-1 sampe 5 karna yg di input itu 5 dan 5 tersimpan di i karna perulangannya 5 kali
        cin >> array[i];//menyimpan nilai dari inputan tadi.misal input 5 maka pada iterasi ke-1 bakal 0 karna array selalu dimulai dari 0(ini 0-4=5 kali perulangan).
    }

    int nilai_tertinggi = array[0];//nyari nilai tertinggi,array[0] artinya nilai_tertinggi=array[0]maka bila array{4,3,8}maka '4' adalah nilai tertinggi.ini hanya bersifat sementara
    for (int i = 1; i < jumlah_array; i++) { //ngelakuin looping untuk memeriksa indek 1-sampai akhir(dari 0 sampai akhir)/ini juga bisa diganti jumlah_array dengan array[i].
        if (array[i] > nilai_tertinggi) { //nah disini melakukan pengecekan nila tertinggi dikarenakan sebagai contoh indeks/array 0 adalah 4 maka..array[i] di cek apakah lebih besar dari nilai_tertinggi.di cek trus.sampai pada perulangan ke-tiga/pada indeks/array ketiga ternyata array[i]>nilai_tertinggi adalah true.karna benar 8 lebih besar dari 4
            nilai_tertinggi = array[i];//disininilainya di update jika kondisi diatas terpenuhi maka nilai_tertinggi akan di update menjadi array[i](karna disini nilai terbesar tersimpan)
        }
    }

    cout << "Nilai tertinggi dalam array: " << nilai_tertinggi << endl;

    int nilai_dicari;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> nilai_dicari;

    bool ditemukan = false;//sebenernya pakai tipe data int juga bisa..cuma ini buat memperjelas aja apa yang lagi dilakukan
    for (int i = 0; i < jumlah_array; i++) {//kenapa menggunakan '<' daripada '>' karna bila menggunaka '>'(lebih besar)maka akan langsung true(tidak ada looping).maka haru menggunakan'<'(lebih kecil)agar ada perulangan..biar diitung dari indeks/array 0 sampai terakhir..
        if (array[i] == nilai_dicari) {//jika nilai yg ada di array[i] == nilai_dicari maka akan true..misal say punya input angka 5 nah ternyata di array[i] juga ada angka 5 maka akan true
            cout << "Angka " << nilai_dicari << " ditemukan pada indeks ke-" << i << endl;//i adalah variable yg di loop tadi..nah angka 5 ternyata ada di loopingan ke 2 atau bila dalam array/indeks itu ada pada ke 1..karna array selalu dimulai dari 0
            ditemukan = true;
        }
    }
    // !ini operator yg mengekpresikan boolean..jadi dikarenakan boolean diatas itu..bool ditemuka = false maka bila saya !ditemukan maka akan menjadi true disini.. dan sebaliknya juga..bila bool = true maka !variable akan menjadi false
    if (!ditemukan) { // !ditemukkan itu true sedangkan variable ditemukan itu false sehingga dia looping dlu disitu(karna saya menggunakan' < lebih kecil'..
        cout << "Angka " << nilai_dicari << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
