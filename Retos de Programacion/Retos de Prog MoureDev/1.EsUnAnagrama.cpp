/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

#include <iostream>
#include <algorithm>
using namespace std;

bool anagramas(string a, string b){
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	return a == b;
}

int main(){
	
	string a , b;
	cin>> a >> b;
	if(a != b && anagramas(a,b)){
		cout <<"Son Anagramas" << endl;
	} else {
		cout << "No Son Anagramas" << endl;
	}
	
	return 0;
}
