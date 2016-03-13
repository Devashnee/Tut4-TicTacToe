#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe
{
private:
	char game[3][3];    //declearing a 3x3 array
	bool shift(int, int);

public:
	TicTacToe();
	void Instructions();
	void print();    
	void move1(int);
	void move2(int);
	bool over();
	bool Win();
	bool Draw();
	void reset();
};

#endif