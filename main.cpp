//Program:
// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;
bool areEqual(string Mary1, string  Mary2)
{

    string myText;
	ifstream MyReadFile,
		MyReadFile2;
	MyReadFile.open(Mary1, ios::binary);
	MyReadFile2.open(Mary2 ,ios::binary);  // Use a while loop together with the getline() function to read the file line by line
    int c1,c2;
	c1 = 0; c2 = 0;
	string str;
	while(!MyReadFile.eof())
	{
		getline(MyReadFile,str);
		c1++;
	}
	MyReadFile.clear();   //  set new value for error control state  //
	MyReadFile2.seekg(0,ios::beg);
	while(!MyReadFile2.eof())
	{
		getline(MyReadFile2,str);
		c2++;
	}
	MyReadFile2.clear();
	MyReadFile2.seekg(0,ios::beg);
	
 	if(c1 != c2) 
	{
		cout << "Different number of lines in files!" << "\n";
		cout << "MyReadFile has " << c1 << " lines and MyReadFile2 has " 
				     << c2 << " lines" << "\n";  
	}
//---------- compare two files line by line ------------------//
	char string1[256], string2[256];
	int j = 0;
	while(!MyReadFile.eof())
	{
		MyReadFile.getline(string1,256);
		MyReadFile2.getline(string2,256);
		j++;
		if(strcmp(string1,string2) != 0)
		{
			cout << j << "-the strings are not equal" << "\n";
			cout << "   " << string1 << "\n";
			cout << "   " << string2 << "\n";
		}
		
	}
	
	return true;
  //  MyReadFile.close();
 

}
int main()
{
    ofstream myfile();

    string a = "C:\\Users\\shahzaib.hassan\\Desktop\\File\\file.text";
    string b = "C:\\Users\\shahzaib.hassan\\Desktop\\File\\Myfile.text";

    if(areEqual(a, b))
        cout << "Yes";
    else
    cout << "No";
    return 0;
}
