#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){


int first;
int last;


const int array_max = 20; 
int arr[array_max]; 

cout<<"Enter beginning position to output: ";
cin >> first;

cout<<"Enter ending position to output: ";
cin >>last;

ifstream file;
file.open("in.txt");


if(file.is_open()){
	int n=0;

	while(file.good()){

	string num;
	getline(file,num);
	arr[n] = atoi(num.c_str);
n++;
}

}
for(int i = first; i < array_max; i++){
	cout <<arr[i]<<" "<<endl;
	
}











}
