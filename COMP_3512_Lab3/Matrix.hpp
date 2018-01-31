#pragma once
#include<iostream>

using namespace std;

class Matrix
{
	void set_value(int row, int col, int newVal);
	int get_value(int row, int col);
	void clear(int array[]);
	Matrix identity();
	bool operator==(const Matrix & mt);
	bool operator!=(const Matrix & mt);
	bool operator<(const Matrix & mt);
	bool operator>(const Matrix & mt);
	bool operator<=(const Matrix & mt);
	bool operator>=(const Matrix & mt);
	Matrix& operator++();
	Matrix operator++(int);
	Matrix& operator--();
	Matrix operator--(int);
	int operator=(const Matrix & mt);
	int operator+(const Matrix & mt);
	int operator-(const Matrix & mt);
	friend ostream& operator<<(ostream& os, const Matrix& mt);
	Matrix operator+=(int value);
	Matrix operator-=(int value);

	public:
		Matrix();
		Matrix(int n);
		~Matrix();

		int numRC;

		int *array;
		int *arrayTemp;
};

inline Matrix::Matrix()
{
	array = new int[0];
}

inline Matrix::Matrix(int n): numRC(n)
{
	if (n > 0)
	{
		array = new int[numRC*numRC];
		clear(array);
	}
}

inline Matrix::~Matrix()
{
	delete[] array;
}

inline void Matrix::set_value(int row, int col, int newValue)
{
	array[(numRC*row)+col] = newValue;
}

inline int Matrix::get_value(int row, int col)
{
	return array[(numRC*row) + col];
}

//set all values on Matrix to 0
inline void Matrix::clear(int array[])
{
	for (int i = 0; i < numRC*numRC ; i++)
	{
		array[i] = 0;
	}
}

//return newly created identity Matrix
inline Matrix Matrix::identity()
{
	arrayTemp = new int[numRC*numRC];
	clear(arrayTemp);
}

ostream & operator<<(ostream & os, const Matrix& mt)
{
	for (int rowi = 0; rowi < mt.numRC; rowi++)
	{
		for (int coli = 0; coli < mt.numRC; coli++)
		{
			os << mt.array[(mt.numRC * rowi) + coli]
				<< " ";
		}
		os << endl;
	}
	return os;
}
//
//inline bool Matrix::operator==(const Matrix& mt1, const Matrix& mt2)
//{
//	return false;
//}
//
//inline bool Matrix::operator!=(const Matrix& mt1, const Matrix& mt2)
//{
//	return false;
//}
//
//inline bool Matrix::operator<(const Matrix& mt1, const Matrix& mt2)
//{
//	return false;
//}
//
//inline bool Matrix::operator>(const Matrix& mt1, const Matrix& mt2)
//{
//	return false;
//}
//
//inline bool Matrix::operator<=(const Matrix& mt1, const Matrix& mt2)
//{
//	return false;
//}
//
//inline bool Matrix::operator>=(const Matrix& mt1, const Matrix& mt2)
//{
//	return false;
//}

//increment 1 to the value of each array on prefix
inline Matrix& Matrix::operator++()
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		++array[i];
	}
}


//increment 1 to the value of each array on postfix
inline Matrix Matrix::operator++(int)
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		array[i]++;
	}
}

//decrement 1 from the value of each array on prefix
inline Matrix& Matrix::operator--()
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		--array[i];
	}
}

//decrement 1 rom the value of each array on posfix
inline Matrix Matrix::operator--(int)
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		array[i]--;
	}
}

//copy-and-swap
inline int Matrix::operator=(const Matrix & mt)
{
	return 0;
}

int Matrix::operator+(const Matrix& mt)
{
	return 0;
}

int Matrix::operator-(const Matrix& mt)
{
	return 0;
}

//add value to each array
inline Matrix Matrix::operator+=(int value)
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		array[i] += value;
	}
};

//reduce value from each array
inline Matrix Matrix::operator-=(int value)
{
	for (int i = 0; i < numRC*numRC; i++)
	{
		array[i] -= value;
	}
};

