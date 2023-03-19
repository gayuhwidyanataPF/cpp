#include <iostream>

using namespace std;

// function Daftar Menu
void menu(){
    cout << "DAFTAR MENU MAKANAN (pilih 1 - 5): " << endl;
    cout << "1. Nasi Goreng \t\t Rp 12.000" << endl;
    cout << "2. Nasi Bali \t\t Rp 15.000" << endl;
    cout << "3. Bubur Kacang Hijau \t Rp 12.500" << endl;
    cout << "4. Bakmi Goreng \t Rp 20.000" << endl;
    cout << "5. Mie Goreng \t\t Rp 10.000 \n" << endl;
    cout << "DAFTAR MENU MINUMAN (pilih 6 - 10): " << endl;
    cout << "6. Teh (panas / es) \t Rp 3.000" << endl;
    cout << "7. Jeruk (panas / es)\t Rp 3.500" << endl;
    cout << "8. Susu (panas / es)\t Rp 4.000" << endl;
    cout << "9. Energen (panas / es)\t Rp 5.000" << endl;
    cout << "10. Kopi (panas / es) \t Rp 4.500" << endl;
}

// function mempercantik tampilan
void Ucapan(){
    cout << "======================================================" << endl;
    cout << "============ SELAMAT DATANG DI BURJO KAMI ============" << endl;
    cout << "======================================================" << endl;
}
void penutupan(){
    cout << "======================================================" << endl;
    cout << "============= TERIMA KASIH SUDAH MEMBELI =============" << endl;
    cout << "======================================================" << endl;
}
void garis(){
    cout << "======================================================" << endl;
}

// function penentu harga
int hargaMenu(int menu){
    if(menu == 1){
        return 12000;
    }
    else if(menu == 2){
        return 15000;
    }
    else if(menu == 3){
        return 12500;
    }
    else if(menu == 4){
        return 20000;
    }
    else if(menu == 5){
        return 10000;
    }
    else if(menu == 6){
        return 3000;
    }
    else if(menu == 7){
        return 3500;
    }
    else if(menu == 8){
        return 4000;
    }
    else if(menu == 9){
        return 5000;
    }
    else if(menu == 10){
        return 4500;
    }
    else{
        return 0;
    }
}

// function jumlah pesanan
int jumlahPesanan(int x, int y){
    return x * y;
}

// function total keseluruhan
int totalKeseluruhan(int x, int y){
    return x += y;
}

int main()
{
    int x, jumlahPesan, totalTagihan, menuHarga, totalPesanan;
    Ucapan();
    cout << endl;
    menu();
    cout << endl;
    for(int i = 0;; i++){
        garis();
        cout << "Klik Angka '0' untuk mengakhiri." << endl;
        cout << "Pesanan ke " << i + 1 << endl;
        cout << "Pilih menu no berapa \t => ";
        cin >> x;
        menuHarga = hargaMenu(x);
        if(x == 0){
            garis();
            garis();
            break;
        }
        cout << "Harga \t\t\t => " << menuHarga;
        cout << endl;
        if(menuHarga == 0){
            cout << "MAAF MENU TIDAK TERSEDIA \n";
            garis();
            cout << endl;
            continue;
        }
        cout << "jumlah pesan \t\t => ";
        cin >> jumlahPesan;
        garis();
        totalPesanan = jumlahPesanan(menuHarga, jumlahPesan);
        cout << "\t\t\t => Rp" << totalPesanan << endl;
        cout << endl;
        totalTagihan = totalKeseluruhan(totalTagihan, totalPesanan);
    }

    cout << "\n\n\n";
    garis();
    cout << "TOTAL YANG HARUS DI BAYAR SEBESAR \t => Rp" << totalTagihan << endl;
    garis();
    cout << endl;

    penutupan();
    return 0;
}
