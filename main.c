#include <stdio.h>

int screenArray[25][15] = {};

struct Coords {
	int x;
	int y;
};

struct Player {
	struct Coords pos;
};

void drawScreen() {
	printf("\x1b[1;1H");
	for (int x = 0; x < 25; x++) {
		for (int y = 0; y < 15; y++) {
			if (screenArray[x][y] == 0) {
				printf("\x1b[0m  ");
			} else if (screenArray[x][y] == 1) {
				printf("\x1b[37m  \x1b[0m");
			} else if (screenArray[x][y] == 2) {
				printf("\x1b[31m  \x1b[0m");
			}
		}
		printf("\n");
	}
}


int main() {
    //while (1) {
    struct Player player;
    player.pos.x = 3;
    player.pos.y = 8;
    screenArray[player.pos.x][player.pos.y] = 1;
    screenArray[0][0] = 2;
    drawScreen();
    //}

    return 1;   
}
