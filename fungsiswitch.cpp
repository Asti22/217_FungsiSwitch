#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputData()
{
    cout <<"Masukan bilangan pertama : ";
    cin >>bilangan1;
    cout <<"Masukan bilangan kedua : ";
    cin >> bilangan2;
}
int penjumlahan(int a, int b)
{
    return a + b;
}
int pengurangan(int a, int b)
{
    return a - b;
}
int perkalian(int a,int b)
{
    return a * b;
}
float pembagian(int a,int b)
{
    return a / b;
}

int main(){
    int pilihan;
    do
    {
        cout << "Kalkulator sederhana" << endl;
        cout << "======================" << endl;
        cout << "1. Penjumalahan" << endl;
        cout << "2. Pengurangan " << endl;
        cout << "3. Perkalian " << endl;
        cout << "4. Pembagian "<< endl;
        cout << "5. Keluar" <<endl;
        cout <<"================" << endl;
        cin >>pilihan;
        
        switch (pilihan)
        /* code */
    } while (/* condition */);
    
}

