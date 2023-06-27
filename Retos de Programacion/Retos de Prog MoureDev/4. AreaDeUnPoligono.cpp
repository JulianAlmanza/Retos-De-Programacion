/*
 * Crea una �nica funci�n (importante que s�lo sea una) que sea capaz
 * de calcular y retornar el �rea de un pol�gono.
 * - La funci�n recibir� por par�metro s�lo UN pol�gono a la vez.
 * - Los pol�gonos soportados ser�n Tri�ngulo, Cuadrado y Rect�ngulo.
 * - Imprime el c�lculo del �rea de un pol�gono de cada tipo.
 */
 #include <iostream>
 #include <math.h>
 using namespace std;
 
 double poligono(int a){
 	int i = 1;
 	double area, x=0, y=0, xi, yi;
 	double copia_x, copia_y;
 	double suma1, suma2;
	while(i<=a){
		
		xi = x;
		yi = y;
		
		cout<< "Ingrese el punto (" << i <<") (X,Y): "<< endl;
		cin>> x;
		cin>> y;
		
		if(i==1){
			copia_x = x;
			copia_y = y;
		}else{
			if(i>1 && i<a){
				suma1 = suma1 + xi*y;
				suma2 = suma2 + yi*x;
			}else{
				suma1 = suma1 + xi*y + x*copia_y;
				suma2 = suma2 + yi*x + y*copia_x;
			}
		}
		
		i++;
	 }
	 area = 0.5*fabs(suma2-suma1);
	 return area;
 }
 
 int main(){
 	int cant_vertices;
 	
 	cout<< "Ingrese la cantidad de vertices: ";
 	cin>> cant_vertices;
 	
 	if(cant_vertices > 2){
 		
 		cout << "El area del poligono es: " <<poligono(cant_vertices);
 		
	 }else{
	 	cout<< "ERROR...(El numero de vertices debe ser mayor o igual que 2)" << endl;
	 }
 	
 	return 0;
 }
