#include <iostream>

using namespace std;

void header(){
    cout << "======================================================" << endl;
    cout << "========= PENGHITUNGAN NILAI DARI PERSENTASE =========" << endl;
    cout << "======================================================" << endl;
}
void header1(){
    cout << "======================================================" << endl;
    cout << "============== MASUKAN NILAI PERSENTASE ==============" << endl;
    cout << "======================================================" << endl;
}
void garis(){
    cout << "======================================================" << endl;
}

float totalKeseluruhan(float uts, float puts){
    return uts * puts;
}

float persentaseNilai(float persentase){
    return persentase / 100;
}

void nilaiAkhir(float total){
    if(total >= 85 && total <= 100){
        cout << "Predikat (A), Kategori Istimewa" << endl;
    }else if(total >= 80 && total < 85){
        cout << "Predikat (AB), Kategori Sangat Baik" << endl;
    }else if(total >= 70 && total < 80){
        cout << "Predikat (B), Kategori Baik" << endl;
    }else if(total >= 65 && total < 70){
        cout << "Predikat (BC), Kategori Cukup Baik" << endl;
    }else if(total >= 60 && total < 65){
        cout << "Predikat (C), Kategori Cukup" << endl;
    }else if(total >= 50 && total < 60){
        cout << "Predikat (D), Kategori Kurang" << endl;
    }else if(total >= 0 && total < 50){
        cout << "Predikat (E), Kategori Sangat Kurang" << endl;
    }else{
        cout << "Nilai tidak terdaftar" << endl;
    }
}


int main()
{
    header();
    float uts, uas, tugas;
    float Puts, Puas, Ptugas, jumlah;

    cout << "Masukan Nilai UTS         => ";
    cin >> uts;
    cout << "Masukan Nilai UAS         => ";
    cin >> uas;
    cout << "Masukan Nilai TUGAS       => ";
    cin >> tugas;
    cout << endl;

    header1();
    cout << "Masukan Persentase UTS    => ";
    cin >> Puts;
    cout << "Masukan Persentase UAS    => ";
    cin >> Puas;
    cout << "Masukan Persentase TUGAS  => ";
    cin >> Ptugas;

    garis();
    cout << endl;
    Puts = persentaseNilai(Puts);
    Puas = persentaseNilai(Puas);
    Ptugas = persentaseNilai(Ptugas);

    jumlah += totalKeseluruhan(uts, Puts);
    jumlah += totalKeseluruhan(uas, Puas);
    jumlah += totalKeseluruhan(tugas, Ptugas);

    garis();
    cout << "Nilai Akhirnya adalah     => " << jumlah << endl;
    nilaiAkhir(jumlah);
    garis();

    return 0;
}
