#include "Matrix.hpp"

int main()
{
	cout << "****************** Start Matrix A Program ******************"
		<< endl
		<< endl;

	Matrix a;

	a.Matrix::matrixGenTester();

	cout << endl 
		<< "****************** Matrix A Program End ******************"
		<< endl
		<< endl;

	a.Matrix::Matrix(3);


	cout << "****************** Start Matrix B Program ******************"
		<< endl
		<< endl;
	cout << "Set up Matrix B" << endl;
	Matrix b;

	cout << "Test case : 3 x 3 Matrix" << endl;
	b.Matrix::Matrix(3);

	cout << "Input Data : {11, 12, 13, 14, 15, 16, 17, 18, 19}" << endl;
	int numList[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	b.Matrix::InsertValueFromArray(numList);

	cout << endl
		<< b
		<< endl;

	cout << endl
		<< "****************** Matrix B Program End ******************"
		<< endl
		<< endl;

	cout << "Current Matrix A :"
		<< endl
		<< endl;

	cout << endl
		<< a
		<< endl
		<< endl;

	cout << "Current Matrix B :"
		<< endl
		<< endl;

	cout << endl
		<< b
		<< endl
		<< endl;

	cout << "****************** Start Matrix comparing ******************";


	a.Matrix::matrixCompTester(b);

	return 0;
};

