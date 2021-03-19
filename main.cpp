#include <iostream>
using namespace std;

int main(void){

    string cadena, subcadena, subcadena2;
    int i, n, inicio, fin;

    cout<<"Ingresa una cadena ";
    getline(cin, cadena);
    n = cadena.size();
    for(i=0;i<n;i++){
        cout<<"["<<i<<"] = "<<cadena.at(i)<<endl;
    }

    cout<<"Dame inicio ";cin>>inicio;
    cout<<"Dame fin ";cin>>fin;
    subcadena.append(cadena.substr(inicio));
    subcadena2.append(cadena.substr(0,fin));

    cout<<"cadena    : "<<cadena<<endl;
    cout<<"subcadena : "<<subcadena<<endl;
    cout<<"subcadena2: "<<subcadena2<<endl;

    return 0;
}
