#include <iostream>
using namespace std;

int main () {

int JK, Lembur, GTOT, GP, GB, UL, Jam, Pajak ;

	cout << "Lama Kerja Karyawan Seminggu 		  : "; cin >> JK ;
	cout << "Gaji Perjam Karyawan Terima Seminggu : "; cin >> GP ;

if (JK>40){
		system ("cls");
	Lembur = JK-40 ;	
	Jam = Lembur*1.5 ;
	UL = GP*Jam ;
	Pajak = UL*0.15;
	GTOT = GP-Pajak ;
	GB = GTOT-(JK*40)+((GP-40)*JK*1.5);
	
}

}
