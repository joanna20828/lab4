#include "SudokuGen.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <Sudoku.h>

void GiveQuestion()
{
	int map1[12][12],map2[12][12];
	vector <int > board;
	
//複製棋盤
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			map1[i][j]=new_board[i][j];
		}
	}
//改數字
	srand(time(NULL));
	x=rand()%9;
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			if(map[i][j]!=-1)
			{
				map2[i][j]=map1[i][j]+x;
				if(map2[i][j]>9)
					map2[i][j]=map2[i][j]-9;
			}
		}
	}
/*挖洞
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			if(map2[i][j]!=-1)
			{
				t=map2[i][j];
				map2[i][j]=0;
				Ans=SudokuSolve();
				if(Ans!=1)
					map2[i][j]=t;
			}
		}	
	} */
	
//挖洞2
	bool mapb[i][j];
	while(Dig<15)
	{
		srand(time(NULL));
		i=rand()%11;
		j=rand()%11;
		if(mapb[i][j])
		{
			t=map2[i][j];
			map2[i][j]=0;
			if(SudokuSolve()!=1)
			{	
				map2[i][j]=t;
				mapb[i][j]=false;
			}else Dig=Dig+1;
		}			
	}


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

