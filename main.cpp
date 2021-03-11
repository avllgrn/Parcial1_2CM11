#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream ArchivoDeSalida("prueba.txt");
    ArchivoDeSalida<<"Hola,\nmundo!"<<endl
                   <<"Mas lineas"<<endl
                   <<32<<endl
                   <<123.456<<endl
                   <<'@'<<endl<<endl;

    float a, b, c;
    cout<<"Dame a ";cin>>a;
    cout<<"Dame b ";cin>>b;
    c=a+b;
    cout<<a<<" + "<<b<<" = "<<c<<endl;
    ArchivoDeSalida<<a<<" + "<<b<<" = "<<c<<endl;


    ArchivoDeSalida.close();
    return 0;
}
