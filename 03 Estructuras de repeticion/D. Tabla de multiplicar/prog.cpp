#include<iostream>
#include<iomanip>

using namespace std;
int main() 
{
	int N, mult;
	cin >> N;

	for (int i=1; i <= 10; i++){
		mult = i * N;
		cout <<fixed<< setw(5) << i << " x " << setw(5) << N << " = " << setw(5) << mult << endl;
	}
	return 0;
}