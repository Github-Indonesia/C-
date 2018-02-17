#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int total, harga, pcs;

cout << "Berapa pcs barang yang dibeli? ";
cin >> pcs;
cout << "Berapa harga satuan barang? ";
cin >> harga;
total=harga*pcs;
cout << "Total yang harus dibayar = ";
cout << total;
getch();
}
