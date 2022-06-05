#include <iostream>
using namespace std;
class bitmanipulation
{
public:
    getbit(int n, int pos)
    {
        return (n & (1 << pos) != 0);
    }
    setbit(int n,int pos){
        return (n | (1<<pos));
    }
    clearbit(int n,int pos){
        int che=~(1<<pos);
        return(n & che);
    }
};
int main()
{
    int n;
    int position;
    cin>>n>>position;
    bitmanipulation b1;
    cout << "getbit:" << b1.getbit(n, position);
    cout << "setbit:" << b1.setbit(n, position);
    cout << "clearbit:" << b1.clearbit(n, position);

    return 0;
}