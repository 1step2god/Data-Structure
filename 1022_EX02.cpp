#include <iostream>
#include <iomanip>
#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

using namespace std;

int main(){
    int order, i, j, k, p, q, mid, magic[SIZE][SIZE];

    cout << "Enter order of magic square (order must be odd): ";
    cin >> order;

    if(order%2==0){
        cout << "Order must be odd.\n";
        cout << "Exiting...";
        exit(0);
    }

    mid = order/2;

    for(i=0;i< order; i++){
        for(j=0; j< order; j++){
            magic[i][j]=0;
        }
    }

    k=mid;
    j=0;
    for(i=1; i<= order*order; i++){
        magic[j][k] = i;
        p = j--;
        q = k++;

        if(j< 0){
            j = order-1;
        }

        if(k>order-1){
            k=0;
        }

        if(magic[j][k] != 0){
            k = q;
            j = p+1;
        }
    }

    cout << "Generated MAGIC SQUARE is:\n";
    for(i=1;i<=6*order;i++){
        cout << "-";
    }
    cout << "\n";
    for(j=0;j< order;j++){
        cout << "|";
        for(k=0; k< order; k++){
            cout << setw(5) << magic[j][k] << " ";
        }
        cout << "\n";
        for(i=1; i<=6*order; i++){
            cout << "-";
        }
        cout << "\n";
    }
    return 0;
}
