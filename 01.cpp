#include <bits/stdc++.h>

using namespace std;
 
void generateSquare(int n){
    int magicSquare[n][n];
 
    // �Ҧ��Ů��k�s 
    memset(magicSquare, 0, sizeof(magicSquare));
 
    // �]�w�Ĥ@�Ӽƪ���m 
    int i = n / 2;
    int j = n - 1;
 
    // �̧ǧ�Ҧ��ȩ�i�]�N��} 
    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n) {
            j = n - 2;
            i = 0;
        }
        else {
            // �p�Gj=5�h�W�X�k��.�k�s������ 
            if (j == n)    j = 0;
 
            // �p�Gi<0�h�W�X�W��.�O-1��i�Ȱ��w�� 
            if (i < 0)    i = n - 1;
        }
        if (magicSquare[i][j]){
            j -= 2;
            i++;
            continue;
        }
        else
            magicSquare[i][j] = num++; //��Ʀr
 
        j++;
        i--;
    }
 
    //��X���G
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
