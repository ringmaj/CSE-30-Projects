#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip> 


using namespace std;


struct Time 
{

int hour;
int minute;
int second;

};


struct Course
{

string name;
int credits;
bool majorRequirement;
double avgGrade;
string days;
Time startTime;
Time endTime;

};

void output()
{
cout<<"−−−−−−−−−−−−−−−−−−−\nSCHEDULE OF STUDENT\n−−−−−−−−−−−−−−−−−−−"<<endl;











}




bool getTimeFromUser(Time &time)
{
string input,hour,minute,second;



getline(cin,input);



  hour = input.substr(0, input.find(":"));
  minute = input.substr(input.find(":")+1, input.find(":"));
  second = input.substr(input.find_last_of(":")+1,input.find_last_of(":")+2 );


time.hour = atoi(hour.c_str());
time.minute = atoi(minute.c_str());
time.second = atoi(second.c_str());


if(time.hour >24 || time.minute> 59 || time.second >59)
{

return false;
}


return true;
}



int main()
{





output();

































return 0;
}





