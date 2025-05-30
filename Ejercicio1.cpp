#include<iostream>
using namespace std;
int main (){
	double C1,C2,C3,P;
	cout<<"Digite la primera calificacion del alumno"<<endl;
	cin>>C1;
	cout<<"Digite la segunda calificacion del alumno"<<endl;
	cin>>C2;
	cout<<"Digite la tercera calificacion del alumno"<<endl;
	cin>>C3;
	P=(C1+C2+C3)/3;
	if(P>=70){
		cout<<"El alumno aprueba con un promedio de: "<<P;
	} else{
		cout<<"El alumno reprueba con un promedio de: "<<P;
	}
	
	
	return 0;
}
