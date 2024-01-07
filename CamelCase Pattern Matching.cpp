// C++ to find CamelCase Pattern
// matching
#include "bits/stdc++.h"
using namespace std;

// Function that prints the camel
// case pattern matching
void CamelCase(vector<string>& words, string pattern)
{

	// Map to store the hashing
	// of each words with every
	// uppercase letter found
	map<string, vector<string> > map;

	// Traverse the words array
	// that contains all the
	// string
	for (int i = 0; i < words.size(); i++) {

		// Initialise str as
		// empty
		string str = "";

		// length of string words[i]
		int l = words[i].length();
		for (int j = 0; j < l; j++) {

			// For every uppercase
			// letter found map
			// that uppercase to
			// original words
			if (words[i][j] >= 'A' && words[i][j] <= 'Z') {
				str += words[i][j];
				map[str].push_back(words[i]);
			}
		}
	}

	bool wordFound = false;

	// Traverse the map for pattern
	// matching
	for (auto& it : map) {

		// If pattern matches then
		// print the corresponding
		// mapped words
		if (it.first == pattern) {
			wordFound = true;
			for (auto& itt : it.second) {
				cout << itt << endl;
			}
		}
	}

	// If word not found print
	// "No match found"
	if (!wordFound) {
		cout << "No match found";
	}
}

// Driver's Code
int main()
{
	vector<string> words
		= { "Hi",		 "Hello", "HelloWorld",
			"HiTech",	 "HiGeek", "HiTechWorld",
			"HiTechCity", "HiTechLab" };

	// Pattern to be found
	string pattern = "HT";

	// Function call to find the
	// words that match to the
	// given pattern
	CamelCase(words, pattern);

	return 0;
}
