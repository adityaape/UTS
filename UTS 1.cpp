#include <iostream>
using namespace std;

int main ()
{
    string Nama, NPM;
    char hurufmutu;

    int Absen, Tugas, UTS, UAS, TotalNilai;
    cout << "Nama: ";
    cin >> Nama;

    cout << "NPM: ";
    cin  >> NPM;

    cout << "Absen: ";
    cin >> Absen;

    cout << "Tugas: ";
    cin >> Tugas;

    cout << "UTS; ";
    cin >> UTS;

    cout << "UAS: ";
    cin >> UAS;

    TotalNilai =(Absen * 0,1) + (Tugas * 0,2) + (UTS * 0,3) + (UAS * 0,4);
    if (TotalNilai >= 85){
        hurufmutu = 'A' << endl;
} else if (TotalNilai >= 80) {
       hurufmutu = 'B' << endl;
} else if (TotalNilai >= 75) {
        hurufmutu = 'C' << endl;
} else if (TotalNilai < 70){
        hurufmutu = 'D' << endl;
}
        cout << "Nama: " << endl;
        cout << "NPM: " << endl;
        cout << "Absen: " << endl;
        cout << "Tugas: " << endl;
        cout << "UTS: " << endl;
        cout << "UAS: " << endl;
    return 0;
}


