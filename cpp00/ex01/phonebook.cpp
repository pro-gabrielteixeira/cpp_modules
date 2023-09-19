
#include <iostream>

class PhoneBook
{
	private:

	public:

	void subscribe() {
		std::cout << "Subscribe this channel\n";
	}

	void like() {
		std::cout << "Like this video and activate the bell\n";
	}
};

class Car {
	private:
	int	year;
	float amount, km;

	public:
	void SetYear(int year) {
		this->year = year;
	}
	int	GetYear(void) {
		return year;
	}
};

int	main(void)
{
	PhoneBook channel;

	channel.subscribe();
	channel.like();
	return (0);
}