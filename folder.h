#include<iostream>
#include<string>
using namespace std;

class folder {
	string folName;

public:
	folder *nextFolder, *prevFolder, *rightFolder, *leftFolder;
	
	folder() { 
		nextFolder = prevFolder = rightFolder = leftFolder = NULL; 
	}

	folder(string name) {
		folName = name;
		nextFolder = prevFolder = rightFolder = leftFolder = NULL;
	}

	void setFolderName(string name) {
		folName = name;
	}

	string getFolderName() {
		return folName;
	}

	bool isFolderEmpty() {
		if (!nextFolder)
			return true;
		else
			return false;
	}

	bool isFolderNotEmpty() {
		if (!nextFolder)
			return false;
		else
			return true;
	}

	void printName() {
		cout << folName;
	}
};
#pragma once
