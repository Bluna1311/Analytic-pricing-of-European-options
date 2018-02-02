#include <iostream>
#include <cmath>
#include "EurCall.h"
#include"EurPut.h"
using namespace std;

int main()
{

	double T, K;

	cout << "please enter Strike price and Time to Expire " << endl;
	cin >> T;
	cin >> K;
	if (T < 0)
	{
		cout << "invalid Time value";
		system("pause");
		return 0;
	}
	if (K <= 0)
	{
		cout << "invalid Strike value";
		system("pause");
		return 0;
	}

	cout << "please enter Stock Price, volatility and interest rate" << endl;
	double S0, Sigma, r;
	cin >> S0;
	cin >> Sigma;
	cin >> r;
	if (S0 <= 0)
	{
		cout << "invalid stock value";
		system("pause");
		return 0;
	}
	if (Sigma <= 0)
	{
		cout << "invalid Sigma Value";
		system("pause");
		return 0;
	}

	//part 2 choice option herer
	cout << "Would you like the put (1) or call price (2) ? ";
	int choice;
	cin >> choice;
	if (choice == 2)
	{
		EurCall Call(T, K);
		double Black_Scholes = Call.PriceByBSFormula(S0, Sigma, r);
		cout << Black_Scholes << endl;
	}
	if (choice == 1)
	{
		{
			EurPut Put(T, K);
			double Black_Scholes = Put.PriceByBSFormula(S0, Sigma, r);
			cout << Black_Scholes << endl;
		}
		
	}
	system("pause");
	return 0;
}
