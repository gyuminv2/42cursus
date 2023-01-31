#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Contact.h"

# define EXIT 0
# define TRUE 1
# define FALSE 0

class Phonebook
{
	private:
        int idx;
		Contact arr[8];
	public:
		Phonebook(void);
        void    add(void);
		void	search(void);
		void	_exit(void);
        void    sort_(std::string print);
        void    show(int i);
		void	show_detail(void);
		bool	is_empty(int i);
        void    info(int i);
};

#endif
