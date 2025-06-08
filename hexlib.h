/*
 * 	This is the header file for the library of hex game
 * 	Contains the declarations of the functions used in the program
 *
 */
 
 #include<vector>

#ifndef HEXLIB_H
#define HEXLIB_H

enum Content{x = 'x', cx = 'X', co = 'O', o = 'o', dot = '.', star = '*'}; //cx is capital x, co is capital o
static int mark;

class Hex{
public:
	int size, player, last_num;
	char last_letter;
	Hex(int row, int col);
	Hex(int row);
	Hex();
	void playGame();
	void save_game(int player, int computer, std::string input, char last_letter, int last_num);
	void load_game(std::string input);
	int width();
	int height();
	void print_board();
	void fill_board();
	int x_win();
	int o_win();
	void add_move(char letter, int num, int player);
	void play();
	void play(char letter, int num);
	static int marked();
	bool compare();
	void user_vs_user();
	void user_vs_computer(char last_letter,char last_num);
private:

	class Cell{
	public:
		void setCol(char letter){	col = letter;}
		char getCol(){			return col;}
		void setRow(int num){		row = num;}
		int getRow(){			return row;}
		void setCont(Content tempCont){	cont = tempCont;}
		Content getCont(){		return cont;}
	private:
		char col; // column
		int row;
		Content cont;
	};
	std::vector<std::vector<Cell> > hexCells;
	std::vector<std::vector<Cell> > check;
	std::vector<std::vector<Cell> > game;

};

#endif
