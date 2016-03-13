#include "TicTacToe.h"


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


TicTacToe::~TicTacToe()
{
}
