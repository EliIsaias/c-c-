#include <bits/stdc++.h>

using namespace std;


int main(){
    int n = 0;
    cin >> n;
    bool flag = true;
    vector <int> v1(n);
    vector <int> v2(n);

    for (int i = 0; i < n; i++){
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++){
        cin >> v2[i];
    }

    for (int i = 0; i < n; i++){
        if (v1[i] <= v2[i]){
            flag = false;
            break;
        }
    }
    cout << flag << endl;
    return 0;
}

