#include "../includes/Harl.hpp"

int main(void) {
	Harl t;
	std::string arrayHarl[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "WARNINGG"};

	for (int i = 0; i < 5; i++)
		t.complain(arrayHarl[i]);
}