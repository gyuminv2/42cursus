#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
    public:
        std::string ideas[100];
    public:
        Brain();
		Brain(const Brain &instance);
		Brain& operator=(const Brain &instance);
		virtual ~Brain();
    public:
        std::string* getIdeas(void);
        void setIdeas(std::string idea);
};

#endif