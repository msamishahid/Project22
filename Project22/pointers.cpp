//#include <iostream>
//
//int main() {
//    int x = 10;     // Declare and initialize an integer variable
//    int* ptr = &x;  // Declare a pointer variable and initialize it with the address of 'x'
//
//    std::cout << "Value of x: " << x << std::endl;
//    std::cout << "Address of x: " << &x << std::endl;
//    std::cout << "Value pointed by ptr: " << *ptr << std::endl;
//    std::cout << "Address stored in ptr: " << ptr << std::endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 100;
//	int* p;
//	p = &num;
//cout << "Value of num is: " << num << endl;
//cout << "Address of num is: " << &num << endl;
//cout << "Value of p is: " << p << endl;
//cout << "Address of p is: " << &p << endl;
//   cout << "Value pointed by p is: " << *p << endl;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	cout << arr<<endl;
//
//	int *p = arr;
//	cout << p << endl;
//	cout << *p << endl;
//
//	cout<< *(p + 1) << endl;
//	cout << *(p + 3) << endl;
//
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const char* a = "Hello sami";
//	cout << a << endl;
//	cout << *a << endl;
//
//	cout << a[0] << endl;
//	cout << a[1] << endl;
//	cout << a++;
//	
//}

//#include <iostream>
//using namespace std;
//
//void display(const char* ptr) {
//	for (; *ptr != '\0'; ptr++)
//		cout << *ptr;
//	cout << endl;
//}
//int main (void) 
//{
//	const char* cStr = "OOP Class";
//	display(cStr);
//	system("PAUSE");
//	return 0;
//}

/*#include <iostream>
using namespace std;

int myvalueadd(int &a, int &b)
{
	a += 10;
	b += 10;
	return a + b;

}
int  main()
{
	int a = 10, b = 20;
	int result = myvalueadd( a, b);
	cout <<result<<endl;

	cout  <<  a  
		<< b << endl;
	system("PAUSE");
	return 0;*/

//}

//#include <iostream>
//
//class student {
//private:
//    int r_no;
//    const char* name;
//
//public:
//    // Default constructor
//    student() : r_no(0), name(nullptr) {}
//
//    // Constructor with name parameter
//    student(const char* n) : r_no(0), name(n) {}
//
//    // Set roll number
//    void set_r_no(int r) {
//        r_no = r;
//    }
//
//    // Set name
//    void set_name(const char* n) {
//        name = n;
//    }
//
//    // Get roll number
//    int get_r_no() {
//        return r_no;
//    }
//
//    // Get name
//    const char* get_name() {
//        return name;
//    }
//
//    // Display student information
//    void display() {
//        std::cout << "Roll no: " << r_no << " Name: " << name << std::endl;
//    }
//};
//
//int main() {
//    
//    
//    // Create a pointer to a student object
//    student* ptr;
//    ptr = new student ("sami");
//
//    // Set roll number and name using the pointer
//    ptr->set_r_no(101);
//   
//
//    // Display student information
//    ptr->display();
//
//    return 0;
//}


#include <iostream>

class Student {
private:
    int rollNo;

public:
    // Constructor
    Student() : rollNo(0) {}

    // Setter for roll number
    void setRollNo(int roll) {
        rollNo = roll;
    }

    // Getter for roll number (optional)
    int getRollNo() {
        return rollNo;
    }
};

int main() {
    // Allocate memory for an array of 100 Student objects
    Student* ptr = new Student[100];

    // Set the roll number for each Student object in the array
    for (int i = 0; i < 100; i++) {
        ptr[i].setRollNo(10); // Access each element using the index i
        std::cout << "Roll number of Student " << i + 1 << ": " << ptr[i].getRollNo() << std::endl;
    }


    // Don't forget to deallocate the memory allocated for the array
    delete[] ptr;

    return 0;
}



