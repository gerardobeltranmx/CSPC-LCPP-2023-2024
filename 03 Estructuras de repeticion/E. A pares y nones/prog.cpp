#include<iostream>
using namespace std;
int main() 
{
	int N, dato, sumaPar=0, sumaImpar=0;
	int cuentaPar=0, cuentaImpar=0;
	int promPar, promImpar;
	cin >> N;
	for (int i=0; i <N; i++){
		cin >> dato; 
		if (dato % 2 == 0){ // Es par para Aparicio
			sumaPar = sumaPar + dato;  // sumaPar+=dato;
			cuentaPar = cuentaPar + 1; // cuentaPar++;
		}
		else{ // para Nonila
			sumaImpar = sumaImpar + dato;
			cuentaImpar = cuentaImpar + 1;
		}
	}
	promPar = sumaPar / cuentaPar;
	promImpar = sumaImpar / cuentaImpar;

	if (promPar>promImpar)
			cout << "APARICIO" << endl;
	else if (promImpar>promPar)
			cout << "NONILA" << endl;
	else
		cout << "EMPATE!"<< endl;



	return 0;
}