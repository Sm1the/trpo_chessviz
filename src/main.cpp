#include <cstdio>
#include "board_start.h"
#include "board_print_plain.h"
#include "board.h"

int main() {
    printf("Welcome to the game \"Chess\".\nTo do at least, enter in the console \"start position of the turn and end position of the move\"\nBe sure to indicate the sequence through the dash.\n");
	char deck[8][8];
	board_start(deck);
	while (1) {
		printf("\n");
		board_print_plain(deck);
		board(deck);
	}
}
