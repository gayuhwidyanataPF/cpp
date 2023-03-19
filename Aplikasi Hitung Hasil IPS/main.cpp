#include <iostream>

using namespace std;

float TotalBobotSKS(float x, float y){
    return x * y;
}
float assignment(float x, float y){
    return x += y;
}
float HitungIp(float x, float y){
    return x / y;
}

void dataDiri(){
    string nama, nim, prodi, fakultas, univ;

    cout << "========================================================" << endl;
    cout << "================= Data Diri Mahasiswa ==================" << endl;
    cout << "========================================================\n" << endl;

    cout << "Masukan Nama \t\t: ";
    getline(cin, nama);
    cout << "Masukan NIM \t\t: ";
    getline(cin, nim);
    cout << "Masukan Progdi \t\t: ";
    getline(cin, prodi);
    cout << "Masukan Fakultas \t: ";
    getline(cin, fakultas);
    cout << "Masukan Universitas \t: ";
    getline(cin, univ);

    cout << endl;
    cout << nama << endl;
    cout << nim << endl;
    cout << prodi << endl;
    cout << fakultas << endl;
    cout << univ << endl;
}

int main()
{
    //dataDiri();
    int jumlahMatkul;

    cout << "========================================================" << endl;
    cout << "===== SISTEM PENGHITUNGAN INDEKS PRESTASI SEMESTER =====" << endl;
    cout << "========================================================\n" << endl;
    cout << "Berapa Jumlah mata kuliah \t= ";
    cin >> jumlahMatkul;
    cout << endl;


    float bobotNilai, hasil, tampungBobot, tampungSks, totalIp;
    int jumlahSks;

    for(int i = 0; i < jumlahMatkul; i++){
        cout << "Mata Kuliah ke " << i + 1 << endl;
        cout << "Masukan Bobot Nilai \t: ";
        cin >> bobotNilai;
        cout << "Masukan Jumlah SKS \t: ";
        cin >> jumlahSks;
        hasil = TotalBobotSKS(bobotNilai, jumlahSks);
        cout << "Hasilnya adalah \t: " << hasil << endl;
        cout << endl;
        tampungBobot = assignment(tampungBobot, hasil);
        tampungSks = assignment(tampungSks, jumlahSks);
    }

    cout << "Hasil Akhir \t\t= " << tampungBobot << endl;
    cout << "Jumlah SKS \t\t= " << tampungSks << endl;
    totalIp = HitungIp(tampungBobot, tampungSks);
    cout << endl;
    cout << "Keterangan: \n";
    cout << "Hasil Indeks Prestasi Semester Anda adalah = " << totalIp << endl;

    totalIp = 3;
    if(totalIp >= 3.50){
        cout << "Selamat Anda mendapatkan Predikat Cum Laude" << endl;
    }
    if(totalIp < 3.50 && totalIp >= 3.0){
        cout << "Hasil IPS anda sangat Memuaskan" << endl;
    }
    if(totalIp < 3.0 && totalIp >= 2.76){
        cout << "Hasilnya memuaskan, SEMANGAT !!!" << endl;
    }
    if(totalIp < 2.76){
        cout << "TINGKATKAN LAGI YA BELAJARNYA" << endl;
    }
}
