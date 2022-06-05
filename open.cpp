#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st1;
    string st2;


     getline(cin, st1);
     ofstream writing;
     writing.open("jenish.txt");
     writing << st1<<endl;
     writing<<st1 <<"this is second line";
     writing.close();
    
    

        ifstream reading("jenish.txt");
        getline(reading, st2);
        cout << st2;
    

    return 0;
}