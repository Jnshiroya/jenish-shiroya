#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;
    int count = 1;

public:
    friend float disofpoint(point p1, point p2);
    point()
    {
        cin >> x >> y;
    }
    void display()
    {
        cout << count << "point is (" << x << "," << y << ")" << endl;
        count++;
    }
};
float disofpoint(point p1, point p2)
{
    float ans;
    ans = sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));
    return ans;
}
int main()
{
    point a;

    a.display();
    point b;
    b.display();
    cout << "distance of 2 point:" << disofpoint(a, b);

    return 0;
}