/* 
 * File:   ordenamiento.cpp
 * Author: Nicolás Galazzetti
 *
 * Created on 22 de abril de 2017, 16:27
 */
#include <stdlib.h> 
#include <iostream> 
using namespace std; 

void ordenar(int array[]){ 
   int temporal; 
   for(int i=0;i<=9;i++) 
   {
         for(int p=0;p<=9-1;p++){ 
         if(array[p]>array[p+1]){
            temporal=array[p]; 
            array[p]=array[p+1]; 
            array[p+1]=temporal;} 
         }
   }
   for(int i=0;i<=9;i++) {cout<<array[i]<<" - "; }
   } 


int main(int argc, char** argv) { 

        int numero; 
        int arrayN[10]; 
        for(int i=0;i<=9;i++){ 
            
            cout<<"Ingresa el numero "<<i+1<<": "; 
                cin>>numero; 
                if(numero>=0){
                    arrayN[i]=numero; 
                }else{cout<<"\nNo se puede ingresar negativos ni letras.\n";i--;};
                           
            } 
            //system("cmd /c cls"); 
            cout<<"Numeros ordenados: "<<endl; 
            ordenar(arrayN); 
            cout<<endl; 
            int a;
            cout<<"ingrese 0 para salir:";
            cin>>a;
            
        } 
        
  