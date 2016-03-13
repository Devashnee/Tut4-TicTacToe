#include "TicTacToe.h"
#pragma once
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int p;

	TicTacToe Tic;
	Tic.Instructions();


start:{
	string playr1, playr2;

	cout << "Tic Tac Toe" << endl;
	cout << " ----------------------------" << endl;

	cout << " First player enter name: "; cin >> playr1;
	cout << " Second player enter name: "; cin >> playr2;
	cout << endl << endl;

	while (Tic.Win() != true || Tic.Draw() != true)
	{
		// Player One
		cout << endl << " " << playr1 << " your Turn (X): "; cin >> p; Tic.move1(p);
		cout << endl;

		if (Tic.Win() == true)
		{
			cout << " " << playr1 << " WIN!" << endl; Tic.print(); cout << endl << endl;
			break;
		}
		else if (Tic.Draw() == true)
		{
			cout << " Draw!" << endl; Tic.print(); cout << endl << endl;
			break;
		}

		Tic.print();
		cout << endl << endl;

		// Player Two
		cout << " " << playr2 << " your Turn (O): "; cin >> p; Tic.move2(p);
		cout << endl;

		if (Tic.Win() == true)
		{
			cout << " " << playr2 << " YOU WIN!" << endl; Tic.print(); cout << endl << endl;
			break;
		}
		else if (Tic.Draw() == true)
		{
			cout <<""<<playr1<<" "<<playr2<<"you Draw!" << endl; Tic.print(); cout << endl << endl;
			break;
		}

		Tic.print();
		cout << endl;
	}
}
	int choice;
	cout  << endl;
	cout << " 1>New game." << endl << " 2>Exit." << endl << " > ";

nwGmOrExt:{

	cin >> choice;

	switch (choice)
	{
	case 1:{
		Tic.reset();
		cout << endl;
		Tic.print();
		goto start;
		break;
	}
	case 2:{
		break;
	}
	default:{
		cout << " Invalid option play again." << endl;
		goto nwGmOrExt;
	}
	}
}

	cout << endl << endl << endl;

	return 0;
}