// therad :-it is a light weight process
// multi thread: more  than one process running parallel  is called multi thread.
// main function is a single thread  here is proof.

// singlw thread 
// #include <iostream>
// using namespace std;
// void show1()
// {
//     for (t i = 1; i < = 100; i++)
//     {
//         cout << i << "\t";
//     }
// }
// void show2()
// {
//     for (t i = 1000; i < = 2000; i++)
//     {
//         cout << i << "\t";
//     }
// }
// int main()
// {
//     show1();
//     show2();
// }


// multi thread 

// #include <iostream>
// using namespace std;
// #include<thread>
// void show1( int start, int ends)
// {
//     for (t i = start; i < =ends; i++)
//     {
//         if (i%2==0)
//         {
//             cout<<"even"<<i<<"\t";
//         }
//     }
// }
// void show2()
// {
//     for (int i = start; i < = ends; i++)
//     {
//         if (i%2!==0)
//         {
//             cout<<"odd"<<i<<"\t";
//         }
//     }
// }
// int main()
// {
//     thread t1(show1,1,100);
//     thread t2(show2,1,100);
//     t1.join();
//     t2.join();
//     cout<<"\n finished\n";
// }


// #include<iostream>
// #include<thread>

// using namespace std;
// //Thread  it is a light weight process.
// //multi thread- more than one process running parallel.
// //main function is a single thread. here is proof-
// void show1(int start , int ends)
// {
//     for(int i=start;i<=ends;i++)
//     {
//         if(i%2==0)
//         {
//             cout<<"even ="<<i<<"\t";
//         }
//     }
// }
// void show2(int start,int ends)
// {
//       for(int i=start;i<=ends;i++)
// {
//     if(i%2!=0)
//     {
//         cout<<" odd="<<i<<"\t";
//     }
// }
// }
// int main()
// {
//     thread t1(show1,1,100);
//     thread t2(show2,1,100);
//     t1.join();
//     t2.join();
//     cout<<"\nfinished";
// }