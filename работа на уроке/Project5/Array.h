#pragma once
class Array
{
public:
	int* arr = nullptr;


public:
	bool fill(int* mass);
	void look_array();
	bool changelenghtArray();
	void sort();

public:
	Array(long long int lenght);

	//копирующий конструктор
	Array(const Array& arr);
	//Деструктор
	~Array();

private:
	long long int lenght = 0;

};

