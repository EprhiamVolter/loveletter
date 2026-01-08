#ifndef board_h
#define board_h

#include <random>

using namespace std;

class board {
	public:
		mt19937 gen;
		int round;
		int turn;
		
		board();
};

#endif