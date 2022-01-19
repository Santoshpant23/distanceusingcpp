#include <iostream>
#include <cmath>
using namespace std;
//Finding distance between two points using classes
class p2;
class p1
{
    int x1, y1;

public:
    p1(int a, int b)
    {
        x1 = a;
        y1 = b;
    }
    friend float distance(p1, p2);
};
class p2
{
    int x2, y2;

public:
    p2(int a, int b)
    {
        x2 = a;
        y2 = b;
    }
    friend float distance(p1, p2);
};

float distance(p1 o1, p2 o2)
{
    float dist = sqrt(((o1.x1 - o2.x2) * (o1.x1 - o2.x2)) + ((o1.y1 - o2.y2) * (o1.y1 - o2.y2)));
    return dist;
}

int main()
{
    int a1, a2, b1, b2;
    cout << "Enter coordinates of first point" << endl;
    cin >> a1 >> a2;
    cout << "Enter coordinates of second point" << endl;
    cin >> b1 >> b2;
    p1 o1(a1, a2);
    p2 o2(b1, b2);
    float sum = distance(o1, o2);
    cout << "The distance is : " << sum;
    return 0;
}