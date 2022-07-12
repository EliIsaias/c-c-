#include <bits/stdc++.h>

using namespace std;
// Ejercicio: Dados 7 int, imprime en pantalla el numero mas grande y el mas pequeño.


int mayor(vector<int> array);
int menor(vector<int> array);

int main(){
    vector <int> array(7);
    cout << "Ingresa 7 numeros enteros: " << endl;

    for (int i = 0; i < 7; i++){
        cin >> array[i];
    }

    int ma = 0;
    ma = mayor(array);

    int me = 0;
    me = menor(array);

    cout << "El numero mayor es: " << ma << endl;
    cout << "El numero menor es: " << me << endl;
    return 0;
}

int mayor(vector<int> array){
    int nma = 0;
    for(int i = 0; i < 7; i++){
        if (array[i] > nma){
            nma = array[i];
        }
    }
    return nma;
}

int menor(vector<int> array){
    int nme = array[0];
    for(int i = 0; i < 7; i++){
        if (array[i] < nme){
            nme = array[i];
        }
    }
    return nme;
}

