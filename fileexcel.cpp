#include <iostream>
#include <fstream>
#include<string>

using namespace std;
int main()
{
ofstream MyExcelFile;
/*MyExcelFile.open("excel.csv");

MyExcelFile << "First Name, Last Name, Middle Initial" << endl;
MyExcelFile << "swarna, latha, j." << endl;
MyExcelFile.close();*/
ifstream file("excel.csv");
ofstream file1;
string line;
file1.open("excel1.txt");
if(file.is_open())
{
while(getline(file,line))
{
cout<<line;
file1<<line;
}
}
file.close();
file1.close();
return 0;
} 
