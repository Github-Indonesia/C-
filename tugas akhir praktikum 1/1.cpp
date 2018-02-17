#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
float a, b, hasil1, hasil2, hasil3, hasil4;
int hasil5;
cout << "Masukkan inputan A : "; cin >> a;
cout << "Masukkan inputan B : "; cin >> b;
hasil1 = a+b;
hasil2 = a-b;
hasil3 = a*b;
hasil4 = a/b;
if((int)b !=0) hasil5 = (int)a % (int)b;
cout << "Hasil A + B = " << hasil1 << endl;
cout << "Hasil A - B = " << hasil2 << endl;
cout << "Hasil A * B = " << hasil3 << endl;
cout << "Hasil A / B = " << hasil4 << endl;
((int)b !=0) ? cout << "Hasil A % B = " << hasil5 :
cout << "Hasil A % B = inputan B tidak boleh bernilai 0";
getch();
return 0;
}
