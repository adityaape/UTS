#include <iostream>
using namespace std;

double bmi(doule berat, double tinggi)
int main()
{
    double berat, tinggi, bmi;
    cout << "Berat badan (kg):";
    cin >> berat;
    cout << " Tinggi badan (cm);";
    cin >> tinggi;
    tinggi = tinggi / 100;

    bmi = berat / (tinggi * tinggi);
    cout << "BMI Anda: " << bmi << endl;

}
