#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

class Punto{
private:
    double x;
    double y;
public:
    Punto(void){
        this->x = 0.0;
        this->y = 0.0;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    Punto(double x, double y){
        this->x = x;
        this->y = y;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    ~Punto(void){
        //cout << "Objeto destruido, this -> " << this << endl;
    };
    void pideleAlUsuarioTusDatos(void){
        cout<<"Dame mi x ";
        cin>>this->x;
        cout<<"Dame mi y ";
        cin>>this->y;
    };
    void muestraTusDatos(void){
        cout << "(" << this->x << ", " << this->y <<")";
    };
    void guardaTusDatos(ofstream& ASalida) {
        ASalida << "(" << this->x << ", " << this->y << ")" << endl;
    };
    void cargaTusDatos(ifstream& AEntrada) {
        char caracter;
        AEntrada >> caracter;//Se extrae del archivo un parentesis
        AEntrada >> this->x;//Se extrae del archivo mi coordenada x
        AEntrada >> caracter;//Se extrae del archivo una coma
        AEntrada >> this->y;//Se extrae del archivo mi coordenada y
        AEntrada >> caracter;//Se extrae del archivo un parentesis
    };
    double dameTuX(void){
        return this->x;
    };
    void modificaTuX(double x){
        this->x = x;
    };
    double dameTuY(void){
        return this->y;
    };
    void modificaTuY(double y){
        this->y = y;
    };
    void modificaTusDatos(double x, double y){
        this->x = x;
        this->y = y;
    };
};














void calculaCuadrante(Punto P);

int main(void){
    //Codifica un programa que pida las coordenadas de un punto
    //en un plano cartesiano, y diga en cual cuadrante esta
    //con una funcion de usuario
    Punto Q;

    cout<<"Ingresa Q "<<endl;
    Q.pideleAlUsuarioTusDatos();

    calculaCuadrante(Q);

    return 0;
}

void calculaCuadrante(Punto P){
    if(P.dameTuX()>0 && P.dameTuY()>0){
        cout<<"P esta en el cuadrante I"<<endl;
    }
    else if(P.dameTuX()<0 && P.dameTuY()>0){
        cout<<"P esta en el cuadrante II"<<endl;
    }
    else if(P.dameTuX()<0 && P.dameTuY()<0){
        cout<<"P esta en el cuadrante III"<<endl;
    }
    else if(P.dameTuX()>0 && P.dameTuY()<0){
        cout<<"P esta en el cuadrante IV"<<endl;
    }
    else if(P.dameTuX()>0 && P.dameTuY()==0){
        cout<<"P esta en X+"<<endl;
    }
    else if(P.dameTuX()<0 && P.dameTuY()==0){
        cout<<"P esta en X-"<<endl;
    }
    else if(P.dameTuX()==0 && P.dameTuY()>0){
        cout<<"P esta en Y+"<<endl;
    }
    else if(P.dameTuX()==0 && P.dameTuY()<0){
        cout<<"P esta en Y-"<<endl;
    }
    else{
        cout<<"P esta en el origen"<<endl;
    }
}
