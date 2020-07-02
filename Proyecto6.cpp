/*Crea un programa en C++ que haga lo siguiente:
1.- Permitir guardar 20 registros en una matriz; Nombre de película y año de lanzamiento.
2.- Un menú que nos va a dar tres opciones:
>> a) Mostrar películas desde las más viejas a las más nuevas.
>> b) Mostrar películas desde las más nuevas a las más viejas.
>> c) Mostrar películas de un año en concreto.
3.- Opción de regresar al menú o salir del programa.
Utiliza solo lo aprendido en los módulos anteriores.*/
 
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char fechas[3][30]={};
	char nombres[3][30]={};
	char final[3][30]={};
	int aux, aux1, num;
	char opcion, seguir;
	
	//ingresar los años de las peliculas y los nombres;
	cout<<"Ingrese el numero de peliculas que quiere registrar: ";
	cin>>num;
	cout<<endl;
	for(int i=0;i<num;i++){
		cout<<"Ingrese el año de la pelicula: ";
		cin>>fechas[i];
		strcpy(final[i],fechas[i]);
		strcat(final[i]," ");
		cout<<"Ingrese los datos de la pelicula: ";
		cin.ignore();
		cin.get(nombres[i],20);
		strcat(final[i],nombres[i]);
	}
		
	do{
		cout<<"------------------------------\na: peliculas por años"<<endl;
		cout<<"b: peliculas por titulo"<<endl;
		cout<<"c: pelicula de un año"<<endl;
		cout<<"ingrese una opcion: ";
		cin>>opcion;
		switch(opcion){
			case 'a': 
				cout<<"peliculas por años"<<endl;
				cout<<"Peliculas: "<<endl;
				for(int i=0;i<num;i++)
				{
					cout<<""<<final[i]<<endl;
				}
				
			break;
			case 'b': 
				cout<<"peliculas por titulo"<<endl;
				cout<<"Peliculas: "<<endl;
				for(int i=0;i<num;i++)
				{
					cout<<"\t"<<nombres[i]<<endl;
				}
				
				break;
			
			case 'c': cout<<"peliculas de un año"<<endl;
				char MyDate[1][30] = {""};
				cout<<"enter date: ";
				for(int  i = 0; i < 1; i++)
				{
					cin>>MyDate[i];
				}
				int Equals;
				int bandera = 0;
				int index = 0;
				int index2 = 0;
				for (int  i = 0; i < num ; i++)
				{
        			for(int  k = 0; k < 1 && bandera != 1; k++)
        			{
						Equals = strcmp(fechas[i],MyDate[k]);
						if(Equals == 0)
						{
							bandera = 1;
							index = i;
							index2 = k;
						}else
						{
							bandera = 0;
						}
					}
    			}

				if(bandera == 0)
				{
					cout << "NO hay registro de ese anio "<<endl;
				}else
				{
					cout <<"\tInfo Pelicula\n " << final[index] <<endl;
				}			
				
			break;
		}
		cout<<endl<<endl;
		cout<<"desea seguir: ";
		cin>>seguir;
		
	}while(seguir!='N'&& seguir!='n');
	cout<<endl;
	cout<<"Gracias por usar nuestro servicio"<<endl;

	
	return 0;
}