#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()
{
    set<int> g1;
    set<int>::iterator it;
set<char>::iterator it1;
    g1.insert(10);
    g1.insert(30);
    g1.insert(50);
    g1.insert(60);
    g1.insert(40);
    g1.insert(20);
    g1.insert(90);
    g1.insert(80);
    g1.insert(10);
    g1.insert(30);
    for(it=g1.begin();it!=g1.end();it++)
    {
        cout<<*it<<endl;
    }
/*	g1.iterator insert(70);
for(it=g1.begin();it!=g1.end();it++)
    {
        cout<<*it<<endl;
    }*/

set<char>g2;
	g2.insert('b');
    g2.insert('d');
    g2.insert('a');
    g2.insert('a');
    g2.insert('c');
    g2.insert('e');
    g2.insert('a');
    g2.insert('f');
for(it1=g2.begin();it1!=g2.end();it1++)
    {
        cout<<*it1<<endl;
    }

cout<<g2.find('c');
}


