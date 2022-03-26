#include <iostream>
using namespace std;

int main(){

	int jamkerja1,jamkerja2;
	long int bonus1,bonus2,gaji1,gaji2;
	cout<<"gaji developer perusahaan"<<endl;
	cout<<"Gaji tim 1 = 22 juta"<<endl;
	cout<<"Gaji tim 2 = 28 juta"<<endl;
	cout<<" Waktu pengerjaan TIM 1 (dalam bulan) : ";
	cin>>jamkerja1;

	if (jamkerja1==5){
		gaji1=22000000;
		bonus1=22000000*0.06;
		cout<<" Total Gaji Yang Anda Terima = "<<gaji1+bonus1<<endl;
	}

	else{
		gaji1=22000000;
		cout<<" Total Gaji Yang Anda Terima = "<<gaji1<<endl;
	}

	cout<<"waktu pengerjaan Tim 2 (dalam bulan) : ";
	cin>>jamkerja2;
	if(jamkerja2==5){
		gaji2=28000000;
		bonus2=28000000*0.06;
		cout<<" Total Gaji Yang Anda Terima = "<<gaji2+bonus2<<endl;
	}

	else{
		gaji2=28000000;
		cout<<" Total Gaji Yang Anda Terima = "<<gaji2<<endl;
	}

	return 0;
}
