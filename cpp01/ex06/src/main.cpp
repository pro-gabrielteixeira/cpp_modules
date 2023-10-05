#include "../includes/Harl.hpp"

int main(int argc, char **argv) {
	Harl t;

	if (argc > 1)
		t.complain(argv[1]);
	else
		t.complain("DEBUG");

}