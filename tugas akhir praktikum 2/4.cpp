/* program nomer 2 */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int bil=1, n;
    char ulang;
    do
    {
    cout<<"Masukkan nilai n: ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        bil=bil+i;
        cout<<bil<<", ";
    }
    bil=1;
    if(n<=0)
    {
        cout<<"ERROR!!!";
    }
    cout<<endl<<endl;
    cout<<"Apakah anda ingin mengulangi lagi? (Y/N): ";
    cin>>ulang;
    cout<<endl;
    }
    while(ulang == 'Y');
    getch();
    return 0;
}
