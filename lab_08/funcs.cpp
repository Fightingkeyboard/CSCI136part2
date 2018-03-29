#include <iostream>
#include <cctype>

//using a namespace
using namespace std;

string removeLeadingSpaces(string line){
	
	//counter
	int i=0;

	//while loop to find first !space
	while(isspace(line[i])){
		i++;
	}

	//returns line without leading spaces
	return line.substr(i,line.length()-i);
}

int countChar(string line, char c){
	
	//counter
	int o = 0;

	//for loops to find matches to c, adding to o every time matched
	for(int i=0; i<line.length(); i++){
		if(line[i]==c){
			o++;
		}
	}
	return o;
}

//Trying to read from a file to test? I only inputted from the terminal
/*
int main(){
	
	fstream fin;
	fin.open("tests.cpp");
	if(!fin){
		cout << "Unable to open file";
		exit(1);
	}

	string indent = "";
	string l;
	while (fin >> l){
		indent += removeLeadingSpaces(l);
	}

	fin.close();

	cout << indent << endl;
}
*/