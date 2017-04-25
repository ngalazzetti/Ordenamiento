#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
 {
    system("cmd /c color 16");
    int b,p,resul=1,i=0;
    cout<<"introdisca el valor de base:";
    cin>>b;
    cout<<endl;
    cout<<"introdisca el valor de potenciación:";
    cin>>p;
    cout<<endl;
    for (i;i<p;i++)
    {
        resul=resul*b;
    }
   cout<<"el  resultado de la potenciación es:"<<resul<<endl;
 
    system("cmd /c pause");
    return 0;
}