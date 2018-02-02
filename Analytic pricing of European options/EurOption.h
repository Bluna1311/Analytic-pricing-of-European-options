#pragma once
class EurOption 
{
	double T, K;
	double d_plus(double S0, double sigma, double r);
	double d_minus(double S0, double sigma, double r);
	double EurOption::N(double x);

public:
	EurOption(double T_, double K_) { T = T_; K = K_; }
	double PriceByBSFormula(double S0,
		double sigma, double r);
	double VegaByBSFormula(double S0,
		double sigma, double r);
};