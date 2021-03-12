#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int main(void){
    srand(time(NULL));

    int V[100], V2[100], i, n;

    cout<<"Dame n ";cin>>n;

    for(i=0;i<n;i++)
        V[i] = rand() % 100;

    ofstream AS("datos.txt");

    for(i=0;i<n;i++)
        AS<<V[i]<<endl;

    AS.close();



    ifstream AE("datos.txt");

    for(i=0;i<n;i++)
        AE>>V2[i];

    AE.close();

    for(i=0;i<n;i++)
        cout << "V2["<<i<<"] " << V2[i] << endl;

    return 0;
}
