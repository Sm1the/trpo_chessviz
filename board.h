#ifndef TRPO_CHESSVIZ_BOARD_H
#define TRPO_CHESSVIZ_BOARD_H

void board(char deck[8][8]);
void reformat_input(char *input, int move[4]);
void make_move(char deck[8][8], int move[]);
int check_move(char deck[8][8], int move[]);
int black_pawn(char deck[8][8], int move[]);
int white_pawn(char deck[8][8], int move[]);


#endif //TRPO_CHESSVIZ_BOARD_H
