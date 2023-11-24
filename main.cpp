/*
    Sviluppatore: enxssj
    Github: https://github.com/enxssj/
    Programma C++ per calcolare la somma tra due numeri e determinare numero maggiore e numero minore
*/

#include <iostream>

using namespace std;

int main()
{
    int n1,n2,nmax,nmin;
    cout << "Inserisci il valore del primo numero:" << endl;
    cin>>n1;
    cout << "Inserisci il valore del secondo numero:" << endl;
    cin>>n2;

    if (n1>n2) {
        nmax = n1;
        nmin = n2;
    } else {
        nmax = n2;
        nmin = n1;
    }



    cout<<"La somma tra il primo numero e il secondo è: "<<n1+n2<<endl;
    cout<<"Il numero maggiore è: "<<nmax<<endl;
    cout<<"Il numero minore è: "<<nmin<<endl;
    return 0;
}
