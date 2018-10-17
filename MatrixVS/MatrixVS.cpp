// MatrixVS.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "matrix.h"
#include <array>


int main()
{
	auto arrparams = std::vector<std::complex<double>>{std::complex<double>(12, 1), 
		std::complex<double>(1, -1) ,
		std::complex<double>(0, 10)};

	Matrix m = Matrix(3, 1, arrparams);
	std::cout << "SOURCE (m t) =  " << m  << "\n\n";
	
	std::cout << "track = " << m.getTrack() << "\n\n";

	Matrix t = Matrix(3, 1, arrparams);
	std::cout << "+ = " << m  + t << "\n\n";
	std::cout << "- = " << m - t << "\n\n";

	m.transpose();
	
	std::cout << "* = " << m * t << "\n\n";

	std::cout << "* complex = " << m * std::complex<double>(15, 4) << "\n\n";


	std::cout << "RANDOM = " << Matrix::createRandom() << "\n\n";

	getchar();
    return 0;
}

