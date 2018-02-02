#ifndef EurCall_h
#define EurCall_h

class EurCall
{
	double T, K;
	double d_plus(double S0, double sigma, double r);
	double d_minus(double S0, double sigma, double r);
	double EurCall::N(double x);
public:

	EurCall(double T_, double K_) { T = T_; K = K_; }
	
	double PriceByBSFormula(double S0,
		double sigma, double r);
	double VegaByBSFormula(double S0,
		double sigma, double r);
};

#endif



