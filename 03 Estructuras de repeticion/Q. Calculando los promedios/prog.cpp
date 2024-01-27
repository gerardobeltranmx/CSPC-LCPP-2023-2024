#include<iostream>
#include<iomanip>

using namespace std;
int main() 
{
	int k, n, menor, mayor, suma=0, N;
	double promedio;
	
	cin >> N;

	for (int l=0; l<N; l++){ //procesa lista por lista

		cin >> k;
		cin >> n;
		mayor = n;
		menor = n;
		suma = n;
		for (int i=1; i <k; i++ ){ // procesa una lista
			cin >> n;
			suma = suma + n;
			if (n>mayor) mayor=n;
			if (n<menor) menor=n;
		}

		if (suma % k != 0){
			promedio = (double)suma / k;
			cout << fixed << setprecision(3) <<promedio << " " << menor << " " << mayor << endl; 

		}
		else{
				promedio = suma / k;
			cout << promedio << " " << menor << " " << mayor << endl; 

		}

}
	return 0;
}