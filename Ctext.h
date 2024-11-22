#ifndef CTEXT_H
#define CTEXT_H

#include <string>

class TextBox {
public:
	//Default construcor
	TextBox();

	//Constructur using explicit keyword
	explicit TextBox(const std::string object);
private:
	std::string value; 
};

#endif
