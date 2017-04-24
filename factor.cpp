/* 
 * File:   main.cpp
 * Author: Nicolas Galazzetti
 *
 * Created on 24 de abril de 2017, 14:54
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num1,i=1,ok=0;
    int parcial=1;
    do{
    cout<< "Ingrese el numero para calcular el factorial:";
    cin>>num1;
    if(num1>0){
        ok=1;
    cout<< "El factorial es:\n";
    
    for(i;i<=num1;i++)
    {
        parcial=parcial*i;
        if(i!=num1){
           cout<<i<<"x";
        }else{
            cout<<i;
        }
        
    }
    cout<<endl<<"El resultado es:"<<parcial<<endl;
    }else{
        cout<<"el numero ingresado no es natural. Vuelva a intentarlo."<<endl;
        ok=0;
    }
    }while(ok==0);
    system("cmd /c pause");
    return 0;
}

