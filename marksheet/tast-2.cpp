#include <iostream>
using namespace std;

int main(){
	int eng,urdu,phy;
	float obtMarks,per;
	
	cout<<"================================== \n";
	cout<<"          MarkSheet               \n";
	cout<<"================================== \n\n";
	
	cout <<"Enter Marks of English";
	cin>> eng;
	cout <<"Your Marks of English are: "<<eng<<endl;
	
	cout <<"Enter Marks of Urdu";
	cin>> urdu;
	cout <<"Your Marks of English are: "<<urdu<<endl;
	
	cout <<"Enter Marks of Physics";
	cin>> phy;
	cout <<"Your Marks of phy are: "<<urdu<<endl <<endl;
	
	obtMarks=eng+urdu+phy;
	cout<<"Your Total obtain marks are: "<<obtMarks<<endl<<endl;
	
	per=obtMarks*100/300.0;
	cout<<"Your percentage is: "<<per;
}
