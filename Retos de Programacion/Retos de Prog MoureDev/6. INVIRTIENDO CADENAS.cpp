/*
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de forma automática.
 * - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"
 */
 
 #include <iostream>
 #include <string>
 #include <vector>
 
 using namespace std;
 
 string reverse(string texto){
 	int contadorTexto = texto.size();
 	string reversedTexto = "";
 	
	 for(int i = 0;i<=contadorTexto;i++){
 		reversedTexto += texto[contadorTexto - i];
	 }
 	return reversedTexto;
 }
 
 string recursivoReverse(string texto, int i = 0, string reversedTexto = ""){
	int contadorTexto = texto.size();
	string newReversedTexto = reversedTexto;
	newReversedTexto += texto[contadorTexto - i];
	
 	if(i<contadorTexto){
 		int newi = i + 1;
 		newReversedTexto = recursivoReverse(texto,newi,newReversedTexto);
	 }
 	
 	return newReversedTexto;
 }
 
 int main(){
 	
 	string cadena = "Hola Mundo";
 	
 	cout << "Normal: " << cadena << endl;
 	
 	string invertirCade(cadena.rbegin(), cadena.rend());
 	
 	cout << "Invertido: " << invertirCade << endl;
 	
 	cout << "reverse " << reverse(cadena) << endl;
 	
 	cout << "recursivoReverse " <<recursivoReverse(cadena) << endl;
 	
 	return 0;
 }
