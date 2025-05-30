#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3,Ma;
	cout<<Ingrese el primer numero<<endl;
	cin>>num1;
	cout<<Ingrese el segundo numero<<endl;
	cin>>num2;
	cout<<Ingrese el tercer numero<<endl;
	cin>>num3;
	if(num1<num2){
		if(num2<num3){
			Ma=num3;
		}else{
			Ma=num2;
		}
	}else if(num1<num3){
		Ma=num3;
	}else{
		Ma=num1;
	}
	cout<<El numero mayor es: <<Ma<<endl;
	return 0;
}
