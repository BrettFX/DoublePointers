#include <iostream>
#include <string>

#include "DPLinkedList.h"

using namespace std;

template<class T>
void displayMemoryTable(T** dblPtr);

int main(int argc, char** argv){
	int x = 21;
	int* intPtr = &x;
	int** dblIntPtr = &intPtr;
	
	displayMemoryTable(dblIntPtr);
	
	return 0;
}

/**
Displays a descriptive table mapping the memory addresses of the double pointer in question

@param T** the generic type double pointer to be tested
*/
template<class T>
void displayMemoryTable(T** dblPtr){
	cout << **dblPtr << "\n";
}