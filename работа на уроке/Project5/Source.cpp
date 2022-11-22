#include <iostream>
#include <string>
#include "Array.h"

using namespace std;


int main() {
	
	int* arr = new int[3]{ 1,2,3 };
	Array *arr = new Array(*arr);
	
	
}