#ifndef SQUARE_H
#define SQUARE_H

class Square {

private:
	boolean colour;
	int x;
	int y;
	Chessman chessman;

public:
	boolean isEmpty();

	boolean isWhite();

	Chessman getChess();
};

#endif
