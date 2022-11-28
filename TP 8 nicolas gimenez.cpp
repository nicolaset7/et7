/**  
 * Alumno:Nicolas Gimenez
 * Trabajo: tp8
* Fecha: 14/10/22
 */


#include<iostream>

using namespace std;

int main(){
	int i, j, a[10], aux;
	
	cout<<"Ingrese 10 numeros: "<<endl;
	
	for(i=0; i<10; i++){
		cin>>a[i];
	}
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
		if (a[i]> a[j]){
		//swap 
			aux = a[i];
			a[i]=a[j];
			a[j]=aux;}
			
		}
	}
	for(i=0; i<10; i++){
		cout<<"["<< i <<"]"<<a[i]<<endl;
	}
	
	
	
	
	
	return 0;
}
