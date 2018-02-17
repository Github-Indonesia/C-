#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>
using namespace std;
float inputan;
int ratusan = 0, puluhan = 0, satuan = 0, ribuan = 0, koma = 0, remake = 0;
string terbilang[10] = {"", "se", "dua ", "tiga ", "empat ", "lima ", "enam ", "tujuh ", "delapan ", "sembilan "};
string stn;
int main()
{
	cout << "Masukkan Bilangan = "; cin >> inputan;
	remake = inputan;

	if (inputan > 1000 || inputan < -1000){
		cout << "Maaf, inputan harus kurang dari 1000" << endl;
	}
	else
	{
		koma = (floor((inputan-remake) * 1000 + 0.1) / 1000) * 1000;
		ribuan = remake / 1000;
		remake = remake % 1000;
		ratusan = remake / 100;
		remake = remake % 100;
		puluhan = remake / 10;
		remake = remake % 10;
		satuan = remake % 10;
		if (ribuan){
			stn += terbilang[ribuan] + "ribu ";
		}
		if (ratusan){
			stn += terbilang[ratusan] + "ratus ";
		}
		if (puluhan && (remake >= 20 || remake == 10)){
			stn += terbilang[puluhan] + "puluh ";
		}
		if (satuan && puluhan == 1){
			terbilang[1] = "se";
			stn += terbilang[satuan] + "belas ";
		} else if (satuan) {
			terbilang[1] = "satu";
			stn += terbilang[satuan];
		}
		if (koma){
			puluhan = 0, satuan = 0, remake = 0;

			stn += "koma ";
			remake = koma / 10;

            puluhan = remake / 10;
            remake = remake % 10;
            satuan = remake;
			if (puluhan)
				stn += terbilang[puluhan] + "puluh ";
            stn += terbilang[satuan];
		}
		if (inputan < 0){
			cout << " inputan tidak boleh minus ";
		} else {
			cout << inputan << " Terbilang : " << stn;
		}
	}
	getch();
	return 0;
}
