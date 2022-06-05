#include <bits/stdc++.h>
using namespace std;
template <class t=int, class q=string>
class studendata
{
    t id;
    t marks;
    q name;

public:
    studendata()
    {
        static int counter = 1;
        cout << "Enter id,name and marks \n";
        cin >> id >> name >> marks;
        
    }
    void insertdatainfile(){
                static int counter = 1;

        string str = "data of student " + to_string(counter) + " :- " + "\n";
        fstream out;
        out.open("data.txt",ios::in|ios::out);
        out << str;
        string id1 = to_string(id) + "\n";
        out << id1;
        name = name + "\n";
        out << name;
        string marks1 = to_string(marks) + "\n";
        out << marks1;
        counter++;
        out.close();
    }
    void display()
    {
        ifstream ob;
        ob.open("data.txt", ios::in);
        char s[40];
        while (!ob.eof())
        {
            
            ob >> s;
            if(!ob.eof())
            cout << s << " ";
        }
        ob.close();
    }
};
int main()
{
    studendata<> object[2];
     object[0].insertdatainfile();
     object[1].insertdatainfile();
    object[0].display();
    return 0;
}
