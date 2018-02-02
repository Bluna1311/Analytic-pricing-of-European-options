#pragma once
#ifndef PutCall_h
#define PutCall_h

class EurPut
{
	double T, K;
	double d_plus(double S0, double sigma, double r);
	double d_minus(double S0, double sigma, double r);
	double EurPut::N(double x);

public:
	EurPut(double T_, double K_) { T = T_; K = K_; }
	double PriceByBSFormula(double S0,
		double sigma, double r);
	double VegaByBSFormula(double S0,
		double sigma, double r);
};

#endif