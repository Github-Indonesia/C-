#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int jumlah, i, temp;
    srand(time(NULL));
    cout<<"Masukkan jumlah data: ";
    cin>>jumlah;
    int data[jumlah];
    for(i=0; i<jumlah; i++)
    {
        data[i]=(rand()%50)*2+1;
    }
    cout<<"Kondisi data awal: ";
    for(i=0; i<jumlah; i++)
    {
        cout<<data[i]<<", ";
    }
    cout<<endl;
    for(i=0; i<jumlah; i++)
    {
        for(int j=i+1; j<jumlah; j++)
        {
            if(data[i]>data[j])
            {
               temp=data[j];
               data[j]=data[i];
               data[i]=temp;
            }
        }
    }
    cout<<"Kondisi setelah diurutkan data: ";
    for(i=0; i<jumlah; i++)
    {
        cout<<data[i]<<", ";
    }
    cout<<endl;
}
