#include <iostream>
#include <string>

using namespace std;

int main() {

int numTimes;
int numWrongLine;

cout << "Enter the number of lines for the punishment: " <<endl;
cin >> numTimes;

	if(numTimes <= 0) {
		cout<< "You entered an incorrect value for the number of lines!"<< endl;
		numTimes = -1;
}
	else {

cout << "Enter the line for which we want to make a typo: " << endl;
cin >> numWrongLine;
	if(numWrongLine <= 0 || numWrongLine > numTimes){
		cout<< "You entered an incorrect value for the line typo!"<<endl;

	}

	

if(numWrongLine >0 && numWrongLine <= numTimes){
		for( int i = 1; i<= numTimes; i++){
			if( i == numWrongLine ) {
				cout <<"I will always use object oriented programing. ";
			}
			else {
		cout << "I will always use object oriented programming. ";
		}


}

}
}






return 0;

}
