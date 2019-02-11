#ifndef CHESSBOARD_H
#define CHESSBOARD_H

class Chessboard {

protected:
	int size;
private:
	Square square_tab[];

public:
	int getSize();

	Chessboard();

	void colouring();
};

#endif
