#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


int main()
{

	std::fstream ReadFile("Text.txt", std::ios::out);//Open and read file

	ReadFile << "Files is fun";//Write to the file
	ReadFile.put('B');
	ReadFile.close();


	std::fstream AppendFile("Text.txt", std::ios::app);//Adds to the file

	AppendFile << "Bruh";
	AppendFile.close();

	std::fstream WriteToFile("Text.txt", std::ios::in);//Open and read file

	//.eof == end of file ... Bruk f.eks while(!MyFile.eof) aka while end of file is not reached
	std::string text;

	while (!WriteToFile.eof()) {//Reads the entire file
		WriteToFile >> text;
		//std::getline(ReadFile);
		std::cout << text << " ";
	}

	WriteToFile.close();//close file (MUST DO)	

}

