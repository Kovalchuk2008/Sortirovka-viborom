#include <iostream>
#include <time.h>
using namespace std;




int main()
{
	srand(time(NULL));


	const int SIZE = 10;
	int original[SIZE];
	int array1[5], array2[5];


	cout << "Original array: ";
	for (int i = 0; i < SIZE; i++) {
		original[i] = rand() % 11;
		cout << original[i] << " ";
	}
	cout << endl;



	for (int i = 0; i < 5; i++) {
		array1[i] = original[i];
	}



	for (int i = 0; i < 5; i++) {
		array2[i] = original[i + 5];
	}


	cout << "First Array: ";
	for (int i = 0; i < 5; i++) {
		cout << array1[i] << " ";
	}
	cout << endl;


	cout << "Second Array: ";
	for (int i = 0; i < 5; i++) {
		cout << array2[i] << " ";
	}
	cout << endl;
}