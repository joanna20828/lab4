#include "SudokuGen.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

void GiveQuestion()
{
	vector <int > board;
	
	int DigSudoku();

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

int DigSudoku()
{
	int d, ka, kb, kc; 
	int Dig[Mid];   // 挖洞順序
   
	for(d=0; d<Mid; d++) Dig[d]=d;
	for(d=0; d<Mid; d++)  // 打亂挖洞順序
	{
		int n = rand()%Mid;
		int t = Dig[n];  Dig[n]=Dig[d]; Dig[d] = t;  //交換     
	}    
	for(d=0; d<Mid; d++)
	{
		Ans=0; kb = -1; kc = Max-Dig[d]-1;
		ka = Board[Dig[d]];  Board[Dig[d]]=0;  // 挖洞
		if (kc!=Dig[d])   // 對稱 
			{
				kb = Board[kc];  
				Board[kc] = 0;
			}
		SolveSudoku(Board);
		if (Ans>1)  // 有多重解, 挖洞需填回
		{
			Board[Dig[d]] = ka;
			if (kb>0) Board[kc] = kb;
      	}
   }
   }
   return 0;
}
