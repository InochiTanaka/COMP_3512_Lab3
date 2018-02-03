#include "Matrix.hpp"

//Testing Each functions to generate and edit Matrix
void Matrix::matrixGenTester()
{
	int inputNum = 3;

	//Test #1: initialize matrix to square 1 x 1 contain 0 (10-e)
	cout << "Test #1: initialize matrix to square 1 x 1 contain 0 (10-e)" << endl;
	Matrix mt;
	cout << endl;
	cout << mt 
		<< endl
		<< "Test#1 END -------------------"
		<< endl 
		<< endl
		<< endl;

	//Test #2: initialize matrix to square n x n contain 0 (10-f)
	cout << "Test #2: initialize matrix to square n x n contain 0 (10-f)" << endl;
	cout << "Test case n = 3 : ";
	mt.Matrix::Matrix(inputNum);
	cout << endl;
	cout << endl
		<< mt 
		<< endl
		<< "Test#2 END -------------------"
		 << endl
		<< endl
		<< endl;

	//Test #3: contain array to Matrix (10-g)
	cout << "Test #3: contain array to Matrix (10-g)" << endl;
	cout << "Test case : input  {1, 2, 3, 4, 5, 6, 7, 8, 9}";
	int numList[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << endl;
	mt.Matrix::InsertValueFromArray(numList);
	cout << mt
		<< endl
		<< "Test#3 END -------------------"
		<< endl 
		 << endl
		<< endl;

	//Test #4: set value to specific position (10-h)
	int r = 0, c = 0, v = 0;
	cout << "Test #4: set value to specific position (10-h)" << endl;
	cout << "Test case : Row = 2, Column = 2, Value = 15" << endl;
	cout << endl;
	r = 2;
	c = 2;
	v = 15;

	mt.Matrix::set_value(r, c ,v);
	cout << mt
		<< endl
		<< endl;

	cout << "Test#4 END -------------------"
		<< endl
		<< endl
		<< endl;


	//Test #5: get value on specific position (10-i)
	r = 0, c = 0, v= 0;
	cout << "Test #5: get value on specific position (10-i)" 
		<< endl 
		<< endl;
	cout << mt
		<< endl
		<< endl;
	cout << "Test case : Row = 2, Column = 3 << endl; ";
	r = 2;
	c = 3;

	v = mt.Matrix::get_value(r, c);
	cout << endl
		<< "Value on Row "
		<< r
		<< ", Column "
		<< c
		<< " is "
		<< v
		<< endl
		<< endl;

	cout << "Test#5 END -------------------"
		<< endl
		<< endl
		<< endl;


	//Test #6: clear current Matrix (10-j)
	r = 0, c = 0, v = 0;
	cout << "Test #6: clear current Matrix (10-j)" 
		<< endl 
		<< endl;

	mt.Matrix::clear(mt.array);
	cout << mt
		<< endl
		<< endl;

	cout << "Test#6 END -------------------"
		<< endl
		<< endl;



	//Test #7: create new identity matrix (10-k)
	cout << "Test #7: create new identity matrix (10-k)"
		<< endl
		<< endl;

	cout << "Be not resolved" << endl;

	//cout << "Current Matrix:"
	//	<< endl
	//	<< endl;
	//cout << mt
	//	<< endl
	//	<< endl
	//	<< endl;

	//cout << "New Created Matrix:"
	//	<< endl
	//	<< endl;
	//Matrix mtIdentity;
	////mtIdentity.Matrix::identity(mt.numRC);
	//cout << mtIdentity
	//	<< endl
	//	<< endl
	//	<< endl;

	cout << "Test#7 END -------------------"
		<< endl
		<< endl;


	//Test #8: increment and decrement operators (10-o)
	cout << "Test #8: increment and decrement operators (10-o)"
		<< endl
		<< endl;

	cout << "Prefix increment:"
		<< endl
		<< endl;
	++mt;
	cout << mt
		<< endl
		<< endl;
	
	cout << "Post increment:";
	cout << " Be not resolved"
		<< endl
		<< endl;
	//mt++;
	//cout << mt
	//	<< endl
	//	<< endl;

	cout << "Prefix decrement:"
		<< endl
		<< endl;
		--mt;
	cout << mt
		<< endl
		<< endl;

	cout << "Post decrement:";
	cout << " Be not resolved" << endl;
	//	<< endl
	//	<< endl;
	//	mt--;
	//cout << mt
	//	<< endl
	//	<< endl;


	cout << "Test#8 END -------------------"
		<< endl
		<< endl;

}

//Testing Each functions to compare 2 Matrixes
void Matrix::matrixCompTester(Matrix& mt)
{

	//Test #9: comparison operators (10-q)
	cout << "Test #9: comparison operators (10-q)"
		<< endl
		<< endl;

	cout << "Number of Matrix A = "
		<< (this->numRC)*(this->numRC)
		<< ", Number of Matrix B = "
		<< (mt.numRC)*(mt.numRC)
		<< endl
		<< endl;

	if (*this == mt) {
		cout << "The numbers of array on Matrix A and Matrix B are same." << endl;
	}
	if (*this != mt) {
		cout << "The numbers of array onMatrix A and Matrix B is not same." << endl;

	}
	if (*this < mt) {
		cout << "The numbers of array on Matrix A is smaller than Matrix B." << endl;
	}
	if (*this > mt) {
		cout << "The numbers of array on Matrix A is bigger than Matrix B." << endl;
	}

	if (*this <= mt) {
		cout << "The numbers of array on Matrix A is same or less than Matrix B." << endl;

	}
	if (*this >= mt) {
		cout << "The numbers of array on Matrix A is same or more than Matrix B." << endl;
	}

	cout << endl
		<< "Test#9 END -------------------"
		<< endl
		<< endl;


	//Test #10: Copy and swap (10-q)
	cout << "Test #10: Copy and swap  (10-q)"
		<< endl
		<< endl;

	*this = mt;

	cout << "Current Matrix A :"
		<< endl
		<< endl;

	cout << endl
		<< *this
		<< endl
		<< endl;

	cout << "Current Matrix B :"
		<< endl
		<< endl;

	cout << endl
		<< mt
		<< endl
		<< endl;

	cout << "Test#10 END -------------------"
		<< endl
		<< endl;

	//Test #11: binary arithmetic operators (10-q)
	cout << "Test #11: binary arithmetic operators  (10-q)"
		<< " Be not resolved"
		<< endl
		<< endl;



	//cout << "Test 1: operator+= ( A + B )"
	//	<< endl
	//	<< endl;
	//*this += mt;
	//cout << endl
	//	<< *this
	//	<< endl
	//	<< endl;

	//cout << "Test 2: operator-= ( A - B )"
	//	<< endl
	//	<< endl;
	//*this -= mt;
	//cout << endl
	//	<< *this
	//	<< endl
	//	<< endl;

	//cout << "Test 3: operator+ ( A + B )"
	//	<< endl
	//	<< endl;
	//*this + mt;
	//cout << endl
	//	<< *this
	//	<< endl
	//	<< endl;

	//cout << "Test 3: operator- ( A - B )"
	//	<< endl
	//	<< endl;
	//*this - mt;
	//cout << endl
	//	<< *this
	//	<< endl
	//	<< endl;

	cout << "Test#10 END -------------------"
		<< endl
		<< endl;
}