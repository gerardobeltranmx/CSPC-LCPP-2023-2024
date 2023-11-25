#include<iostream>
using namespace std;
int main() 
{
	int N, contar=0;
	cin >> N;
	// caso 1
	if ( N % 2 == 0){
		N=N/2;
		contar++;
	}	
	else{		
		N++;
		contar++;
	}
	// caso 2
   if (N>=100){
		N= N / 100;
		contar++;
   }
   else if (N>=10 && N<=99){
		N = N / 10;
		contar++;
   }
   // caso 3	
   if (N % 3 == 0){
		N--;
		contar++;
   }
   cout << N << " " << contar << endl;	
   return 0;
}