//DEVLOP TELEPHONE DICTORY -WITH IMPLEMENT THAT FUNCTION READ DATA,APPENDDATA,FINDDATA,DELETDATA

#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;
class tele_daires//make object for read and write person name and tele no
{
    char name[10];
    long long int telno;

public:
    //TAKE INPUT FROM USER
    void getdata()
    {
        cout << "enter name, telno\n";
        cin >> name >> telno;
    }
    //return person name
    char* returnname()
    {
        return name;
    }
    // SHOW OBJECT DETAIL
    void putdata()
    {
        cout << "--------------------------------------------------------------------" << endl
             << endl;
        cout << "name : " << name << endl
             << "telno : " << telno << endl;
        cout << "--------------------------------------------------------------------" << endl
             << endl;
    }
};
void readdatafromfile()
{
    tele_daires person;
    fstream inout;
    inout.open("telephone.txt", ios::in); //OPEN MENU.TXT FILE INPUT MODE
    cout << "current content\n";
    while (inout.read((char *)&person, sizeof(person))) //READ DATA
    {
        person.putdata();
    }
    inout.close(); //CLOSE FILE
}
void insertdata()
{
    tele_daires person;
    fstream inout;
    inout.open("telephone.txt", ios::out | ios::app); //OPEN MENU.TXT FILE OUTPUT MODE AND APPEND MODE
    cout << "add any person";
    person.getdata();
    inout.seekp(0, ios::end);                 //PUT POINTER AT END OF FILE
    inout.write((char *)&person, sizeof(person)); //INSERT DATA INTOFILE
    inout.close();
}
void finddata()
{
    tele_daires person;
    fstream inout;
    inout.open("telephone.txt", ios::in | ios::out | ios::ate); //OPEN MENU.TXT FILE INPUT, OUTPUT MODE AND ATE MODE
    char nameoffind[50];
    cout << "please enter name of that data you want to update" << endl;
    cin >> nameoffind;
    while (inout.read((char *)&person, sizeof(person)))
    {
        if (person.returnname() == nameoffind)
        {
            person.putdata();//display data
        }
    }
    inout.close();
}
void deletedata()
{
    tele_daires person;
    fstream inout;
    inout.open("telephone.txt", ios::in | ios::out | ios::ate); //OPEN MENU.TXT FILE INPUT, OUTPUT MODE AND ATE MODE
    fstream temp;
    temp.open("telephone1.txt", ios::in | ios::out); //MAKE TEMPARORY FILE FOR WRITE DATA WITHOUT WRITE USER WANT TO DLT
                                               // DATA
    char name[50];
    cout << "please enter name of that person you want to delete" << endl;
    cin >> name;
    inout.seekg(0, ios::beg);
    while (inout.read((char *)&person, sizeof(person)))
    { 
        if (person.returnname() != name)
        {
            temp.write((char *)&person, sizeof(person)); //WRITE DATA INTO TEMP FILE NOT WRITE THAT DATA USER WANT TO DLT
        }
    }
    inout.close();
    temp.close();
    inout.open("telephone.txt", ios::in | ios::out | ios::trunc);
    temp.open("telephone1.txt", ios::in | ios::out); //REOPEN BOTH FILE TEMP FILE DATA COPY INTO MAIN DATA STORAGE FILE
    while (temp.read((char *)&person, sizeof(person)))
    {
        inout.write((char *)&person, sizeof(person));
    }
    inout.close();
    temp.close();
}
int main()
{
    tele_daires person;
    fstream inout;
    inout.open("telephone.txt", ios::out | ios::ate);
    int n;
    cout << "how many data enter : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* telno */
        person.getdata();
        inout.write((char *)&person, sizeof(person));//take data from user make menu 
    }
    inout.close();
    int switc;
    while (1)
    {
        cout << "1. FOR READ DATA FROM FILE.." << endl
             << "2. FOR INSERT DATA INTO FILE.." << endl;
        cout << "3.FOR FIND DATA INTO FILE.." << endl
             << "4.DELETE DATA INTO FILE" << endl;
        cout << "5.FOR COMPLATE PROGRAMM EXECUTION.." << endl;//instruction

        cin >> switc;
        switch (switc)//use switch for PERFORM DIFFERENT OPERATION 
        {
        case 1:
            readdatafromfile();
            break;
        case 2:
            insertdata();
            break;
        case 3:
            finddata();
            break;
        case 4:
            deletedata();
            break;
        case 5:
            break;
            break;

        default:
            break;
        }
    }

    return 0;
}
