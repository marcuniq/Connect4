
#include <iostream>
#include "connect4.h"
#include "mu_playfield.h"
#include "mu_human_player.h"
#include "mu_ai_player.h"

using namespace std;

int main(int argc, const char* argv[]) {

	connect4<mu_playfield, mu_human_player<mu_playfield>, mu_ai_player<mu_playfield>> game;
	game.runGame();

	return 0;
}
