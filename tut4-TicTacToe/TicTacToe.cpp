#include "TicTacToe.h"
#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

TicTacToe::TicTacToe()//default constructor initailised
{

	game[0][0] = '1'; game[0][1] = '2'; game[0][2] = '3';
	game[1][0] = '4'; game[1][1] = '5'; game[1][2] = '6';
	game[2][0] = '7'; game[2][1] = '8'; game[2][2] = '9';
}

void TicTacToe::Instructions()//tells user how to play and rules of the game
{

	cout << endl << " welcome to TicTacToe" << endl;
	cout << "how to play?" << endl << "you will be assigned an X or and O" << endl << "with a 3 rows and 3 columes" << endl;
	cout << endl << "if you result in a combination of you symbols either horizontally,diagonally or vertically you win " << endl;
	print();

}

void TicTacToe::print()  // prints the layout 
{
	cout << endl;
	cout << " _________________" << endl;
	cout << "|     |     |     |" << endl;
	cout << "|  " << game[0][0] << "  |  " << game[0][1] << "  |  " << game[0][2] << "  |  " << endl;
	cout << "|_________________|" << endl;
	cout << "|     |     |     |" << endl;
	cout << "|  " << game[1][0] << "  |  " << game[1][1] << "  |  " << game[1][2] << "  |  " << endl;
	cout << "|_________________|" << endl;
	cout << "|     |     |     |" << endl;
	cout << "|  " << game[2][0] << "  |  " << game[2][1] << "  |  " << game[2][2] << "  |  " << endl;
	cout << "|_________________|" << endl;
}
// Check Wins
bool TicTacToe::Win()
{

	if (game[0][0] == game[0][1] && game[0][0] == game[0][2])  
		return true;
	else if (game[1][0] == game[1][1] && game[1][0] == game[1][2])  
		return true;
	else if (game[2][0] == game[2][1] && game[2][0] == game[2][2])  
		return true;
	else if (game[0][0] == game[1][0] && game[0][0] == game[2][0]) 
		return true;
	else if (game[0][1] == game[1][1] && game[0][1] == game[2][1])  
		return true;
	else if (game[0][2] == game[1][2] && game[0][2] == game[2][2]) 
		return true;
	else if (game[0][0] == game[1][1] && game[0][0] == game[2][2])  
		return true;
	else if (game[0][2] == game[1][1] && game[0][2] == game[2][0]) 
		return true;
	else
		return false;
}

bool TicTacToe::Draw()
{
	int draw = 0;
    for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (game[i][j] == 'X' || game[i][j] == 'O')
			
				draw += 1;
			}}

	if (draw == 9)
		return true;
	else
		return false;
}

// Resetting the board
void TicTacToe::reset()
{

	game[0][0] = '1'; game[0][1] = '2'; game[0][2] = '3';
	game[1][0] = '4'; game[1][1] = '5'; game[1][2] = '6';
	game[2][0] = '7'; game[2][1] = '8'; game[2][2] = '9';

}

// Player one's play
void TicTacToe::move1(int position)
{
	if (Win() != true)
	{
		switch (position)  // selecting spaces in the board
		{
		case 1:{
			if (shift(0, 0) == true)
			{
				game[0][0] = 'X';
			}
			else
			{
				cout << endl << " invalid" << endl;
			}
			break;
		}
		case 2:{
			if (shift(0, 1) == true)
			{
				game[0][1] = 'X';
			}
			else
			{
				cout << endl << " invalid" << endl;;
			}
			break;
		}
		case 3:{
			if (shift(0, 2) == true)
			{
				game[0][2] = 'X';
			}
			else
			{
				cout << endl << " invalid" << endl;;
			}
			break;
		}
		case 4:{
			if (shift(1, 0) == true)
			{
				game[1][0] = 'X';
			}
			else
			{
				cout << endl << " invalid" << endl;;
			}
			break;
		}
		case 5:{
			if (shift(1, 1) == true)
			{
				game[1][1] = 'X';
			}
			else
			{
				cout << endl << " invalid" << endl;;
			}
			break;
		}
		case 6:{
			if (shift(1, 2) == true)
			{
				game[1][2] = 'X';
			}
			else
			{
				cout << endl << " invalid" << endl;;
			}
			break;
		}
		case 7:{
			if (shift(2, 0) == true)
			{
				game[2][0] = 'X';
			}
			else
			{
				cout << endl << " invalid" << endl;;
			}
			break;
		}
		case 8:{
			if (shift(2, 1) == true)
			{
				game[2][1] = 'X';
			}
			else
			{
				cout << endl << " invalid" << endl;;
			}
			break;
		}
		case 9:{
			if (shift(2, 2) == true)
			{
				game[2][2] = 'X';
			}
			else
			{
				cout << endl << " invalid" << endl;;
			}
			break;
		}
		default:{
			cout << endl << " Invalid Move!!!" << endl;  //out of box 
		}
		}
	}
}

// Player Two's play
void TicTacToe::move2(int position)
{
	if (Win() != true)
		switch (position){
		case 1:
			if (shift(0, 0) == true)
				game[0][0] = 'O';
			else
				cout << endl << " invalid" << endl;
			break;
		case 2:
			if (shift(0, 1) == true)
				game[0][1] = 'O';
			else
				cout << endl << " invalid" << endl;;
			break;
		case 3:
			if (shift(0, 2) == true)
				game[0][2] = 'O';
			else
				cout << endl << " invalid" << endl;;
			break;
		case 4:
			if (shift(1, 0) == true)
				game[1][0] = 'O';
			else
				cout << endl << " invalid" << endl;;
			break;
		case 5:
			if (shift(1, 1) == true)
				game[1][1] = 'O';
			else
				cout << endl << " invalid" << endl;;
			break;
		case 6:
			if (shift(1, 2) == true)
				game[1][2] = 'O';
			else
				cout << endl << " invalid" << endl;;
			break;
		case 7:
			if (shift(2, 0) == true)
				game[2][0] = 'O';
			else
				cout << endl << " invalid" << endl;;
			break;
		case 8:
			if (shift(2, 1) == true)
				game[2][1] = 'O';
			else
				cout << endl << " invalid" << endl;;
			break;
		case 9:{
			if (shift(2, 2) == true)
				game[2][2] = 'O';
			else
				cout << endl << " invalid" << endl;;
			break;
		default:
			cout << endl << " Invalid Move!!!" << endl;
		}
	}
}

bool TicTacToe::shift(int row, int column)
{
	if (game[row][column] == 'X' || game[row][column] == 'O')
		return false;
	else
		return true;
}


