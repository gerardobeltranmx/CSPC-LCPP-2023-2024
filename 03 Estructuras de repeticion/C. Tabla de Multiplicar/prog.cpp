#include<iostream>
using namespace std;
int main() 
{
	int N, mult;
	cin >> N;

	for (int i=1; i <= 10; i++){
		mult = i * N;
		cout << N << " X " << i << " = " << mult << endl;
	}
	return 0;
}