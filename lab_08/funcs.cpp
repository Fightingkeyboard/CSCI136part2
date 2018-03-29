#include <iostream>
#include <cctype>

using namespace std;


string removeLeadingSpaces(string line){
	int i=0;
	while(isspace(line[i])){
		i++;
	}
	return line.substr(i,line.length()-i);
}

int countChar(string line, char c){
	int o = 0;
	for(int i=0; i<line.length(); i++){
		if(line[i]==c){
			o++;
		}
	}
	return o;
}

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
