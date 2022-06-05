#include <iostream>
#include <fstream>
using namespace std;
class menu_daires
{
    char name[10];
    int idno;
    char address[50];

public:
    //TAKE INPUT FROM USER
    void getdata()
    {
        cout << "enter name, idno and address\n";
        cin >> name >> idno >> address;
    }
    int retcode()
    {
        return idno;
    }
    // SHOW OBJECT DETAIL
    void putdata()
    {
        cout << "--------------------------------------------------------------------" << endl
             << endl;
        cout << "name : " << name << endl
             << "idno : " << idno << endl
             << "address : " << address << endl;
        cout << "--------------------------------------------------------------------" << endl
             << endl;
    }
};
void readdatafromfile()
{
    menu_daires item;
    fstream inout;
    inout.open("menu.txt", ios::in); //OPEN MENU.TXT FILE INPUT MODE
    cout << "current content\n";
    while (inout.read((char *)&item, sizeof(item))) //READ DATA
    {
        item.putdata();
    }
    inout.close(); //CLOSE FILE
}
void insertdata()
{
    menu_daires item;
    fstream inout;
    inout.open("menu.txt", ios::out | ios::app); //OPEN MENU.TXT FILE OUTPUT MODE AND APPEND MODE
    cout << "add any item";
    item.getdata();
    inout.seekp(0, ios::end);                 //PUT POINTER AT END OF FILE
    inout.write((char *)&item, sizeof(item)); //INSERT DATA INTOFILE
    inout.close();
}
void updatedata()
{
    menu_daires item;
    fstream inout;
    inout.open("menu.txt", ios::in | ios::out | ios::ate); //OPEN MENU.TXT FILE INPUT, OUTPUT MODE AND ATE MODE
    int idno;
    cout << "please enter idno of that data you want to update" << endl;
    cin >> idno;
    int object = 0;
    inout.seekg(0, ios::beg);
    while (inout.read((char *)&item, sizeof(item))) //THIS WHILE LOOP FOR FIND LOCATION OF USER WANT TO UPDATE
    {
        if (item.retcode() == idno)
        {

            break;
        }
        object++;
    }
    inout.seekg(0, ios::beg); //GET POINTER AT STARTING OF FILE
    int loc = (object) * sizeof(item);
    if (inout.eof())
        inout.clear();
    cout << "enter new item\n";
    item.getdata();
    inout.seekp(loc, ios::beg);               //PUT POINTER AT LOCATION OF USER WANT TO UPDATE THE DATA
    inout.write((char *)&item, sizeof(item)); //OVERRIDE OLD DATA AND WRITE UPDATE DATA
    inout.close();
}
void deletedata()
{
    menu_daires item;
    fstream inout;
    inout.open("menu.txt", ios::in | ios::out | ios::ate); //OPEN MENU.TXT FILE INPUT, OUTPUT MODE AND ATE MODE
    fstream temp;
    temp.open("temp.txt", ios::in | ios::out); //MAKE TEMPARORY FILE FOR WRITE DATA WITHOUT WRITE USER WANT TO DLT
                                               // DATA
    int idno;
    cout << "please enter idno of that data you want to delete" << endl;
    cin >> idno;
    inout.seekg(0, ios::beg);
    while (inout.read((char *)&item, sizeof(item)))
    {
        if (item.retcode() != idno)
        {
            temp.write((char *)&item, sizeof(item)); //WRITE DATA INTO TEMP FILE NOT WRITE THAT DATA USER WANT TO DLT
        }
    }
    inout.close();
    temp.close();
    inout.open("menu.txt", ios::in | ios::out | ios::trunc);
    temp.open("temp.txt", ios::in | ios::out); //REOPEN BOTH FILE TEMP FILE DATA COPY INTO MAIN DATA STORAGE FILE
    while (temp.read((char *)&item, sizeof(item)))
    {
        inout.write((char *)&item, sizeof(item));
    }
    inout.close();
    temp.close();
}
int main()
{
    menu_daires item;
    fstream inout;
    inout.open("menu.txt", ios::out | ios::ate);
    int n;
    cout << "how many data enter : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* idno */
        item.getdata();
        inout.write((char *)&item, sizeof(item));//take data from user make menu 
    }
    inout.close();
    int switc;
    while (1)
    {
        cout << "1. FOR READ DATA FROM FILE.." << endl
             << "2. FOR INSERT DATA INTO FILE.." << endl;
        cout << "3.FOR UPDATE DATA INTO FILE.." << endl
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
            updatedata();
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
