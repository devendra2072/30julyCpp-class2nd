// wap to swap the value by  using friend functions
// #include <iostream>
// using namespace std;

// class Swap {
// public:
//     int a;
//     int b;
// public:
// Swap(int x, int y) : a(x), b(y) {}  // Constructor to initialize a and b
//     // Friend function declaration
//     friend void swapValues(Swap &s);
// };

// // Friend function definition
// void swapValues(Swap &s) {
//     int temp = s.a;
//     s.a = s.b;
//     s.b = temp;
// }

// int main() {
//     int x, y;
//     cout << "Enter two integers: ";
//     cin >> x >> y;

//     // Create an object of Swap class
//     Swap s(x, y);

//     cout << "Before swapping: a = " << s.a << ", b = " << s.b <<"\n";

//     // Call the friend function to swap values
//     swapValues(s);

//     cout << "After swapping: a = " << s.a << ", b = " << s.b <<"\n";

//     return 0;
// }




// Write a Program to swap private data members of classes named as Top1, and Top2 using friend function.
#include <iostream>
using namespace std;
class Top2; // Forward declaration of Top2

class Top1 {
private:
    int data1;

public:
    Top1(int d) : data1(d) {}

    // Friend function declaration
    friend void swap(Top1 &t1, Top2 &t2);

    void display() const {
        cout << "Top1 data: " << data1 <<"\n";
    }
};

class Top2 {
private:
    int data2;

public:
    Top2(int d) : data2(d) {}

    // Friend function declaration
    friend void swap(Top1 &t1, Top2 &t2);

    void display() const {
        cout << "Top2 data: " << data2 <<"\n";
    }
};

// Friend function definition
void swap(Top1 &t1, Top2 &t2) {
    int temp = t1.data1;
    t1.data1 = t2.data2;
    t2.data2 = temp;
}

int main() {
    Top1 obj1(10);
    Top2 obj2(20);

    cout << "Before swapping:" <<"\n";
    obj1.display();
    obj2.display();

    swap(obj1, obj2); // Call the friend function to swap data

    cout << "After swapping:" <<"\n";
    obj1.display();
    obj2.display();
}
// wap to print the factorial of any number by using constructor

// #include <iostream>
// using namespace std;

// class Factorial {
// private:
//     int number;
//     long long result;

// public:
//     // Constructor
//     Factorial(int num) {
//         number = num;
//         result = calculateFactorial(number);
//     }

//     // Function to calculate factorial
//     long long calculateFactorial(int n) {
//         if (n <= 1)
//             return 1;
//         else
//             return n * calculateFactorial(n - 1);
//     }

//     // Function to print the result
//     void printFactorial() {
//         cout << "Factorial of " << number << " is " << result << "\n";
//     }
// };

// int main() {
//     int num;

//     cout << "Enter a number to calculate its factorial: ";
//     cin >> num;

//     // Create an object of Factorial class
//     Factorial fact(num);

//     // Print the factorial
//     fact.printFactorial();

//     return 0;
// }




//  Q) W.A.P of finding the Factorial Using Constructor?
// #include <iostream>
// using namespace std;

// class Swap{
//     public: Swap(int n){
//         int a = n-1;

//         cout<<"=================================\n";

//         while(a>1){
//            n = n*a;
//            a--;
//         }
//         cout<<"fact ="<<n;
//     }
// };
// int main() {
//     int n;
//     cin>>n;
//     cout<<"n = "<<n<<"\n";
//     // cout<<"r = "<<r<<"\n";
//     Swap o(n);

//     return 0;
// }


//FACTORIAL USING CONSTUCTOR
// #include <iostream>
// using namespace std;
// class fact{
//     int x;
//     int f=1;
//     public:
//     fact(int m): x(m) {cout<<"Enter a number:";
//        cin>>m; 
//     }
//    int factorial(){
//        if (x==1||x==0){
//            cout<<"FACTORIAL OF THE GIVEN NUMBER IS : 1\n";
//        }
//        else{
//            for (int i=x; i>1;i--){
//                f=i*f;
//            }
//            cout<<"FACTORIAL OF THE GIVEN NUMBER IS : "<<f;
//        }
//        return 0;
//    } 
// };
// int main() { 
// fact obj1(5);
// obj1.factorial();
// }


//SWAPING USING FRIEND FUNCTION
// #include <iostream>
// using namespace std;

// class ClassA;

// class ClassB {
// private:
//     int B;

// public:
//     ClassB(int b) : B(b) {}
//     friend void swap(ClassA &a, ClassB &b);

//     void display() {
//         cout << "Value in ClassB: " << B << endl;
//     }
// };

// class ClassA {
// private:
//     int A;

// public:
//     ClassA(int a) : A(a) {}
//     friend void swap(ClassA &a, ClassB &b);
//     void display() {
//         cout << "Value in ClassA: " << A << endl;
//     }
// };

// void swap(ClassA &a, ClassB &b) {
//     int t = a.A;
//     a.A = b.B;
//     b.B = t;
// }

// int main() {
//     ClassA obj1(10); 
//     ClassB obj2(20);

//     cout << "Before swapping:" << endl;
//     obj1.display();
//     obj2.display();

//     swap(obj1, obj2);

//     cout << "\nAfter swapping:" << endl;
//     obj1.display();
//     obj2.display();

//     return 0;
// }