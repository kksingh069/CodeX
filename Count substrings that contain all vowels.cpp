// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function that returns true if c is a vowel
bool isVowel(char c)
{
	return (c == 'a' || c == 'e' || c == 'i'
			|| c == 'o' || c == 'u');
}

// Function to return the count of sub-strings
// that contain every vowel at least
// once and no consonant
int countSubstringsUtil(string s)
{
	int count = 0;

	// Map is used to store count of each vowel
	map<char, int> mp;

	int n = s.length();

	// Start index is set to 0 initially
	int start = 0;

	for (int i = 0; i < n; i++) {
		mp[s[i]]++;

		// If substring till now have all vowels
		// atleast once increment start index until
		// there are all vowels present between
		// (start, i) and add n - i each time
		while (mp['a'] > 0 && mp['e'] > 0
			&& mp['i'] > 0 && mp['o'] > 0
			&& mp['u'] > 0) {
			count += n - i;
			mp[s[start]]--;
			start++;
		}
	}

	return count;
}

// Function to extract all maximum length
// sub-strings in s that contain only vowels
// and then calls the countSubstringsUtil() to find
// the count of valid sub-strings in that string
int countSubstrings(string s)
{
	int count = 0;
	string temp = "";

	for (int i = 0; i < s.length(); i++) {

		// If current character is a vowel then
		// append it to the temp string
		if (isVowel(s[i])) {
			temp += s[i];
		}

		// The sub-string containing all vowels ends here
		else {

			// If there was a valid sub-string
			if (temp.length() > 0)
				count += countSubstringsUtil(temp);

			// Reset temp string
			temp = "";
		}
	}

	// For the last valid sub-string
	if (temp.length() > 0)
		count += countSubstringsUtil(temp);

	return count;
}

// Driver code
int main()
{
	string s = "aeouisddaaeeiouua";

	cout << countSubstrings(s) << endl;

	return 0;
}
