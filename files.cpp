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
     writing<<"this is second";
     writing.close();
    
    

        ifstream reading;
        reading.open("jenish.txt");
        reading.eof();
        //  getline(reading, st2);
        while (!reading.eof())
        {
            /* code */
             getline(reading, st2);
        cout << st2;

        }
        
           

    return 0;
}