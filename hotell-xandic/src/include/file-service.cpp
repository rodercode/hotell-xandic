#include<iostream>
#include<vector>
#include "file-service.h"

using std::string;
using std::vector;
using std::ios;

FileService::FileService() {
    this->fileName = fileName;
}

vector<string> FileService::readFromFile(){
    vector<string> text;
    string line;

    File.open(FileName, ios::in);

    while (getline(File, line))
    {
        text.push_back(line);
    }

    File.close();

    return text;
};

void FileService::writeToFile(vector<string> input){
    file.open(fileName, ios::out | ios::app);
    for (string text : input)
        file << text << '\n';

    file.close();
}

void FileService::checkFileOpen(){
    if (!File.is_open())
    {
        cout << "File not found: " << FileName << '\n';
        exit(1);
    }
}



