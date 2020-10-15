/* 
 * File:   main.cpp
 * Author: Andrei
 * But : illustrer la compilation séparée et l'instanciation des templates.
 * Created on 6. mars 2019, 08:34
 */

#include <cstdlib>
#include <iostream>
#include <typeinfo>
#include "minimum.h"
#include "maximum.h"

using namespace std;

template int maximum<int>(int, int); 
// on peut combiner une initialisation
// explicite (ici à 'int') et implicite (plus bas à 'float')

// template float minimum<float>(float, float); // impossible

int main() {
    {
        int a = 3; // 'int' est le seul type accepté ici
        int b = 2; // 'minimum<float>' n'aide pas, car la déf. est dans .cpp
        cout << "Minimum entre les variables a et b : " << minimum(a, b)
                << " de type : " << typeid (minimum(a, b)).name() << endl;
    }
    
    {
        float a = 3.f;
        float b = 2.f;
        cout << "Maximum entre les variables a et b : " << maximum(a, b)
                << " de type : " << typeid (maximum(a, b)).name() << endl;
    }

    {
        char a = 'H';
        int b = 'G';  // warning à la compilation mais possible grâce à 
                      // l'initialisation explicite du template avec un type
        cout << "Maximum entre a et b : " << maximum<char>(a, b)
                << " de type : " << typeid (maximum<char>(a, b)).name() << endl;
    }

    return EXIT_SUCCESS;
}
