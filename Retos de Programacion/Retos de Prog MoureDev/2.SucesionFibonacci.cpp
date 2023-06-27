/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */
 
 #include <iostream>
 
 using namespace std;
 
 int main(){
 	
 	long long n1=0,n2=1,r;
 		cout << n1 << ",";
 	for(int i=0;i<50;i++){
 		r = n1 + n2;
 		cout << r <<",";	
 		n2 = n1;
 		n1 = r;
	}
 	
 	return 0;
 }
