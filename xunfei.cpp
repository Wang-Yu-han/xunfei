#include <iostream>
#include <cmath>
using namespace std;
class Vector {
private:
    double x, y; 
public:
    Vector(double x_v = 0, double y_v = 0) : x(x_v), y(y_v) {}

    Vector add(const Vector &v) const {
        return Vector(x + v.x, y + v.y);
    }

    void print() const {
        cout << "Vector(" << x << ", " << y << ")" << endl;
    }

    void dir() const {
        double magnitude = sqrt(x * x + y * y);
        cout << magnitude << endl;
    }
};

int main() {
    double a,b,c,d;
    cout <<"请输入第一个向量的数据(x,y):" << endl;
    cin >> a >> b;
    Vector v1(a,b);
    cout <<"请输入第二个向量的数据(x,y):" << endl;
    cin >> c >> d;
    Vector v2(c, d);

    cout << "Vector v1: ";
    v1.print();

    cout << "Vector v2: ";
    v2.print();

    Vector v3 = v1.add(v2);
    cout << "v1 + v2 = ";
    v3.print();

    cout << "v1的模长: ";
    v1.dir();

    cout << "v3的模长: ";
    v3.dir();

    return 0;
}
