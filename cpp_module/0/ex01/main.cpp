#include "Phonebook.h"

int main(void)
{
	Phonebook gyumpark_book;
	std::string cmd;

	while (1)
	{
		std::cout << "[Phone_Book]\n";
		std::cout << "(1)ADD\n";
		std::cout << "(2)SEARCH\n";
		std::cout << "(3)EXIT" << std::endl;

		std::getline(std::cin, cmd);

		if (cmd.compare("ADD") == 0)
			gyumpark_book.add();
		else if (cmd.compare("SEARCH") == 0)
			gyumpark_book.search();
		else if (cmd.compare("EXIT") == 0)
			gyumpark_book._exit();
		else
			std::cout<<"Chose Command(1), (2), (3)"<<std::endl;
		std::cin.clear();
		clearerr(stdin);
	}
	return (0);
}
