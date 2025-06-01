#include<iostream>
using namespace std;
int main(){
	double P,Pe,IGV,D,Pa;
	cout<<"PROGRAMA INICIADO"<<endl;
	cout<<"*****************"<<endl;
	cout<<"Digite al pension educativa"<<endl;
	cin>>Pe;
	cout<<"Digite el promedio del alumno"<<endl;
	cin>>P;
	if(P>=18){
		D=Pe*0.30;
	}else{
		IGV=Pe*0.18;
	}
	Pa=(Pe-D)+IGV;
	cout<<"El alumno debera pagar el total de: "<<Pa<<endl;
	cout<<"___________________"<<endl;
	cout<<"PROGRAMA FINALIZADO"<<endl;
	return 0;
}
