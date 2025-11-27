#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter numbers of subjects:";
	cin>>n;
	
	int marks[n];
	cout<<"Enter your marks"<<endl;
	for(int i = 0; i<n; i++){
		cin>>marks[i];
	}
	int highest = marks[0];
	int lowest = marks [0];
	
	for(int i = 1; i<n; i++){
		if (marks[i]>highest )
		highest = marks[i];
		if (marks[i]<lowest)
		lowest = marks[i];
		
	}
	cout<<"Highest marks = "<<highest<<endl;
	cout<<"Lowest marks = "<<lowest<<endl;
	
	return 0;
}

