#include <iostream>
using namespace std;
///template<class T3>
template <class T>
class vector
{
    public:
    T *ptr;
    int size;


    vector()
    {
    }
    vector(int s)
    {
        size = s;
        ptr = new T[size];
        
    }
    void setvalue(){
        for (int i = 0; i < size; i++)
        {
            cin >> (ptr[i]);
        }
    }
    
    void addtwovector(vector <T3> &v1,vector <T3> &v2)
    {
        
        for (int i = 0; i < size; i++)
        {
            ptr[i] = v2.ptr[i] + v1.ptr[i];
        }
    
    }
     /*void addtwovector(vector <float> &v1,vector <int> &v2)
    {
        
        for (int i = 0; i < size; i++)
        {
            ptr[i] = v2.ptr[i] + v1.ptr[i];
        }
    
    }
   
    void addtwovector(vector <int> &v1,vector <float> &v2)
    {
        
        for (int i = 0; i < size; i++)
        {
            ptr[i] = v2.ptr[i] + v1.ptr[i];
        }
    
    }*/
   
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i]<<endl;
        }
    }
};
int main()
{
    vector <int> v1(3);
    v1.setvalue();
    vector <float> v2(3);
    v2.setvalue();
    vector <float> v3(3);
    v3.addtwovector(v1,v2);
    v3.display();

    return 0;
}