#include <iostream>
#include <fstream>
#include <string>

std::string	replaceString(std::string line, std::string s1, std::string s2)
{
	int i = line.find(s1);
	while (i >= 0)
	{
		line.erase(i, s1.size());
		line.insert(i, s2);
		i = line.find(s1);
	}
	return (line);

}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string line;
		std::string fileName;
		std::string inputFileName = argv[1];
		std::ifstream srcFile(inputFileName.c_str());
		if (!srcFile.is_open())
		{
			std::cerr << "Not possible to open the file" << std::endl;
			return (1);
		}
		fileName = inputFileName + ".replace";
		std::ofstream outFile(fileName.c_str());
		if (!outFile.is_open())
		{
			std::cerr << "Not possible to create file" << std::endl;
			return (1);
		}
		while (std::getline(srcFile, line))
			outFile << replaceString(line, argv[2], argv[3]) << std::endl;
		return (0);
	}
	else
		std::cout << "Incorrect number of parameters\n\
		./ex04 [FILE] [REMOVE STRING] [REPLACE STRING]" << std::endl;
	return (1);
}