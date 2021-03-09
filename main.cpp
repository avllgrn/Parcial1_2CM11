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














int calculaCuadrante(Punto P);
double calculaDistanciaEntre(Punto A,Punto B);
double calculaPendienteDados(Punto A,Punto B);
Punto suma(Punto A,Punto B);
Punto resta(Punto A,Punto B);

int main(void){
    Punto P, Q, C, D;
    double d, m;

    cout<<"Ingresa A "<<endl;
    P.pideleAlUsuarioTusDatos();
    cout<<"Ingresa B "<<endl;
    Q.pideleAlUsuarioTusDatos();

    d = calculaDistanciaEntre(P,Q);
    m = calculaPendienteDados(P,Q);

    C = suma(P,Q);
    D = resta(P,Q);

    cout<<"d = " << d << endl
        <<"m = " << m << endl;
    cout<<"A+B = ";C.muestraTusDatos();cout<<endl;
    cout<<"A-B = ";D.muestraTusDatos();cout<<endl;

    return 0;
}

double calculaDistanciaEntre(Punto A,Punto B){
    return sqrt(
                pow(B.dameTuY()-A.dameTuY(),2)
                +
                pow(B.dameTuX()-A.dameTuX(),2)
    );
}
double calculaPendienteDados(Punto A,Punto B){
    return  (B.dameTuY()-A.dameTuY())
            /
            (B.dameTuX()-A.dameTuX());
}
Punto suma(Punto A,Punto B){
    Punto C;
    C.modificaTuX(A.dameTuX()+B.dameTuX());
    C.modificaTuY(A.dameTuY()+B.dameTuY());
    return C;
}
Punto resta(Punto A,Punto B){
    Punto C;
    C.modificaTuX(A.dameTuX()-B.dameTuX());
    C.modificaTuY(A.dameTuY()-B.dameTuY());
    return C;
}
int calculaCuadrante(Punto P){
    if(P.dameTuX()>0 && P.dameTuY()>0){
        return 1;
    }
    else if(P.dameTuX()<0 && P.dameTuY()>0){
        return 2;
    }
    else if(P.dameTuX()<0 && P.dameTuY()<0){
        return 3;
    }
    else if(P.dameTuX()>0 && P.dameTuY()<0){
        return 4;
    }
    else if(P.dameTuX()>0 && P.dameTuY()==0){
        return 5;
    }
    else if(P.dameTuX()<0 && P.dameTuY()==0){
        return 6;
    }
    else if(P.dameTuX()==0 && P.dameTuY()>0){
        return 7;
    }
    else if(P.dameTuX()==0 && P.dameTuY()<0){
        return 8;
    }
    else{
        return 0;
    }
}
