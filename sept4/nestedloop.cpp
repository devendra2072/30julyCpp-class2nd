// nested loop ka use pattern banane ke liye karte hai
//paturn * 
    //   * *
    //   * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout << "*" << "\t";
//         }
//         cout << "\n";
//     }
// }

// 1
// 2       2
// 3       3       3

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout <<r << "\t";
//         }
//         cout << "\n";
//     }
// }


// 1
// 1       2
// 1       2       3
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout <<c << "\t";
//         }
//         cout << "\n";
//     }
// }


// 1
// 2       3
// 4       5       6
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout <<a << "\t";
//             a++;
//         }
//         cout << "\n";
//     }
// }

// 1
// 3       5
// 7       9       11
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout <<a << "\t";
//             a=a+2;
//         }
//         cout << "\n";
//     }
// }
// 2 paturn *
// A
// B       B
// C       C       C
// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int r = 65; r <= 67; r++)
//     {
//         for (int c=65; c <= r; c++)
//         {
//             cout << char(r) << "\t"; // r, c "*"
//         }

//         cout << "\n";
//     }
// }


// A
// A       B
// A       B       C
// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int r = 65; r <= 67; r++)
//     {
//         for (int c=65; c <= r; c++)
//         {
//             cout << char(c) << "\t"; // r, c "*"
//         }

//         cout << "\n";
//     }
// }

// A
// B       B
// C       C       C
// D       D       D       D
// E       E       E       E       E
// #include<iostream>
// using namespace std;
// int main()
// {
//   for (int r = 0; r <= 4; r++)
//     {
//         for (int c=0; c <= r; c++)
//         {
//             cout << char(r+65) << "\t"; // r, c "*"
//         }
//         cout << "\n";
//     }  
// }

// A
// B       B
// C       C       C
// D       D       D       D
// #include<iostream>
// using namespace std;
// int main()
// {
//   for (char r = 'A'; r <= 'D'; r++)
//     {
//         for (int c='A'; c <= r; c++)
//         {
//             cout << char(r) << "\t"; // r, c "*"
//         }
//         cout << "\n";
//     }  
// }