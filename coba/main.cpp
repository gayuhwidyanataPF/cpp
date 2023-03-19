#include <iostream>
using namespace std;

void line(){
    cout << "=================================================" << endl;
}

void Pilih(){
    cout << "1. Sewa Mobil" << endl;
    cout << "2. Sewa Motor" << endl;
}

string namaMobil(int text){
    if(text == 1){
        return " => Avanza";
    }else if(text == 2){
        return " => Xenia";
    }else if(text == 3){
        return " => Xpander";
    }else if(text == 4){
        return " => Brio";
    }else if(text == 5){
        return " => Pajero";
    }
}

string namaMotor(int text){
    if(text == 1){
        return " => Mio";
    }else if(text == 2){
        return " => PCX";
    }else if(text == 3){
        return " => GTR";
    }else if(text == 4){
        return " => KLX";
    }else if(text == 5){
        return " => CRF";
    }
}

int hargaMobil(int harga){
    if(harga == 1 || harga == 2 || harga == 3){
        return 50000;
    }else if(harga == 4 || harga == 5){
        return 60000;
    }
}
int hargaMotor(int harga){
    if(harga == 1 || harga == 2){
        return 25000;
    }else if(harga == 3 || harga == 4 || harga == 5){
        return 30000;
    }
}

float Totalan(float x, int y){
    return x * y;
}

void mobil(){
    cout << "DAFTAR KENDARAAN MOBIL" << endl;
    cout << "1. Avanza \t Rp50.000" << endl;
    cout << "2. Xenia \t Rp50.000" << endl;
    cout << "3. Xpander \t Rp50.000" << endl;
    cout << "4. Brio \t Rp60.000" << endl;
    cout << "5. Pajero \t Rp60.000" << endl;
    line();
    cout << "Pilih Kendaraan (1-5)          => ";
}

void motor(){
    cout << "DAFTAR KENDARAAN MOTOR" << endl;
    cout << "1. MIO \t Rp25000" << endl;
    cout << "2. PCX \t Rp25000" << endl;
    cout << "3. GTR \t Rp25000" << endl;
    cout << "4. KLX \t Rp30000" << endl;
    cout << "5. CRF \t Rp30000" << endl;
    line();
    cout << "Pilih Kendaraan (1-5)          => ";
}

void header(){
    cout << "=================================================" << endl;
    cout << "========= APLIKASI RENTAL MOBIL & MOTOR =========" << endl;
    cout << "=================================================" << endl;
}

int main(){
    header();
    int jamPinjam, menitPinjam, jamKembali, menitKembali;
    int totalHarga, pilihKendaraan, tampungKendaraan;
    float totalMenitJam, totalJam, totalMenit, tampungJam;
    int x;

    Pilih();
    line();
    cout << "Masukan Pilihan (1-2)          => ";
    cin >> x;

    if(x == 1){
        mobil();
        cin >> pilihKendaraan;
        tampungKendaraan = hargaMobil(pilihKendaraan);
        cout << tampungKendaraan;
        cout << namaMobil(pilihKendaraan);
    }else if(x == 2){
        motor();
        cin >> pilihKendaraan;
        tampungKendaraan = hargaMotor(pilihKendaraan);
        cout << tampungKendaraan;
        cout << namaMotor(pilihKendaraan);
    }else{
        cout << "Kendaraan tidak terdaftar" << endl;
    }
    cout << endl;
    line();

    cout << "DURASI" << endl;
    cout << "Masukan Jam Pinjam  (00.00)" << endl;
    cout << "Masukan Jam                    => ";
    cin >> jamPinjam;
    cout << "Masukan Menit                  => ";
    cin >> menitPinjam;
    cout << "Masukan Jam Kembali (00.00)" << endl;
    cout << "Masukan Jam                    => ";
    cin >> jamKembali;
    cout << "Masukan Menit                  => ";
    cin >> menitKembali;

    if((menitKembali - menitPinjam) < 0){
        totalMenit = (menitKembali + 60) - menitPinjam;
        totalMenitJam = totalMenit / 60;
    }else{
        totalMenit = menitKembali - menitPinjam;
        totalMenitJam = totalMenit / 60;
    }

    if((jamKembali - jamPinjam) < 0){
        totalJam = (24 + jamKembali) - jamPinjam;
    }else{
        totalJam = jamKembali - jamPinjam;
    }

    tampungJam = totalJam + totalMenitJam;

    line();
    cout << "Pinjam Jam     => " << jamPinjam << "." << menitPinjam << endl;
    cout << "Kembali Jam    => " << jamKembali << "." << menitKembali << endl;
    line();
    cout << "Total Selama Pinjam            => " << totalJam << " jam " << totalMenit << " menit" << endl;

    totalHarga = Totalan(tampungJam, tampungKendaraan);
    cout << "Total Yang Harus Di Bayar      => Rp " << totalHarga;
    cout << endl;
    line();
}
