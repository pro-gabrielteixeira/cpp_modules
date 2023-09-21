
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

class PhoneBook
{
	private:
		Contact phonebook[8];
	public:
		// set
		void setFName(int i, std::string& fName) {
			phonebook[i].setFName(fName);
		}
		void setLName(int i, std::string& lName) {
			phonebook[i].setLName(lName);
		}
		void setNickname(int i, std::string& nickname) {
			phonebook[i].setNickname(nickname);
		}
		void setPhoneNumber(int i, std::string& phoneNumber) {
			phonebook[i].setPhoneNumber(phoneNumber);
		}
		void setDarkSecret(int i, std::string& darkSecret) {
			phonebook[i].setDarkSecret(darkSecret);
		}
		// get
		std::string getFName(int i) {
			return phonebook[i].getFName();
		}
		std::string getLName(int i) {
			return phonebook[i].getLName();
		}
		std::string getNickname(int i) {
			return phonebook[i].getNickname();
		}
		std::string getPhoneNumber(int i) {
			return phonebook[i].getPhoneNumber();
		}
		std::string getDarkSecret(int i) {
			return phonebook[i].getDarkSecret();
		}
};

void	searchContacts(PhoneBook& phonebook) {

}

std::string	getInfo(std::string info) {
	std::string str;

	std::cout << info;
	std::getline(std::cin, str);
	while (str == "") {
		std::cout << "Please add the " << info;
		std::getline(std::cin, str);
	}
	return (str);
}

void	addContact(int index, PhoneBook& phonebook) {
	std::string str;

	str = getInfo("First Name:\n> " );
	phonebook.setFName(index, str);
	str = getInfo("Last Name:\n> ");
	phonebook.setLName(index, str);
	str = getInfo("Nickename:\n> ");
	phonebook.setNickname(index, str);
	str = getInfo("Phone Number:\n> ");
	phonebook.setPhoneNumber(index, str);
	str = getInfo("Dark Secret:\n> ");
	phonebook.setDarkSecret(index, str);
	std::cout << "Contact added successfully" << std::endl;
}

int	main(void) {	
	int	index;
	std::string str;
	PhoneBook	phonebook;

	index = 0;
	while (true) {
		if (index == 8)
			index = 0;
		std::cout << "TYPE: ADD/SEARCH/EXIT\n> ";
		std::getline(std::cin, str);
		if (str == "ADD") {
			addContact(index, phonebook);
			index++;
		}
		else if (str == "SEARCH")
			searchContacts(phonebook);
		else if (str == "EXIT")
			break;
		else
			std::cout << " >>> Write ADD/SEARCH/EXIT command <<<" << std::endl;
	}
	for (int j = 0; j < 8; j++) {
		std::cout << "FName: " << phonebook.getFName(j) << std::endl;
		std::cout << "LName: " << phonebook.getLName(j) << std::endl;
		std::cout << "Nickname: " << phonebook.getNickname(j) << std::endl;
		std::cout << "PhoneNumber: " << phonebook.getPhoneNumber(j) << std::endl;
		std::cout << "DarkSecret: " << phonebook.getDarkSecret(j) << std::endl;
	}
	return (0);
}