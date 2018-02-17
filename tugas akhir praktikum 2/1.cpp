/* Perulangan For */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int bil1, bil2, bil3;
    cout<<"======================================"<<endl;
    cout<<"1. Menampilkan deret angka 0 sampai 10"<<endl;
    cout<<"======================================"<<endl<<endl;
    for(bil1=0; bil1<=10; bil1++)
    {
        cout<<bil1<<" ";
    }
    cout<<endl<<endl;
    cout<<"============================================"<<endl;
    cout<<"2. Menampilkan deret angka genap 2 sampai 10"<<endl;
    cout<<"============================================"<<endl<<endl;
    for(bil2=2; bil2<=10; bil2++)
    {
        bil2%2==0;
        cout<<bil2<<" ";
        bil2++;
    }
    cout<<endl<<endl;
    cout<<"============================================"<<endl;
    cout<<"3. Menampilkan deret angka ganjil 1 sampai 9"<<endl;
    cout<<"============================================"<<endl<<endl;
    for(bil3=0; bil3<10; bil3++)
    {
        bil3%2!=0;
        cout<<bil3+1<<" ";
        bil3++;
    }
    cout<<endl;
    getch();
}
