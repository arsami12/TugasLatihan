#include <iostream>
using namespace std;

int main () {

char Option, P, S ;
int Al, Pa, Le, Ti, L ;

	cout << "P : Persegi Panjang"<<endl ;
	cout << "S : Segitiga"<<endl ;
	cout << "Luas Hitung P atau S ? "; cin >> Option;
	
	if (Option=='P'){
		system ("cls");
	cout << "Hitung Luas Persegi Panjang"<<endl ;
	cout <<""<<endl;
	cout << "Berapa Panjang Persegi Panjangnya ? "; cin >> Pa ;
	cout << "Berapa Lebar Persegi Panjangnya   ? "; cin >> Le ;
		L = Pa*Le ;
	cout << "Hasilnya Luas Persegi Panjang Adalah : "<< L ;
}

	else if (Option=='S'){
		system ("cls");
	cout << "Hitung Luas Segitiga"<<endl ;
	cout <<""<<endl;
	cout << "Hitung Alas Segitiganya ? "; cin >> Al ;
	cout << "Berapa Tinggi Segitiganya ? "; cin >> Ti ;
		L = 0.5*Al*Ti ;
	cout << "Hasilnya Luas Segitiga Adalah : "<< L ;		

}

}
