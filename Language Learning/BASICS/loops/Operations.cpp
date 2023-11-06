// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5,m;
//     if(5==cin>>m)
//     {
//         cout << n;
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n = 5, m;

    if (scanf("%d", &m) == n) {
        // if (n == m) {
            printf("n is equal to m.\n");
        // } else {
        //     printf("n is not equal to m.\n");
        // }
    }
    else {
        printf("Input failed or invalid.\n");
    }

    return 0;
}