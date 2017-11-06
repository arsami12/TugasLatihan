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
	
	cout << "Lama Kerja Karyawan Seminggu  : "<<JK<<" Jam"<<endl;
	cout << "Total Lembur Karyawan Sekitar : "<<Lembur<<" Jam dalam Seminggu"<<endl;
	cout << "Gaji Perjam Karyawan Terima Dalam Seminggu : Rp "<<GP<<endl;
	cout << "Upah Lembur Yang diterima Karyawan : Rp "<<UL<<endl;
	cout << "Pajak Yang Ditanggung Karyawan : Rp "<<Pajak<<endl;
	cout << "Gaji Bersih Yang diterima Karyawan : Rp "<<GB<<endl;
}

else {
		system ("cls") ;
	GTOT = GP*40 ;
	Pajak = GTOT*0.15;
	GB = GTOT-Pajak ;
	
	cout << "Lama Kerja Karyawan Seminggu : "<<JK<<"Jam"<<endl;
	cout << "Gaji Perjam Karyawan Terima Seminggu : Rp "<<GP<<endl;
	

}

}
