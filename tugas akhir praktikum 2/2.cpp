/* Perulangan Do While */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int bil1=0, bil2=0, bil3=0;
    cout<<"======================================"<<endl;
    cout<<"1. Menampilkan deret angka 0 sampai 10"<<endl;
    cout<<"======================================"<<endl<<endl;
    do
    {
        cout<<bil1<<" ";
        bil1++;
    }
    while(bil1<=10);
    cout<<endl<<endl;
    cout<<"============================================"<<endl;
    cout<<"2. Menampilkan deret angka genap 2 sampai 10"<<endl;
    cout<<"============================================"<<endl<<endl;
    do
    {
        bil2=bil2+2;
        cout<<bil2<<" ";
    }
    while(bil2<=8);
    cout<<endl<<endl;
    cout<<"============================================"<<endl;
    cout<<"3. Menampilkan deret angka ganjil 1 sampai 9"<<endl;
    cout<<"============================================"<<endl<<endl;
    do
    {
        bil3=bil3+1;
        cout<<bil3<<" ";
        bil3++;
    }
    while(bil3<=9);
    cout<<endl;
    getch();
}
