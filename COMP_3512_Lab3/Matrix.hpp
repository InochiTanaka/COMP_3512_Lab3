#pragma once
using namespace std;

#include<iomanip> 
#include<iostream>

class Matrix
{
	public:
		void set_value(int row, int col, int newVal);
		int get_value(int row, int col);
		int * clear(int * array);
		Matrix identity();
		friend bool operator==(const Matrix& mt1, const Matrix& mt2);
		friend bool operator!=(const Matrix& mt1, const Matrix& mt2);
		friend bool operator<(const Matrix& mt1, const  Matrix& mt2);
		friend bool operator>(const Matrix& mt1, const Matrix& mt2);
		friend bool operator<=(const Matrix& mt1, const Matrix& mt2);
		friend bool operator>=(const Matrix& mt1, const Matrix& mt2);
		Matrix& operator=(Matrix mt);
		friend void swap(Matrix& mt1, Matrix& mt2) ;
		friend ostream& operator<<(ostream& os, const Matrix& mt);
		Matrix& operator++();
		Matrix operator++(int);
		Matrix& operator--();
		Matrix operator--(int);
		friend Matrix operator+(Matrix & mt1, Matrix & mt2);
		friend Matrix operator-(Matrix & mt1, Matrix & mt2);
		Matrix operator+=(Matrix mt);
		Matrix operator-=(Matrix mt);
		//Matrix operator+(Matrix& mt1, Matrix& mt2);
		//Matrix operator-(Matrix& mt1, Matrix& mt2);

		void InsertValueFromArray(int* numList);

		void matrixGenTester();
		void matrixCompTester(Matrix& mt2);

		Matrix(); //Default constructor
		Matrix(int n); //Constructor
		~Matrix(); //Destructor


		// Number of Row and Column
		//In this case, the numbers are same, so it is unified
		int numRC; 

		// Array pointers for contain numbers
		int *array;
		int *arrayIdentity;
		int *inputArray;
};

//Default constructor
inline Matrix::Matrix()
{
	numRC = 1;
	array = new int[numRC*numRC];
	array[0] = 0;
}

//Constructor
inline Matrix::Matrix(int n) : numRC(n)
{
	int num;
	if (n > 0)
	{
		array = new int[numRC * numRC];
		array = clear(array);
	}
	else
	{
		do
		{
			cout << endl
				<< "Please input any positive number more than 1 : ";
			cin >> num;
		} while (num < 0);
		numRC = num;
		array = new int[numRC * numRC];
		array = clear(array);
	}
}

//Destructor
inline Matrix::~Matrix()
{
	delete[] array;
	delete[] arrayIdentity;
	delete[] inputArray;
}

//Set contain values from Array
inline void Matrix::InsertValueFromArray(int* numList)
{
	cout << "Contain input data to Matrix" << endl << endl;
	for (int i = 0; i < numRC * numRC; i++)
	{
		array[i] = numList[i];
	}
}

//Set value on the ordered position
inline void Matrix::set_value(int row, int col, int newValue)
{
	cout << endl
		<< "Replace: Row "
		<< row
		<< ", Column "
		<< col
		<< ", Value "
		<< newValue
		<< endl
		<< endl;

	array[(numRC * (row - 1)) + (col - 1)] = newValue;
}

//Get and return value of ordered position
inline int Matrix::get_value(int row, int col)
{
	return array[(numRC * (row - 1)) + (col - 1)];
}

//set all values on Matrix to 0
inline int* Matrix::clear(int* array)
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		array[i] = 0;
	}
	return array;
}

//return newly created identity Matrix
inline Matrix Matrix::identity()
{
	Matrix::Matrix(numRC);
	return *this;
}





//print matrix by n * n style
inline ostream & operator<<(ostream & os, const Matrix& mt)
{
	for (int rowi = 0; rowi < mt.numRC; rowi++)
	{
		for (int coli = 0; coli < mt.numRC; coli++)
		{
			os << setw(5) << right
				<< mt.array[(mt.numRC * rowi) + coli]
				<< " ";
		}
		os << endl;
	}
	return os;
}

//comparison operator
//If number of array on Matrix1 and Matrix2 is same,
// return true. Except it return false.
inline bool operator==(const Matrix& mt1, const Matrix& mt2)
{
	if (sizeof(mt1.array) / sizeof(mt1.array[0])
		== sizeof(mt2.array) / sizeof(mt2.array[0]))
	{
		return true;
	}
	return false;
}

//comparison operator
//If number of array on Matrix1 and Matrix2 is not same,
// return true. Except it return false.
inline bool operator!=(const Matrix& mt1, const Matrix& mt2)
{
	if (sizeof(mt1.array) / sizeof(mt1.array[0])
		!= sizeof(mt2.array) / sizeof(mt2.array[0]))
	{
		return true;
	}
	return false;
}

//comparison operator
//If number of array on Matrix1 is smaller than Matrix2,
// return true. Except it return false.
inline bool operator<(const Matrix& mt1, const Matrix& mt2)
{
	if (sizeof(mt1.array) / sizeof(mt1.array[0])
		< sizeof(mt2.array) / sizeof(mt2.array[0]))
	{
		return true;
	}
	return false;
}

//comparison operator
//If number of array on Matrix1 is bigger than Matrix2,
// return true. Except it return false.
inline bool operator>(const Matrix& mt1, const Matrix& mt2)
{
	if (sizeof(mt1.array) / sizeof(mt1.array[0])
> sizeof(mt2.array) / sizeof(mt2.array[0]))
	{
		return true;
	}
	return false;
}

//comparison operator
//If number of array on Matrix1 is same or less than Matrix2,
// return true. Except it return false.
inline bool operator<=(const Matrix& mt1, const Matrix& mt2)
{
	if (sizeof(mt1.array) / sizeof(mt1.array[0])
		<= sizeof(mt2.array) / sizeof(mt2.array[0]))
	{
		return true;
	}
	return false;
}

//comparison operator
//If number of array on Matrix1 is same or more than Matrix2,
// return true. Except it return false.
inline bool operator>=(const Matrix& mt1, const Matrix& mt2)
{
	if (sizeof(mt1.array) / sizeof(mt1.array[0])
		>= sizeof(mt2.array) / sizeof(mt2.array[0]))
	{
		return true;
	}
	return false;
}

//Increment 1 to the value of each array on prefix
inline Matrix& Matrix::operator++()
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		++array[i];
	}
	return *this;
}

//Increment 1 to the value of each array on postfix
inline Matrix Matrix::operator++(int)
{

	Matrix temp(*this);
	++*this;
	return temp;
}

//Decrement 1 from the value of each array on prefix
inline Matrix& Matrix::operator--()
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		--array[i];
	}
	return *this;
}

//Decrement 1 rom the value of each array on posfix
inline Matrix Matrix::operator--(int)
{
	Matrix temp(*this);
	--*this;
	return temp;
}

//Copy-and-swap
inline Matrix& Matrix::operator=(Matrix mt)
{
	swap(*this, mt);
	return *this;
}

//Swap two Matrix objects
inline void swap(Matrix& mt1, Matrix& mt2)
{
	using std::swap;
	swap(mt1.numRC, mt2.numRC);
	swap(mt1.array, mt2.array);
}

//Add Data2 to Data1
inline Matrix operator+(Matrix & mt1, Matrix & mt2)
{
	mt1 += mt2;
	return mt1;
}

//Reduce Data2 from Data1
inline Matrix operator-(Matrix& mt1, Matrix& mt2)
{
	mt1 -= mt2;
	return mt1;
};

//Add value to each array
inline Matrix Matrix::operator+=(Matrix mt)
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		this->array += mt.array[i];
	}
	return *this;
};

//Reduce value from each array
inline Matrix Matrix::operator-=(Matrix mt)
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		this->array[i] -= mt.array[i];
	}
	return *this;
};

