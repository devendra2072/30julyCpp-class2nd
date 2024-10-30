// multi function main multi class  and multi object  bhi honge
// #include<iostream>
// using namespace std;
// class cybrom
// {
//     public:void show ()
//     {
//         cout<<"cybrom1\n";
//     }
// };
// class cybrom2
// {
//     public:void show2 ()
//     {
//         cout<<"cybrom2\n";
//     }
// };
// int main()
// {
//     cybrom obj;
//     obj.show();
//     cybrom2 cd;
//     cd.show2();
// }

// a class which contains the object of previous class is called composite class
// composite class
// #include<iostream>
// using namespace std;
// class scam
// {
//     public:void virus()
//     {
//         cout<<"your system got hacked\n";
//     }
// };
// class client
// {
//     scam d;
//     public:void reward()
//     {

//         cout<<"you won $2000000 dollars\n";
//         d.virus();
//     }
// };
// int main()
// {
//     client sad;
//     sad.reward();
// }


// store multiple value and generate the data table
// 1st method

// #include <iostream>
// using namespace std;
// class student
// {
//     string name[10];
//     int rollno[10];
//     int age[10];
//     int s;

// public:
//     void input(int r)
//     {
//         s = r;
//         for (int i = 0; i < r; i++)
//         {
//             cout << "enter name=";
//             cin >> name[i];
//             cout << "entetr rollno =";
//             cin >> rollno[i];
//             cout << "enter age=";
//             cin >> age[i];
//         }
//     }
//     void show()
//     {
//         for (int i = 0; i < s; i++)
//         {
//             cout << name[i] << "_" << rollno[i] << "_" << age[i] << "\n";
//         }
//     }
// };
// int main()
// {
//     int s;
//     cout << "enter no of records\n";
//     cin >> s;
//     student d;
//     d.input(s);
//     d.show();
// }

// // 2nd method
// #include <iostream>
// #include <string>
// using namespace std;
// class v
// {
//     int roll;
//     string name;
//     int age;

// public:
//     void store(int r, string n, int a)
//     {
//         roll = r;
//         name = n;
//         age = a;
//     }
//     void display()
//     {
//         cout << roll<<"\t"<< name<<"\t" << age <<"\t\n";
//     }
// };
// int main()
// {
//     int n;
//     cout << "no of person \n";
//     cin >> n;
//     v stud[n]; // array of object

//     for (int i = 0; i < n; i++)
//     {
//         int roll, age;
//         string name;
//         cout << "enter details of student =" << i + 1 << "\n";
//         cout << "enter roll no\n";
//         cin >> roll;
//         cout << "enter name\n";
//         cin >> name;
//         cout << "enter age\n";
//         cin >> age;
//         stud[i].store(roll, name, age);
//     }
//     cout << "Roll\t Name \t Age\n";
//     for (int i = 0; i < n; i++)
//     {
//         stud[i].display();
//     }
// }
