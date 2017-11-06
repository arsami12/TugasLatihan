#include <iostream>
using namespace std;

int main () {

int T, B ;

	cout << " Tinggi Badan Kamu (Cm) ? : "; cin >> T ;
	cout << " Berat  Badan Kamu (Kg) ? : "; cin >> B ;
	
if (B<T/2.5){
		system ("cls");
	cout <<""<<endl;	
	cout << "Tinggi Kamu : "<<T<<" Kg"<<endl;
	cout << "Berat  Kamu : "<<B<<" Cm"<<endl;
	cout <<""<<endl;
	cout << "Kamu Bagian Dari Underweight / !Kurus!"<<endl;
}
else if ((T/2.3)<B){
		system("cls");
	cout << ""<<endl;
	cout << "Tinggi Kamu : "<<T<<" Kg"<<endl;
	cout << "Berat  Kamu : "<<B<<" Cm"<<endl;
	cout <<""<<endl;
	cout << "Anda Bagian Dari Overweight / !Gemuk!"<<endl;
}
else if (T/2.5<=B<=T/2.3){
		system("cls");
	cout << ""<<endl;	
}

}
