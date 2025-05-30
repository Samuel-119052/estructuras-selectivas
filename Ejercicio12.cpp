#include<iostream>
using namespace std;
int main(){
	int x, gx;
	cout<<Digite le valor de x<<endl;
	cin>>x;
	if(x>8){
		gx=2*x;
	}else if(x>0){
		gx=x-5;
	}else{
		gx=x*x;
	}
	cout<<El valor de la funcion es: <<gx<<endl;
	return 0;
}
