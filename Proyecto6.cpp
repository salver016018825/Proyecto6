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
    char PeliName[20][70] = { "Matrix", "Stake land", "Dulce noviembre", "El reto", "La cabana en el bosque",     
                            "El Animatrix", "John Wick 2: Un nuevo dia para matar", "Constantine", "Matrix Reloaded", "Toy Story 4",   
                            "El observador", "John Wick 3: Parabellum", "Matrix Revoluciones", "Insidious 1", "Dulce noviembre",  
                            "La casa del lago", "Kill List", "Insidious", "El Abogado del Diablo",  "John Wick 1: Otro dia para matar"
                            };     

                          /*"Matrix",                 //1999 
                            "Stake land",             //2020
                            "Dulce noviembre",        //2001
                            "El reto",                //2003
                            "La cabana en el bosque"  //2011 ->5
                            "El Animatrix",           //2003  
                            "John Wick 2: Un nuevo dia para matar",//2017
                            "Constantine",            //2005  
                            "Matrix Reloaded",        //2003 
                            "Toy Story 4",            //2019  ->10
                            "El observador",          //2000                            
                            "John Wick 3: Parabellum",      //2019
                            "Matrix Revoluciones",          //2003                                 
                            "Insidious 1",                  //2010
                            "Dulce noviembre",              //2001 ->15
                            "La casa del lago",             //2006 
                            "Kill List",                    //2011
                            "Insidious",                    //2010  
                            "El Abogado del Diablo",        //1997
                            "John Wick 1: Otro dia para matar",    //2014      */                          

    int  FechaLanzamiento[20] = {1999,2020,2001,2003,2011
                                ,2003,2017,2005,2003,2019
                                ,2000,2019,2003,2010,2001
                                ,2006,2011,2010,1997,2014}; /*posiblemente se haga un parceo*/
    int opcion = 0;

    /*for(int i = 0; i < 20; i++)
    {
        cout<<i+1<<": "<<PeliName[i]<<"\t\t"<<FechaLanzamiento[i]<<endl;
    }*/

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
                    
                    //Se agrega algoritmo de burbuja
                    int  temp = 0;
                
                    for(int i = 0; i < 20; i++)
                    {
                       for(int j = 0; j < 20; j++)
                        {
                            if(FechaLanzamiento[j] > FechaLanzamiento[j+1])
                            {
                                temp = FechaLanzamiento[j];
                                FechaLanzamiento[j] = FechaLanzamiento[j+1];
                                FechaLanzamiento[j+1] = temp;
                            }
                        }
                    }
                    
                    cout<<"Peliculas antiguas a mas recientes"<<endl;
                    for(int i = 0; i <= 19; i++)
                   {
                        cout<<i+1<<" "<<FechaLanzamiento[i]<<endl;
                   }

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
