#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	ifstream matr("matrix_market.txt");
	string line;
	while(getline(matr,line))
	{
		istringstream iss(line);
		string opt;
		iss>>opt;
		if(opt[0]!='%'){
			cout<<"The number of rows, columns and nonzero elements are: "<<endl;
			cout<<opt<<endl;
			for(int i=0;i<2;i++){
				int temp;
				iss>>temp;
				cout<<temp<<'\n';
			}
			break;
		}
		else
			continue;
	}
}
