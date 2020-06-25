/*Azul Web acaba de sacar una nueva plataforma de video, donde se van a publicar películas. Las películas tiene los siguientes atributos; Nombre de la película y Fecha de lanzamiento.

Crea un programa en C++ que haga lo siguiente:

1.- Permitir guardar 20 registros en una matriz; Nombre de película y año de lanzamiento.

2.- Un menú que nos va a dar tres opciones:

>> a) Mostrar películas desde las más viejas a las más nuevas.

>> b) Mostrar películas desde las más nuevas a las más viejas.

>> c) Mostrar películas de un año en concreto.

3.- Opción de regresar al menú o salir del programa.*/

#include<iostream>

using namespace std;

int main()
{
    char PeliName[20][100] = {"El Abogado del Diablo","Matrix","El observador","Dulce noviembre","El reto",
                            "Matrix Reloaded","El Animatrix","Matrix Revoluciones","Constantine","La casa del lago",
                            "Toy Story 4","John Wick 1: Otro día para matar","John Wick 2: Un nuevo día para matar","John Wick 3: Parabellum","Insidious",
                            "Insidious","The Crazies","Stake land","Kill List","La cabaña en el bosque"};
                            
    char FechaLanzamiento[20][10] = {};
    int opcion = 0;

    do{
        cout<<"\tMenu principal"<<endl;
        cout<<"1. Mostrar peliculas desde las mas viejas a las mas nuevas"<<endl;
        cout<<"2. Mostrar peliculas desde las mas nuevas a las mas viejas"<<endl;
        cout<<"3. Mostrar peliculas de un anio en concreto"<<endl;
        cout<<"4. Salir"<<endl;
        cin>> opcion;
        switch (opcion)
        {
            case 1:
                do{
                    opcion = 0;
                    cout<<"pulse 1 para regresar al menu principal"<<endl;
                    cin >> opcion;
                }while(opcion != 1);
            break;
            
            case 2 :
                do{
                    opcion = 0;
                    cout<<"pulse 1 para regresar al menu principal"<<endl;
                    cin >> opcion;
                }while(opcion != 1);
                break;

            case 3:
                do{
                    opcion = 0;
                    cout<<"pulse 1 para regresar al menu principal"<<endl;
                    cin >> opcion;
                }while(opcion != 1);
            break;
        }
    }while ( opcion != 4);

    return 0;
}
