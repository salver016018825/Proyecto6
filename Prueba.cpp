#include <iostream>
#include <cstring> //Importante agregar esta biblioteca para hacer uso de las funciones 
 
using namespace std;
 
int main () {
    
    //Declaramos las cadenas 
    char cadena1[3][12] = {"30/30/2019","19/20/2020","18/02/1990"};
    char cadena2[1][12] = {""};
    
    cout<<"enter date: ";
    for(int  i = 0; i < 1; i++)
    {
        cin>>cadena2[i];
    }
    int Equals;
    int bandera = 0;
    int index = 0;
    int index2 = 0;
    //Comparando cadenas con la función strncmp
    for (int  i = 0; i < 3 && bandera == 1; i++) {
        for(int  k = 0; k < 1; k++)
        {
            Equals = strcmp(cadena1[i],cadena2[k]);
            //cout<<"\ni = "<<i<<endl;
            if(Equals == 0)
            {
                //cout << "hay una fecha que coincide "<<cadena1[i] << "\t-> " << cadena2[k] <<endl;
                bandera = 1;
                index = i;
                index2 = k;
            }else
            {
                //cout << "NO hay una fecha que coincide "<<cadena1[i] << "\t-> " << cadena2[k] <<endl;
                bandera = 0;
            }
        }
    }

    if(bandera == 0)
    {
        cout << "NO hay una fecha que coincide "<<endl;
    }else
    {
        cout << "hay una fecha que coincide "<<cadena1[index] << "\t-> " << cadena2[index2] <<endl;
    }

        
    
    return 0;
}