// Problem Title: Riya’s Secret Word
// 🧩 Problem Story:

// Riya loves creating secret words.
// She calls a word “Perfect Secret Word” if it reads the same forward and backward.

// For example, words like madam, noon, and level are her favorites because they look the same from both sides!

// Now, she wants your help to check whether her word is a Perfect Secret Word or not.

// Your Task:

// Write a program that takes a string as input and prints:

// "Perfect Secret Word" — if the string is a palindrome.

// "Not a Secret Word" — if it is not.

// Input Format:

// A single word (string) entered by the user.

// 📤 Output Format:

// A single line of text:
// Either "Perfect Secret Word" or "Not a Secret Word"


#include <iostream>
using namespace std;
int main(){
	string word;
	cin>>word;
	string reversed = string(word.rbegin(), word.rend());
	 
	if(word == reversed )
	cout<<"Perfect Secret Word";
	else 
	cout<<"Not a Secret Word";
	return 0;
}

