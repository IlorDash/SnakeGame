#pragma once

#include "windows.h"

class Snake {

public:
	Snake(bool *_game_over, int _width, int _height);
	~Snake();
	void direction(int * x, int * y,bool *_startGame);
	void border_control(int *x, int *y);
	void eating(int *f_x, int *f_y, int *x, int *y, int *_score, int *_speed, int *_nTail);
	void tail(int tailX[], int tailY[], int _nTail, int _snakex, int _snakey, int *_deleteX, int *_deleteY);

private:
	bool *game_over;
	int width;
	int	height;
	int *score_num;
	int *speed;
	int lastKeyCode;
	HANDLE hInput;
	int getPressedKey();
};

