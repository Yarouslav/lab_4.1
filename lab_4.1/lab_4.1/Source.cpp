#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	i = k;
	while (i <= N)	
	{
		S += (cos(1. * i) + sin(1. * i)) / (1 + sin(1. * i) * sin(1. * i));
		i++;
	}
	cout << S << endl;

		S = 0;
	i = k;
	do {
		S += (cos(1. * i) + sin(1. * i)) / (1 + sin(1. * i) * sin(1. * i));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (cos(1. * i) + sin(1. * i)) / (1 + sin(1. * i) * sin(1. * i));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (cos(1. * i) + sin(1. * i)) / (1 + sin(1. * i) * sin(1. * i));
	}
	cout << S << endl;
	return 0;
}
