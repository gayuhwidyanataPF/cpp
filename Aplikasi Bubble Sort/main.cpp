#include <iostream>

using namespace std;

void garis(){
    cout << "=======================================================================" << endl;
}

void judul(){
    cout << "=======================================================================" << endl;
    cout << "========================= Program Bubble Sort =========================" << endl;
    cout << "=======================================================================" << endl;
}

int main()
{
    judul(); cout << endl;

    // input jumlah data array
    int z;
    cout << "Masukan jumlah Data \t: ";
    cin >> z;
    // ***************************************************************************

    garis();
    // input masing masing data array dari jumlah yang sudah di tentukan di atas
    int a[z];
    for(int i = 0; i < z; i++){
        cout << "Masukan Angka Ke (" << i + 1 << ") \t: ";
        cin >> a[i];
    }
    cout << endl;
    cout << "X : { ";
    for(int j = 0; j < z; j++){
        cout << a[j] << " ";
    }
    cout << "}" << endl;
    // ***************************************************************************
    garis();

    // pemrosesan untuk melakukan sorting
    int temp;
    for(int i = 0; i < z; i++){
        int batas = 0;
        for(int j = 0; j < z-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                batas++;
            }
        }
        // jika salah satu tahap sudah selesai melakukan sorting maka di selesaikan
        if(batas == 0){
            break;
        }
        cout << endl;
        cout << "tahap " << i + 1 << " \t: ";
        for(int b = 0; b < z; b++){
            cout << a[b] << " ";
        }
    }
    // ***************************************************************************
    cout << endl;
    garis();

    // hasil final dari pemrosesan sorting
    cout << endl;
    cout << "Hasil Akhir \t: ";
    for(int x = 0; x < z; x++){
        cout << a[x] << " ";
    }

    cout << endl;
    return 0;
}
