// // Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.

// #include <iostream>
// using namespace std;

// int main()
// {
//     char c;
//     cin >> c;
//     if ('a' <= c && c <= 'z')
//     {
//         cout << 0;
//     }
//     else if ('A' <= c && c <= 'Z')
//     {
//         cout << 1;
//     }
//     else
//     {
//         cout << -1;
//     }
// }

// 2.  Debug the code. It is trying to print the given pattern.

/*
Pattern
1
23
345
4567
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5; // n ne vale aapvi pade
//     int i = 1;
//     while (i < n)
//     {
//         int j = i, count = 1;
//         while (count <= i) // <= aave
//         {
//             cout << j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout << "\n";
//         i = i + 1;
//     }
// }

// /*
// Pattern
// N = 4
//    *
//   ***
//  *****
// *******
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0;
//     while (i < n)
//     {
//         int j = i, count = 2 * n + 1, gaps = (n - i), k = 1;
//         while (k < gaps)
//         {
//             cout << " ";
//             k = k + 1;
//         }
//         int m = 0, ch = count - 2 * gaps;
//         while (m < ch)
//         {
//             cout << "*";
//             m = m + 1;
//         }
//         k = 1;
//         cout << "\n";
//         i = i + 1;
//     }
// }

/*
Pattern
N = 4
1
22
333
4444
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }