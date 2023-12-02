#include<iostream>
using namespace std;
int main() 
{
	long N, K, mayor, fichas;
	cin >> N >> K;

	if (N>K){
		 mayor = N;
	}	 
	else {
	 mayor = K;
	}


	fichas = (mayor + 2 ) * (mayor + 1) / 2;


	cout << fichas;


	return 0;
}