#define SIZE 12
#include<iostream>
#include<vector>

using namespace std;

class Sudoku{
	public:
		Sudoku();
		vector<int > get_board();
		void GiveQuestion();
		void PrintBoard(vector <int > board);
			
	private:
		int new_board[SIZE][SIZE];
}
