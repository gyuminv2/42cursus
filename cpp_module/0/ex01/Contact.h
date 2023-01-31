#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
    private:
        std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
    public:
        void save_contact(void);
        std::string get_First_name(void);
        std::string get_Last_name(void);
        std::string get_Nick_name(void);
        std::string get_Phone_number(void);
        std::string get_Secret(void);
        bool check_buffer(void);
        bool check_info(std::string str);
};

#endif