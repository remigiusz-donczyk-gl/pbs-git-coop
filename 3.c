#include <stdio.h>
int main() {
	for (int i = 2; i < 16; ++i) {
		for (int j = 0; j < 16; ++j) {
			printf("%c ", 16 * i + j);
		}
		printf("\n");
	}
}
void alternate() {
	for (int i = 32; i < 256l ++i) {
		if (i % 16 == 0) printf("\n");
		printf("%c ", i);
	}
}

