//                 *
//         *       *
// *       *       *
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int s = 3 -r; s>=1; s--)
//         {
//             cout<<"\t";
//         }
//         for (int c = 1; c <= r; c++)
//         {
//             cout<<"*"<<"\t";
//         }
//         cout<<"\n";
//     }
// }

//                         A
//                 A       B
//         A       B       C
// A       B       C       D
// #include<iostream>
// using namespace std;
// int main()
// {
//    for (int r = 65; r <= 68; r++)
//     {
//         for (int s = 68 -r; s>=1; s--)
//         {
//             cout<<"\t";
//         }
//         for (int c = 65; c <= r; c++)
//         {
//             cout<<char(c)<<"\t";
//         }
//         cout<<"\n";
//     }   
// }

//                         A
//                 B       B
//         C       C       C
// D       D       D       D
// #include<iostream>
// using namespace std;
// int main()
// {
//    for (int r = 65; r <= 68; r++)
//     {
//         for (int s = 68 -r; s>=1; s--)
//         {
//             cout<<"\t";
//         }
//         for (int c = 65; c <= r; c++)
//         {
//             cout<<char(r)<<"\t";
//         }
//         cout<<"\n";
//     }   
// }

//                         A
//                 B       C
//         D       E       F
// G       H       I       J
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=65;
//    for (int r = 65; r <= 68; r++)
//     {
//         for (int s = 68 -r; s>=1; s--)
//         {
//             cout<<"\t";
//         }
//         for (int c = 65; c <= r; c++)
//         {
//             cout<<char(a)<<"\t";
//             a++;
//         }
//         cout<<"\n";
//     }   
// }

//                 1
//         4       9
// 16      25      36

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//    for (int r = 1; r <= 3; r++)
//     {
//         for (int s = 3 -r; s>=1; s--)
//         {
//             cout<<"\t";
//         }
//         for (int c = 1; c <= r; c++)
//         {
//             cout<<a*a<<"\t";
//             a++;
//         }
//         cout<<"\n";
//     }   
// }


//    * 
//   * *
//  * * *
// * * * *
// #include<iostream>
// using namespace std;
// int main()
// {
//    for (int r = 1; r <= 4; r++)
//     {
//         for (int s = 4 -r; s>=1; s--)
//         {
//             cout<<" ";
//         }
//         for (int c = 1; c <= r; c++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }   
// }


// * * * * 
//  * * *
//   * *
//    *
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//      for (int r = n; r >= 1; r--)
//     {
//         for (int s = 1; s<=n-r; s++)
//         {
//             cout<<" ";

//         }
//         for (int c = 1; c <= r; c++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     } 
// }
//    * 
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n =4;
//    for (int r = 1; r <= n-1; r++)
//     {
//         for (int s = n -r; s>=1; s--)
//         {
//             cout<<" ";
//         }
//         for (int c = 1; c <= r; c++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }  

//     for (int r = n; r >= 1; r--)
//     {
//         for (int s = 1; s<=n-r; s++)
//         {
//             cout<<" ";

//         }
//         for (int c = 1; c <= r; c++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }    
// }