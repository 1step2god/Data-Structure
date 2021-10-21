#include <bits/stdc++.h>

using namespace std;
 
void generateSquare(int n){
    int magicSquare[n][n];
 
    // 所有空格歸零 
    memset(magicSquare, 0, sizeof(magicSquare));
 
    // 設定第一個數的位置 
    int i = n / 2;
    int j = n - 1;
 
    // 依序把所有值放進魔術方陣 
    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n) {
            j = n - 2;
            i = 0;
        }
        else {
            // 如果j=5則超出右界.歸零往左放 
            if (j == n)    j = 0;
 
            // 如果i<0則超出上界.令-1為i值做定位 
            if (i < 0)    i = n - 1;
        }
        if (magicSquare[i][j]){
            j -= 2;
            i++;
            continue;
        }
        else
            magicSquare[i][j] = num++; //放數字
 
        j++;
        i--;
    }
 
    //輸出結果
    cout << "The Magic Square for n=" << n << "\n\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            cout << setw(4) << magicSquare[i][j] << " ";
    	}
		cout << "\n";
    }
}

int main(){
    int n = 5;
    generateSquare(n);
    return 0;
}
