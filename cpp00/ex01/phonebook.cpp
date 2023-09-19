
#include <string>
#include <iostream>

class Contact {
	private:
	std::string fName, lName, nickname, phoneNumber, darkSercret;

	public:
	// set
	void setFName(std::string& fName) {
		this->fName = fName;
	}
	void setLName(std::string& lName) {
		this->lName = lName;
	}
	void setNickname(std::string& nickname) {
		this->nickname = nickname;
	}
	void setPhoneNumber(std::string& phoneNumber) {
		this->phoneNumber = phoneNumber;
	}
	void setDarkSecret(std::string& darkSecret) {
		this->darkSercret = darkSecret;
	}

	//get
	std::string getFName(void) {
		return fName;
	}
	std::string getLName(void) {
		return lName;
	}
	std::string getNickname(void) {
		return nickname;
	}
	std::string getPhoneNumber(void) {
		return phoneNumber;
	}
	std::string getDarkSecret(void) {
		return darkSercret;
	}
};

// class PhoneBook
// {
// 	private:

// 	public:
// 	static int index;
// };


int	main(void)
{
	// PhoneBook::index = 1;
	
	Contact	First;

	std::string fName;

	fName = "Adriano";
	First.setFName(fName);
	std::cout << First.getFName() << std::endl;
	return (0);
}