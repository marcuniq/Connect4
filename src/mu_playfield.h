
#ifndef MU_PLAYFIELD_H_
#define MU_PLAYFIELD_H_

#include "playfield.h"

class mu_playfield : public playfield {

public:
	// constructor
	mu_playfield();

	void setstoneat(int x, int y, int playerNo);

	// copy constructor
	mu_playfield(const playfield &field);

	// assignment operator
	mu_playfield& operator=(playfield &field);

	// destructor
	~mu_playfield();


	bool checkHorizontal(int playerNo);
	bool checkVertical(int playerNo);
	bool checkDiagonal(int playerNo);
	bool checkWin(int playerNo);
	bool checkFull();
	void printField();

};

#endif /* MU_PLAYFIELD_H_ */
