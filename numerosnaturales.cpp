/* 
 * File:   main.cpp
 * Author: nicogala
 *
 * Created on 23 de abril de 2017, 11:54
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num1,num2,i=1,ok=0;
    
    do{
    cout<< "ingrese un numero natural:";
    cin>>num1;
    if(num1>0){
        ok=1;
    cout<< "ingrese la cantidad de numeros naturales siguientes que desea:";
    cin>>num2;
    cout<<endl<<"numeros naturales siguientes:\n";
    for(i;i<=num2;i++)
    {
        cout<<num1+i<<" - "<<endl;
    }
    }else{
        cout<<"el numero ingresado no es natural. Vuelva a intentarlo."<<endl;
        ok=0;
    }
    }while(ok==0);
    system("cmd /c pause");
    return 0;
}

