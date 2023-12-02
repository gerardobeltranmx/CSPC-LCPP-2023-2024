#include<iostream>
using namespace std;
int main() 
{
	int a, b, c, mayor, menor;
	cin >> a >> b >> c;
	// supe al menor y mayor como el primero
	mayor = a;
	menor = a;
	// busca el mayor
	if (b > mayor) {
		mayor = b;
	}	
	if (c > mayor ){
	 mayor = c;
	}
	// Busca el menor
	if (b < menor) {
		menor = b;
	}
	if (c < menor){ 
		menor = c;
	}

	cout << menor << endl;
	cout << mayor << endl; 




	return 0;
}