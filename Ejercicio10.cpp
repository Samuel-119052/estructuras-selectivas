#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	int A;
	cout<<"Ingrese un año"<<endl;
	cin>>A;
	if(A>=0){
		if(A%4==0){
		    if(A%100==0){
			    if(A%400==0){
				    cout<<"Es un año bisiesto"<<endl;
			    }else{
				    cout<<"No es un año bisiesto"<<endl;
			    }
		    }else{
			    cout<<"Es un año bisiesto"<<endl;
		    }
	    }else{
		    cout<<"No es un año bisiesto"<<endl;
	    }
	}else{
		cout<<"Error: Numero negativo detectado"<<endl;
	}
	return 0;
}
