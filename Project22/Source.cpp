//#include<iostream>
//#include "student.h"
//using namespace std;
//
//int main() {
//	student s1;
//	s1.set_r_no(100);
//	s1.set_name("Asma");
//	s1.display();
//	s1.~student();
//	system("pause");
//	return 0;
//}

//

//#include <iostream>
//using namespace std;
//
//class Rect {
//private:
//    int length;
//    int width;
//
//public:
//    Rect(int l, int w) : length(l), width(w) {}
//    int getlength() const {
//        return length;
//    }
//    int getwidth() const {
//        return width;
//    }
//    Rect operator+(const Rect& r) const {
//        return Rect(length + r.length, width + r.width);
//    }
//
//    Rect operator-(const Rect& r) const {
//        return Rect(length - r.length, width - r.width);
//    }
//
//    Rect operator*(const Rect& r) const {
//        return Rect(length * r.length, width * r.width);
//    }
//
//    Rect operator/(const Rect& r) const {
//		return Rect(length / r.length, width / r.width);
//	}
//
//
//    Rect& operator++() {
//        length++;
//        width++;
//        return *this;
//    }
//
//    Rect operator--() {
//        length--;
//        width--;
//        return *this;
//    
//    }
//};
//
//int main() {
//    Rect r1(10, 20);
//    Rect r2(9, 19);
//
//    cout << "length " << r1.getlength() << " and width " << r1.getwidth() << endl;
//    cout << "length " << r2.getlength() << " and width " << r2.getwidth() << endl;
//    cout << endl;
//
//    ++r2,--r1;
//    cout << "length " << r2.getlength() << " and width " << r2.getwidth() << endl;
//    cout << "length " << r1.getlength() << " and width " << r1.getwidth() << endl;
//    cout << endl;
//
//Rect R_add = r1 + r2;
//cout << "length " << R_add.getlength() << " and width " << R_add.getwidth() << endl;
//cout << endl;
//
//
//Rect R_sub = r1 - r2;
//cout << "length " << R_sub.getlength() << " and width " << R_sub.getwidth() << endl;
//cout << endl;
//
//Rect R_mul = r1 * r2;
//cout << "length " << R_mul.getlength() << " and width " << R_mul.getwidth() << endl;
//cout << endl;
//
//Rect R_div = r1 / r2;
//cout << "length " << R_div.getlength() << " and width " << R_div.getwidth() << endl;
//cout << endl;
//    return 0;
//}

