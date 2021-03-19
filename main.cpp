#include <iostream>
using namespace std;

int main(void){

    string cadena, busqueda;
    int i, n;

    cout<<"Ingresa una cadena ";
    getline(cin, cadena);
    cout<<"Ingresa cadena a buscar ";
    getline(cin, busqueda);
    n = cadena.size();
    for(i=0;i<n;i++){
        cout<<"["<<i<<"] = "<<cadena.at(i)<<endl;
    }

    cout<<cadena.find(busqueda)<<endl;
    cout<<cadena.find(' ')<<endl<<endl;

    cout<<cadena.rfind(busqueda)<<endl;
    cout<<cadena.rfind(' ')<<endl<<endl;

    return 0;
}
