/*snakeEyes.cpp
*Feb 27, 2017
*Jayson Mallari
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	int die1,die2, count;
	srand(time(0));
	for(int x=1;x<=100;x++){
		die1=rand()%6 + 1;
		die2=rand()%6 + 1;

	cout<<x<<" .";
	cout<<setw(7)<<die1<<setw(7)<<die2;

	if(die1==1 && die2==1){
		string s ="  :Snake Eyes";
		cout<<setw(7)<<s;
		count +=1;
	}
	cout<<endl;
	}

	cout<<"We have "<<count<<" Snake Eyes"<<endl;
return 0;
}
