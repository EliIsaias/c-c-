#include <bits/stdc++.h>

using namespace std;

string check(string palabra);

int main(){
    string palabra;
    cout << "Ingresa una palabra: " << endl;
    cin >> palabra;
    string rfinal;

    rfinal = check(palabra);
    cout << rfinal;

    return 0;
}
string check(string palabra){
    int aux = 0;
    int cont = 0;
    string respuesta;
    for (int i = palabra.size()-1; i >= 0; i--){
        if (palabra[i] == palabra[aux]){
            cont++;
        }
            aux++;
    }
    if(cont == 3){
        respuesta = "arbol";
    }else{
        respuesta = "casa";
    }

    return respuesta;
}
