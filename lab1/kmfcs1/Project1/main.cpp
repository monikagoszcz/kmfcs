/*Quantum methods of solid state physics
Monika Goszcz
laboratory 1
solving Schrodinger equation independent from time in:
a) constant potential
b) Fermi potencial*/ 

#include <iostream>
#include <C:\Users\Monika Goszcz\Documents\Visual Studio 2015\eigen-eigen-da9b4e14c255\Eigen\Dense>
#include "waveFunction.h"


int main(int /* argc */, char* /* argv */[])
{
	// Constatns
	double A = 15;
	double a = 10.0 / 3.0;
	double V_0 = 2.5;
	double R = 1;
	int n = 20;

	double start = -A;
	double stop = A;
	int y = 1000;
	double dx = (stop - start) / y;
	
	return 0;
}