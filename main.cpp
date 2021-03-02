#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
    printf("Hello world!\n\n\n\n\n");

    cout<< "Hello world!"
        << endl << 5
        << endl << "Una mas debajo\n\n\n\n"
        << "La ultima al lado de otra\n\n\n\n"
        << endl << endl << endl << endl ;

    system("pause");
    system("cls");


    int a = 5;
    float b = 6.7;
    char c='@';

    cout<< a<<endl
        << 3 <<endl
        << b <<endl
        << c
        << endl << endl << endl << endl ;

    cout<< "a="<<a<<endl
        << 3 <<endl
        << "b="<<b <<endl
        << "c="<<c
        << endl << endl << endl << endl ;

    system("pause");
    system("cls");

    cout<<"Dame un numero ";
    cin>>a;
    cout<<"Dame otro numero ";
    cin>>b;
    cout<<"Dame un simbolo ";
    cin>>c;

    cout<< "a="<<a<<endl
        << "b="<<b <<endl
        << "c="<<c <<endl;

    system("pause");
    system("cls");

    float temperatura;
    cout<<"Dame un entero, un char y un flotante ";
    cin>>a>>c>>temperatura;

    cout<< "a= " <<a <<endl
        << "c= " <<c <<endl
        << "b= " <<temperatura <<endl;

    system("pause");
    system("cls");

    char Vector[10];
    for(int i=0;i<10;i++){
        cout<< "Ingresa Vector["<<i<<"] ";
        cin>>Vector[i];
    }

    for(int j=0;j<10;j++){
        cout<< Vector[j]<<endl;
    }

    return 0;
}
