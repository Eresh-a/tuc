#include <iostream>
#include "abb.h"

using namespace std;

template <class T>
void imprimirABB(ABB<T> &arbol) {
    for (typename ABB<T>::iterator it = arbol.begin(); it != arbol.end(); ++it) {
        cout << *it << " ";
    }
    cout<< endl;
}

int main() {
    ABB<int> arbol;
    
    arbol.insertar(50);
    arbol.insertar(30);
    arbol.insertar(20);
    arbol.insertar(40);
    arbol.insertar(70);
    arbol.insertar(60);
    arbol.insertar(80);


    imprimirABB(arbol);

    cout << "Existe()" << endl;
    
    if (arbol.Existe(20)) 
        cout << "El valor 20 existe" << endl;
    else 
        cout << "El valor 20 no existe, pero deberia estar" << endl;

    if (arbol.Existe(100)) 
        cout << "El valor 100 existe" << endl;
    else 
        cout << "El valor 100 no existe y no deberia existir" << endl;
    cout << endl;

    cout << "Borrar 20" << endl;
    arbol.borrar(20);
    imprimirABB(arbol); 
    

    cout << "Borrar 70" << endl;
    arbol.borrar(70);
    imprimirABB(arbol);

    cout << "CopiarArbol()" << endl;
    ABB<int> copiaArbol(arbol);

    cout << "original: ";
    imprimirABB(arbol);

    cout << "copia: ";
    imprimirABB(copiaArbol);

    return 0;
}