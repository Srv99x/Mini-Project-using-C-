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
