#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<string> arreglo;


    arreglo.insertar_final("Daniel");
    arreglo.insertar_final("Michel");
    arreglo.insertar_final("Neri");
    arreglo.insertar_final("Gutierrez");
    
    arreglo.insertar_inicio("Lechuga");
    arreglo.insertar_inicio("Huthoff");
    arreglo.insertar_inicio("Janeth");
    arreglo.insertar_inicio("Katia");
    
    arreglo.insertar("ELEMENTO", 2);
    
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    
    for(size_t i = 0; i < arreglo.size(); i++){
        cout << string(arreglo[i]) << " ";
    }
    cout << endl;



    return 0;
}