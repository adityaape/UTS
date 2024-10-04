#include <iostream>
using namespace std;
int main ()
{
     int batas [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     cout << "\t Menampilkan Ganjil & Genap pada Data Array \n";
     cout << "\n Ganjil: ";
     for(int i = 0 ; i < 10; i++){
        if(batas[i]% 2!= 0){
            cout << batas [i] << ", ";
        }
     }
     cout << "\n Genap: ";
     for (int j = 0; j < 10; j++){
        if(batas[j] % 2 == 0){
            cout << batas[j] << ", ";
        }
     }
}
