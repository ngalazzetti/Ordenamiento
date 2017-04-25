#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
 {
    system("cmd /c color 16");
    int n=0,ok=0,numeros=0,nega=0,negaprome=0,posi=0;
    float posiprome=0;
    int men,may,pre;
    do{
    cout<<"Ingrese un valor que no sea 0:";
    cin>>n;
    if(n==0){
        cout<<"El valor no puede ser 0. intentelo de nuevo"<<endl;
        system("cmd /c pause");
        system("cmd /c cls");
        ok=1;
    }else{
        if(numeros==1){men=n;may=n;}
        else {
            if(men>n)men=n; 
            else if(may<n)may=n;
        }      
        
        if(n>0){
            posi++;
            numeros++;
        }else{
            nega++;
            numeros++;
        }
        
        do{
        //system("cmd c/ cls");
        cout<<"¿Desea agregar otro numero?(0=no 1=si): ";
        cin>>pre; 
        if(pre==1)ok=1; 
        else if(pre==0)ok=0;
        else cout<<"Incorrecto.";//system("cmd c/ cls");
        }while(pre!=1 && pre!=0);
        }
    }while(ok==1);
    system("cmd /c cls");
    cout<<"Ingresaste "<<numeros<<" numeros."<<endl;
    cout<<"El mayor: "<<may<<endl;
    cout<<"El menor: "<<men<<endl;
    cout<<"La cantidad de positivos: "<<posi<<endl;
    cout<<"La cantidad de negativos: "<<nega<<endl;
    cout<<"Promedio de positivos: "<<"%"<<posi*100/numeros<<endl;
    cout<<"Promedio de negativos: "<<"%"<<nega*100/numeros<<endl;
    
    system("cmd /c pause");
    return 0;
}