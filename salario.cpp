#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    int horas_trabajadas = 0;
    int horas_extra = 0;
    float salario_real = 0;
    float salario_total = 0;
    float pag_hextra = 2.5;
    float pag_htrabajo = 1.75;  
	 
    string nombre;
    //impuesto sobre la renta es parte de un condicional
    
    bool flag = true;
    do{
        cout<<"ingrese el nombre del empleado"<<endl;
        cin>> nombre;
        cout<<"cuantas horas trabajo?"<<endl;
        cin>> horas_trabajadas;
        cout<< "cuantas horas extras trabajo?" << endl;
        cin>> horas_extra;
        
        salario_total = (horas_trabajadas)* (pag_htrabajo) +  (horas_extra) *(pag_hextra);
        
        float isss = (0.04)*(salario_total);
        float afp = (0.0625)*(salario_total);
        float renta = (0.1)*(salario_total);
        float descuento = isss + renta + afp;
        
        cout<< salario_total<<endl;
        if(salario_total > 500){
            salario_real = salario_total - descuento;
            cout<<"El salario total es = "<<salario_total<<endl;
            cout<<"El salario real es = " <<salario_real<<endl;
            
        }else{
            salario_real = salario_total - descuento;
            cout<<"El salario total es = "<<salario_total<<endl;
            cout<<"El salario real es = " <<salario_real<<endl;
        
        }
        
    
        
        }while(flag);
    
    
    
}
