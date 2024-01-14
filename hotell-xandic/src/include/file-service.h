#pragma once
#include<fstream>
#include<string>

using std::string;

class FileService{
	public:
		std::fstream file;
		string fileName;

		FileService(string fileName);
		
		vector<string> readFromFile();
		void writeToFile(vector<string> input);
		void checkFileOpen() 
};

