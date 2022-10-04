#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string music;
	cout<<"Enter music name ";
	cin>>music;
	
	
	ofstream MyFile("mymusic.txt");
	MyFile<<music<<endl<<"pop";
	MyFile<<"\tMurat \tBoz";
	
	MyFile<<"\nPrice: 12 tl";
	MyFile.close();
	
	
	string music1;
	
	ifstream musicFile1("mymusic.txt");
	
	if (musicFile1.is_open())
	{
		while (getline(musicFile1, music1))
		{
			cout<<music1<<endl;
		}
	
		musicFile1.close();	
	}
	else
	{
		cout<<"Unable to open file";
	}
	
	
	cout<<endl;
	
	ifstream musicFile2("mymusic.txt");
	
	while (!musicFile2.eof())
	{
		musicFile2>>music1;
		cout<<music1<<endl;
	}
	
	musicFile2.close();

    cout<<endl;	
}
