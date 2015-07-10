#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#define pb push_back

using namespace std;

int main()	{
	

ifstream fin;
ofstream fout;
string line;

vector<string>vec;


try	{
fin.open("english.txt");
  while(!fin.eof())	{
    getline(fin,line);
     vec.pb(line);
  }
}
catch (ifstream :: failure e)	{
	cerr << "error opening the file\n";
}	

sort(vec.begin(),vec.end());

fout.open("english1.txt");

if(fout.is_open())	{

 for(int i=0;i<vec.size();i++)	
 fout << vec[i] << "\n";
}


return 0;	
}