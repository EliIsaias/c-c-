#include <bits/stdc++.h>

using namespace std;

bool compararSecuencias(vector <int>v1, vector<int> v2);

int main(){
    int n = 0;
    cin >> n;

    vector <int> v1(n);
    vector <int> v2(n);

    for (int i = 0; i < n; i++){
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++){
        cin >> v2[i];
    }

    bool respuesta = compararSecuencias(v1, v2);
    cout << respuesta;
    return 0;
}

bool compararSecuencias(vector <int>v1, vector<int> v2){
    bool flag = true;
    for (int i = 0; i < v1.size(); i++){
        if (v1[i] <= v2[i]){
            flag = false;
            break;
        }
    }
    return flag;
}
