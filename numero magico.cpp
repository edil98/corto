#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int numero, dato;
	srand(time(NULL));
	dato = 1 + rand()%(100);
	for(int i=0; i>=4; i+=1){
	     cout<<"digite un numero"; cin>>numero;
	    if(numero ==  dato){
	        	cout<<"felicidades adivinastes";
	            cout<<"numero de intentos"<<i<<endl;
            	system("pause");    
	    }
		else if(numero>dato){
			cout<<"digite un numero menor"<<endl;
		}
		else{
			cout<<"digite un numero mayor"<<endl;
		}
    
}
		return 0;
}
