#include "SudokuGen.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

void GiveQuestion()
{
	vector <int > board;

	

	PrintBoard(board);	
}

void PrintBoard(vector <int > board)
{
	for (int i=0;i<board.size();i++)
    	{
        	cout << board[i] << ' ';
		if ((i+1) % 12 == 0)
        	{
         		cout << endl;
        	}
    	}
    cout << endl;
}
