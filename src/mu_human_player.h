
#ifndef MU_HUMAN_PLAYER_H_
#define MU_HUMAN_PLAYER_H_

#include <cstdlib>
#include <string>

template<typename F>
class mu_human_player : public player<F>{
public:
	int play(const F &field){
		int selectedCol = -1;
		std::string input;

		while(selectedCol > field.width || selectedCol < 0) {
			std::cout << "Please enter your selected column (or 'q' to quit): ";
			std::cin >> input;
			std::cout << std::endl;

			if(input == "q") {
				return -1;
			}

			selectedCol = atoi(input.c_str());
		}

		return selectedCol;
	}
};

#endif /* MU_HUMAN_PLAYER_H_ */
