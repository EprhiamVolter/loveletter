#ifndef board_cpp
#define board_cpp

#include <chrono>

#include "board.h"

board::board():
	gen(chrono::system_clock::now().time_since_epoch().count()) {
	round = 0;
	turn = 0;
}

#endif