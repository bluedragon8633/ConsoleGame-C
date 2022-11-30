#include <stdio.h>

int screenArray[25][15] = {};

struct Coords {
	int x;
	int y;
};

struct Player {
	Coords pos = {0,0};
};

void drawScreen() {
	printf("\x1b[1;1H");
	for (int x = 0; x < 25; x++) {
		for (int y = 0; y < 15; y++) {
			if (screenArray[x][y] == 0) {
				printf("");
			} else if (screenArray[x][y] == 1) {
				printf("\x1b[37m  \x1b[0m");
			} else if (screeenArray[x][y] == 2) {
				printf("\x1b[31m  \x1b[0m");
			}
		}
		printf("\n");
	}
}
