#include "stdio.h"

int main(int argc, char* argv[]) {
	if (argc>1) {
		printf("Hello, %s!",argv[1]);
	} else {
		printf("Hello, %s!",argv[0]);
	}
	return 0;
} 