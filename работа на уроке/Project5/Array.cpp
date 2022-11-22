#include "Array.h"
#include <iostream>
using namespace std;
/*нужно чтобы класс ар через конструктор указывала длину массива*/
Array::~Array()
{
	delete[]arr;
}

Array::Array(long long int lenght)
{
	this->lenght = lenght;
	this->arr = new int[this->lenght];
}
// копирующий конструктор
Array::Array(const Array& user_mass)
{
	this->lenght = user_mass.lenght;

	this->arr = new int[this->lenght];

	for (long long int i = 0;i < this->lenght;++i)
	{
		this->arr[i] = user_mass.arr[i];
	}
}

bool Array::fill(int* user_mass) {
	for(int i = 0;user_mass[i]!='\0';++i)
	{
		this->arr[i] = user_mass[i];
	}
	return 0;
}
void Array::look_array()
{
	for (int i = 0;i < this->lenght;++i)
	{
		cout << this->arr[i] << endl;
	}

}
bool Array::changelenghtArray()
{
	if (lenght == 0)
	{
		return 0;
	}
	this->lenght = lenght;
	delete[]arr;
	arr = new int[this->lenght];


}
void Array::sort() {

}
