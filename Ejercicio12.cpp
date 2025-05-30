#include<iostream>
using namespace std;
int main(){
	int x, gx;
	cout<<"_______________________"<<endl;
	cout<<"BIENVENIDO AL PROGRAMA"<<endl;
	cout<<"**********************"<<endl;
	cout<<"Digite le valor de x"<<endl;
	cin>>x;
	if(x>8){
		gx=2*x;
	}else if(x>0){
		gx=x-5;
	}else{
		gx=x*x;
	}
	cout<<"El valor de la funcion es: "<<gx<<endl;
	cout<<"__________________"<<endl;
	cout<<"PROGRAMA TERMINADO"<<endl;
	cout<<"******************"<<endl;
	return 0;
}
