#include<iostream>
using namespace std;
int main(){
	double Ca, D, Tp;
	cout<<"Ingrese la cantidad de dinero que gasto en productos"<<endl;
	cin>>Ca;
	if(Ca>=0){
	    if(Ca>1000){
		    D=Ca*0.20;
	    }else{
		    D=0;
	    }
	    Tp=Ca-D;
	    cout<<"El total a pagar es: "<<Tp<<endl;
	}else{
		cout<<"ERROR: Numero negativo detectado"<<endl;
	}
	return 0;
}
