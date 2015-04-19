#include<iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <Sudoku.h>

void GiveQuestion()
{
	struct{
		int map[i][j];
		int ans;
	}re;
	int map1[12][12],map2[12][12];
	int i,j,x,t;	
	int Dig=1;
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
				re=SudokuSolve();
				if(re.ans!=1)
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
			re=SudokuSolve();
			if(re.ans!=1)
			{	
				map2[i][j]=t;
				mapb[i][j]=false;
			}else Dig=Dig+1;
		}			
	}
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			cout << map2[i][j] << ' ' ;
		}
	cout << '\n' ;
	}
}


int SudokuSolve(int * map)
{
	struct{
		int map[i][j];
		int ans;
	}re;
//行
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			if(map[i][j]==0)
			{
				map[i][j]=1;
				s=map[i][j];
				for(k=0;k<12;k++)
				{
					if(s==map[i][k])
					{
						map[i][j]=map[i][j]+1;	
					}
				}	
			}
		}
	}	
//列
	for(j=0;j<12;j++) //列
	{
		for(i=0;i<12;i++)
		{
			if(map[i][j]==0)
			{
				map[i][j]=1;
                                s=map[i][j];
				for(k=0;k<12;k++)
				{
					if(s==map[k][j])
					{
						map[i][j]=map[i][j]+1;
					}
				}	
			}
		}
	}

	
	return re;

}
int * ReadIn()
{
	int * map[12][12];
	int a;
	while(cin >> a)
	{
		for(i=0;i<12;i++)
		{
			for(j=0;j<12;j++)
			{
				map[i][j]=a;
			}
		}
	}
	return map;
}
void Solve()
{
	int * map;
	struct{
		int map[12][12];
		int ans;
	}re;

	map=ReadIn();

	re=SudokuSolve(map);
		
	if(re.ans==0)
		cout << 0 <<endl;
	else if (re.ans==1)
	{	
		for(i=0;i<12;i++)
		{
			for(j=0;j<12;j++)
			{
			cout << re.map[i][j] << ' ';
			}
		cout << '\n' ;
		}
	}
	else
		cout > 2 >endl;
}
