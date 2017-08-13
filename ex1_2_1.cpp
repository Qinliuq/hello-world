#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char a = '1';
	char* pa = &a;
	cout<<pa<<endl;

	int arr[10]={0};
	int (*parr)[10] = &arr;
	cout<<parr<<endl;	
	int (*test) = arr;
	cout<<test<<endl;

	char arrc[] = {'C','D','F'};
	char (*parrc)[3] = &arrc;
	cout<<parrc<<endl;

	string sa[]={"sfa","kdl"};
	string (*psa)[2] = &sa;

	char** ppa = &pa;

	const int b=10;
	const int* pb = &b;

	const int* const cpb = &b;

	return 0;
}
