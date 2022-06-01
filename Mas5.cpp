#include "Mas5.h"
#include <iostream>
int* ar(int n) {
	return new int[n];
}

void filling(int *ar, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		ar[i] = rand();
	}
}

void show(int* ar, int n) {
	for (int i = 0; i < n; i++) {
		std::cout<<ar[i]<<" ";
	}
	std::cout << std::endl;
}

void clear(int* ar) {
	delete []ar;
}