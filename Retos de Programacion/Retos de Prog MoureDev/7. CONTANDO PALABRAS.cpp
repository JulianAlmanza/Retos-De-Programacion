/*
 * Crea un programa que cuente cuantas veces se repite cada palabra
 * y que muestre el recuento final de todas ellas.
 * - Los signos de puntuación no forman parte de la palabra.
 * - Una palabra es la misma aunque aparezca en mayúsculas y minúsculas.
 * - No se pueden utilizar funciones propias del lenguaje que
 *   lo resuelvan automáticamente.
 */
/* 
 #include <iostream>
 #include <string>
 #include <algorithm>
 #include <cctype>
 #include <map>
 
 using namespace std;
 

 int main(){
 	string frase = "Hola, mi nombre es brais. Mi nombre completo es Brais Moure (MoureDev).";
 	
	 transform(frase.begin(), frase.end(), frase.begin(), ::tolower);
	//frase.replace(frase.begin(),frase.end(),frase[],122;
	map <string,int> palabras;
	
	//palabras.insert(std::make_pair(strtok(frase, "," or " "),1));
	
	
 	cout << frase << endl;
 		
 */	

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int cont = 0;
    string s, t;
    map<string, int> m;
    
    
    string frase = "Hola, mi nombre es brais. Mi nombre completo es Brais Moure (MoureDev).";
    t = "";
    
    for (int j = 0; j < frase.size(); j++) {
        if (isalpha(frase[j])){
        	t += tolower(frase[j]);	
		} 
        else if (t != "") {
            cont = m[t];
            m[t] = cont + 1;
            t = "";
        }
    }
    
    if (t != "") {
        cont = m[t];
        m[t] = cont + 1;
    }

    
   for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}
