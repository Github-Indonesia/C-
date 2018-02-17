#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
void matriks(int acak)
{
    int baris1, kolom1, baris2, kolom2;
    cout<<"\nMatriks A"<<endl;
    cout<<"Masukkan baris = "; cin>>baris1;
    cout<<"Masukkan kolom = "; cin>>kolom1;
    int a[baris1][kolom1]; cout<<endl;
    for(int i=0; i<baris1; i++)
    {
        for(int j=0; j<kolom1; j++)
        {
            a[i][j]=1+rand()%acak;
            cout<<"Angka baris "<<i+1<<",kolom "<<j+1<<" = "<<a[i][j]<<endl;
        }
    }
    cout<<endl;
    for(int i=0; i<baris1; i++)
    {
        for(int j=0; j<kolom1; j++)
        {
            cout<<setw(8)<<a[i][j]; cout<<endl;
        }
    }
    baris2=kolom1;
    cout<<"\nMatriks B"<<endl;
    cout<<"Masukkan baris = "<<baris2<<" (baris matriks B akan menyesuaikan kolom matriks A)"<<endl;
    cout<<"Masukkan kolom = "; cin>>kolom2;
    int b[baris2][kolom2]; cout<<endl;
    for(int i=0; i<baris2; i++)
    {
        for(int j=0; j<kolom2; j++)
        {
            b[i][j]=1+rand()%acak;
            cout<<"Angka baris "<<i+1<<",kolom "<<j+1<<" = "<<b[i][j]<<endl;
        }
    }
    cout<<endl;
    for(int i=0; i<baris2; i++)
    {
        for(int j=0; j<kolom2; j++)
        {
            cout<<setw(8)<<b[i][j]; cout<<endl;
        }
    }
    int hasil[baris1][kolom2];
    cout<<"\nHasil Perkalian Matriks A & Matriks B"<<endl;
    for(int i=0; i<baris1; i++)
    {
        for(int j=0; j<kolom2; j++)
        {
            hasil[i][j];
            for(int k=0; k<baris2; k++)
            {
                hasil[i][j]+=a[i][k]*b[k][j];
            }
            cout<<setw(8)<<hasil[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int acak;
    char cobalagi;
    srand(time(NULL));
    do
    {
        system("cls");
        cout<<"Masukkan batas random angka = "; cin>>acak;
        matriks(acak);
        cout<<"Apakah anda ingin mengulanginya lagi? (Y/N)"<<endl;
        cin>>cobalagi;
    }
    while(cobalagi == 'Y');
        getch();
    return 0;
}
