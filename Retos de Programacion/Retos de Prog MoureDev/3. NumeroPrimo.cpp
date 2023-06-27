/*
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */
 
 #include <iostream>
 using namespace std;
 
 int main(){
 	int cont = 0;
 	for(int i=1;i<=100;i++){
 		for(int j=1;j<=i;j++){
 			if(i%j == 0){
 				cont = cont+1;		
			}
		 }
		if(cont == 2){
		 	cout << i << ",";
		}
		cont = 0;
	}
 	return 0;
 }
 

