#include<iostream>
using namespace std;
//ejericios de un taller
int main(){
int opc, cont=0,i=1;
float saldo = 0,dinero; 	
do{
cout<<"\tAHORROS JUANITO"<<endl;
cout<<"1- Depositar dinero"<<endl;
cout<<"2- Consultar dinero"<<endl;
cout<<"3- Salir"<<endl;
cout<<"Ingrese opcion: "; 
cin>>opc;

switch(opc){
	case 1:
   if(i==13){
     cout<<"SOLO EXISTEN 12 MESES, NO PUEDE DEPOSITAR MÁS:\n\n";
   }     
   else{
    cout<<"\nIngrese el monto ahorrado en el mes " << i <<": $"; 
    cin>> dinero;
    i=i+1;
		saldo = saldo + dinero;}    
   break;
     
	case 2: 
		 cout<<"Dinero ahorrado hasta ahora: " <<saldo<<"$"<< endl<<endl;
	break;			

	case 3: 
		 cout<<"Gracias";
  break;

  default: cout<<"No existe esa opcion.";   
	}
}while(opc!=3);
return 0;
}









/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  double sueldo, sueldo_final_1, sueldo_1,sueldo_2,sueldo_3,sueldo_final_2,sueldo_final_3;
  double Opcion_1= 0.10,Opcion_2=0.20,Opcion_3=0.50;
  cout<<"Ingrese el sueldo incial: \n";
  cin>>sueldo;
  cout<<"Categoria"<<"\t\t\t\t\t Sueldo\n";
  sueldo_1=sueldo*Opcion_1;
  sueldo_final_1=sueldo+sueldo_1;
  cout<<"1: 10% "<<"\t\t\t\t\t"<<"|"<<"\t\t\t"<<sueldo_final_1<<endl;
  sueldo_2=sueldo*Opcion_2;
  sueldo_final_2=sueldo+sueldo_2;
  cout<<"2: 20%"<<"\t\t\t\t\t"<<"|"<<"\t\t\t"<<sueldo_final_2<<endl;
  sueldo_3=sueldo*Opcion_3;
  sueldo_final_3=sueldo+sueldo_3;
   cout<<"3: 50%"<<"\t\t\t\t\t"<<"|"<<"\t\t\t"<<sueldo_final_3<<endl;
   cout<<"Su sueldo incial es de: "<<sueldo<<endl;
  cout<<"El sueldo final es de: "<<sueldo_final_3<<endl;
return 0;
}

*/






/*#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
double Hamburguesa_simple= 1.50, Hamburguesa_doble=2.50,Hamburguesa_triple=3.25;
  double Cargo_Tarjeta=0.05,Cargo_Hamburgesa;
  int Opcion, Cantidad,Pago;
  double Total_simple,Total_doble,Total_triple,Total;
  do{
  cout<<"1: Hamburguesa Simple\n";
  cout<<"2: Hamburguesa Doble\n";
  cout<<"3: Hamburguesa Triple\n";
  cout<<"Elije la Hamburguesa\n";
  cin>>Opcion;
  if (Opcion<=3 && Opcion>=1){
  switch (Opcion){
    case(1):
      cout<<"Ingrese la cantidad de Hamburguesa Simple\n";
      cin>>Cantidad;
      Total_simple=Hamburguesa_simple*Cantidad;
      cout<<"Ingrese 1 si se paga con tarjeta o 0 si se paga con efectivo\n";
      cin>>Pago;
      if (Pago==1){
          Cargo_Hamburgesa=Total_simple*Cargo_Tarjeta;
          Total=Total_simple+Cargo_Hamburgesa;
          cout<<"Su valor a pagar es: "<<setprecision(4)<<Total;
        }
      else if (Pago==0){
        cout<<"Su valor a pagar es: "<<setprecision(4)<<Total_simple;
        }
      break;
    case (2):
      cout<<"Ingrese la cantidad de Hamburguesa Doble\n";
      cin>>Cantidad;
      Total_doble=Hamburguesa_doble*Cantidad;
      cout<<"Ingrese 1 si se paga con tarjeta o 0 si se paga con efectivo\n";
      cin>>Pago;
      if (Pago==1){
        Cargo_Hamburgesa=Total_doble*Cargo_Tarjeta;
        Total=Total_doble+Cargo_Hamburgesa;
        cout<<"Su valor a pagar es: "<<setprecision(4)<<Total;
        }
      else if(Pago==0){
        cout<<"Su valor a pagar es: "<<setprecision(4)<<Total_doble;
      }
      break;
    case (3):
    cout<<"Ingrese la cantidad de Hamburguesa Triples\n";
    cin>>Cantidad;
    Total_triple=Hamburguesa_triple*Cantidad;
    cout<<"Ingrese 1 si se paga con tarjeta o 0 si se paga con efectivo\n";
      cin>>Pago;
      if (Pago==1){
        Cargo_Hamburgesa=Total_triple*Cargo_Tarjeta;
        Total=Total_triple+Cargo_Hamburgesa;
        cout<<"Su valor a pagar es: "<<setprecision(4)<<Total;
        }
      else if(Pago==0){
        cout<<"Su valor a pagar es: "<<setprecision(4)<<Total_triple;
      }
      break;
  }
}else{
  cout<<"Numero ingresado no valido vuelva a intentar \n";}
}while(Opcion >3);
return 0;
}
*/


/*#include <iostream>
using namespace std;
int potencia(int i, int j);

int main(){
cout<<potencia(3, 4);
return 0;
}
int potencia(int i, int j){
  return (j==0)? 1 : i * potencia(i, j-1);

}
*/