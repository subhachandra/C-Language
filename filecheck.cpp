#include<iostream>
   #include<fstream>
#include<string>
#include<vector>
   using namespace std;
 
  int main()
  {
vector<string> g1;  

//vector<string>::iterator i;
   // open the file
     ofstream userData;
     ofstream userData2;
     string name, title;
 
     cout << "Enter your name: ";
	     cin>>name;
  
     cout << "Enter your favourite movie: ";
     cin>>title;
     userData.open("userData.txt",ios::app);
      userData<<"user name is "<<name;
	g1.push_back(name);
     userData<<"\n your favirote movie is :" <<title;
     userData<<"\n";
    g1.push_back(title);
  userData.close();
  string line;
  ifstream readdata ("userData.txt");
userData2.open("userData2.txt");
  if (readdata.is_open())
  {
    while ( getline (readdata,line) )
    {
      cout << line << '\n';
    
    userData2<<line<<'\n';
  
    }
    readdata.close();
    userData2.close();
  }

  else cout << "Unable to open file";

   cout<<"\n vec data is:\n"<<g1.at(0);
   cout<<"\n vec data title is: \n"<<g1.at(1);

}
