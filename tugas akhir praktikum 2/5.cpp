/* program nomer 3 */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, tinggi;
    cout<<"Masukkan tinggi: ";
    cin>>tinggi;
    for(a=0; a<=tinggi; a++)
    {
        for(b=1; b<=a; b++)
        {
            cout<<(b+a)-1<<" ";
        }
        cout<<endl;
    }
    if(tinggi<=0)
    {
        cout<<"ERROR!!!";
    }
    cout<<endl;
    getch();
}
