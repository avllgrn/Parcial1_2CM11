#include <iostream>
using namespace std;

int main(void){

    string cadena, cadena2, cadena3;

    int i, n;

    cout<<"Ingresa una cadena ";
    getline(cin, cadena);
    cout<<"Ingresa otra cadena ";
    getline(cin, cadena2);

    cadena3.append(cadena);
    cadena3.append(cadena2);

    cout<<"Tu cadena: "<<cadena<<endl;
    cout<<"Tu cadena2: "<<cadena2<<endl;
    cout<<"cadena3  : "<<cadena3<<endl<<endl;

    return 0;
}
