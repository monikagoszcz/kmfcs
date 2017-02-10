#ifndef _waveFunction_h_
#define _Wavefunction_h_

#include <iostream>

static const double PI = 3.14159;

double Y_sym(int i, double A, double x);
double Y_anty(int i, double A, double x);
double V_const(double x, double a, double V_0, double R);
double V_Fermi(double x, double a, double V_0, double R);

#endif 