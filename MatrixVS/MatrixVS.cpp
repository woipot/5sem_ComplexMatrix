// MatrixVS.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "matrix.h"
#include <array>


int main()
{
	Matrix m = Matrix(3, 1, 12.0, 122.0, 2113.0);

	Matrix t = Matrix(3, 1, 12.0, 122.0, 2113.0);
	std::cout << "+ = " << m  + t << "\n\n";
	std::cout << "- = " << m - t << "\n\n";

	m.transponire();
	
	std::cout << "* = " << m * t << "\n\n";

	std::cout << "* complex = " << m * std::complex<double>(15, 4) << "\n\n";

	getchar();
    return 0;
}

