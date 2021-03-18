#include <iostream>
using namespace std;

int main(void){

    string origen, destino;
    int i, n;

    cout<<"Ingresa una cadena ";
    getline(cin, origen);
    n = origen.size();

    cout<<"Tu cadena: "<<origen<<endl;

    for(i=0;i<n;i++){
        destino.push_back(origen.at(i));
        cout<<"destino: "<<destino<<endl;
    }

    return 0;
}
