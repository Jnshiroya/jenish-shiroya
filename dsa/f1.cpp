#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("countray");
    fout << "united states of america\n";
    fout << "india\n";
    fout.close();
    fout.open("capital");
    fout << "washington\n";
    fout << "delhi\n";
    fout.close();
    char line[80];
    ifstream fin;
    fin.open("countray");
    while (fin)
    {
        fin.getline(line, 80); //fin>>line; you get word upto space
        cout << line << endl;
    }
    fin.close();
 fin.open("capital");
 while(fin)
 {
 fin.getline(line,80);
    cout<<line<<endl;

 }
 fin.close();
 return 0;
}

