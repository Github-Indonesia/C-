#include <iostream>
#include <conio.h>
using namespace std;
int faktorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*faktorial(n-1);
}
int main()
{
    int n, b, total, permutasi, hasil, kombinasi, temp;
    cout<<"Masukkan nilai N = "; cin>>n;
    cout<<"Masukkan nilai B = "; cin>>b;
    total=faktorial(n);
    temp=n-b; cout<<endl;
    permutasi=faktorial(n)/faktorial(temp);
    kombinasi=faktorial(n)/faktorial(b)*faktorial(temp);
    cout<<"Permutasi = "<<permutasi<<endl;
    cout<<"Kombinasi = "<<kombinasi<<endl;
    return 0;
}
