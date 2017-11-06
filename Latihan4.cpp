#include <iostream>
using namespace std;

int main () {

int B ;

	cout << "Angka Bilangan	: "; cin >> B ;
	
if (B>0){
		system("cls");
	cout << ""<<endl;
	cout << "Well... Angka Bilangannya Adalah '!POSITIF!' ( "<<B<<" )!!"<<endl;	
}
else if (B<0){
		system("cls");
	cout << ""<<endl;
	cout << "Hmmm... Angka Bilangannya Adalah '!NEGATIF!' ( "<<B<<" )!!"<<endl;
}
else if (B==0){
		system("cls");
		cout << ""<<endl;
		cout << "Yeah... Bilangannya Adalah '!SAMA NOL!' ( "<<B<<" )!!"<<endl;
}

}

