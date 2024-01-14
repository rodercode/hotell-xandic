#pragma once

#include<string>
using std::string;

class InputHandler {
	public:
		int convertStringToInt(string input);
		string getUserInput(string prompt);
};
