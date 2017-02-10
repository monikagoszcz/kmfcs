#include "waveFunction.h"

// Even function 
double Y_sym(int i, double A, double x) 
{
	if (i == 0) return 1 / sqrt(2 * A);
	else return (1 / sqrt(A) ) * cos(i * PI * x / A);
}
// Odd function 
double Y_anty(int i, double A, double x) 
{
	return (1 / sqrt(A)) * sin(i * PI * x / A);
}
// Rectangular potential 
double V_const(double x, double a, double V_0, double R) 
{
	if (fabs(x) < a) 
		return -V_0;
	else
		return 0;
}
//Fermi potential
double V_Fermi(double x, double a, double V_0, double R) 
{
	return -1 * V_0 / (1 + exp((fabs(x) - a) / R));
}