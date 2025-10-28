#include<iostream>
using namespace std;
int main() 
{

	int N;

	cin >> N;


	for (int k=1;k<=N; k++){
		for (int i=1; i<=k; i++){
			cout << k;
		}	
		cout << endl;
	}	
	cout << endl;

	return 0;
}