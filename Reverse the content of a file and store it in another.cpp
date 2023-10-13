#include <conio.h> 
#include <fstream.h> 
#include <iostream.h> 
#include <stdio.h> 

// function to perform the task 
// accepts the parameter str as the text to 
// be stored in text file 
void reverse(char str[]) 
{ 
	char ch; 
	ofstream ofs; 

	// created text file 
	ofs.open("Geeks.txt", ios::out); 

	for (int i = 0; str[i] != '\0'; i++) { 
		// writing into the file 
		ofs.put(str[i]); 
	} 

	// storing the position of end of the file 
	int pos = ofs.tellp(); 
	ofs.close(); 

	// object for reading the contents of the 
	// first text file 
	ifstream ifs; 
	ifs.open("Geeks.txt", ios::in); 

	// object for writing in to the text file 2 
	ofstream ofs1; 
	ofs1.open("Geeks2.txt", ios::out); 

	// putting the read pointer to the last alphabet 
	// of the file 
	ifs.seekg(--pos); 

	while (pos >= 0) { 
		// reading from the file 1 
		ifs.get(ch); 

		// writing to the file 2 
		ofs1.put(ch); 

		/* shifting read pointer position one 
		alphabet backwards in the text file */
		pos--; 

		ifs.seekg(pos); 
	} 

	ifs.close(); 
	ofs1.close(); 

	ifstream ifs1; 
	ifs1.open("Geeks2.txt", ios::in); 

	// file.eof() checks the end of the text file 
	while (!ifs1.eof()) { 
		ifs1.get(ch); 
		cout << ch; 
	} 
	ifs1.close(); 
} 

// Driver code 
int main() 
{ 
	clrscr(); 

	// sample input 1 
	cout << "example 1: (Geeks For Geeks) \n"; 

	// passing first text file's text 
	// through reverse function 
	reverse("Geeks For Geeks"); 

	// sample input 2 
	cout << "\n example 2:(reverse)\n"; 
	reverse("reverse"); 

	getch(); 
	return 0; 
} 
