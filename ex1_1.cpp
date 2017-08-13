#include <iostream>
#include <fstream>

int main()
{
	int age;
	std::ofstream age_file;
	age_file.open("age.txt");
	std::cout<<"What's your age?"<<std::endl;
	std::cin>>age;
	age_file<<age<<std::endl;
	age_file.close();
}
