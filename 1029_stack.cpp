#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

#define MAX 5

int arr[100];	//宣告全域陣列給函式用 
int a,index = 0;	//宣告全域變數給陣列用 

class Stack {
	private:
		char item[MAX][20];
		int top;
	public:
		Stack();
		int push_f(void);   // 新增函數
		int pop_f(void);    // 刪除函數
		void list_f(void);   // 輸出函數
};

Stack::Stack() {
	top = -1;
}

int Stack::push_f(void) {
	cout << "Please key in several interger:\n";	//輸入若干整數後按空格即可存入stack 
	while(cin>>a){
    	arr[index++] = a;
    	char ch = getchar(); 
    	if(ch == '\n')
    		break;
    }
}

int Stack::pop_f(void) {
	if(top < 0)  // 當堆疊沒有資料存在，則顯示錯誤
		cout << "\n 堆疊是空的 !\n";
	else {
		cout << "\n " << item[top] << "已被刪除\n";
		top--;
	}
}

void Stack::list_f(void) {
	int i;
	cout << "\n  ITEM\n";
		cout << " ------------------\n";
	cout.setf(ios::left, ios::adjustfield);
	for(i=0;i<index;i++) {	//輸出於push時輸入的若干整數
    	cout << "  ";
		cout.width(20);
		cout<<arr[i]<<"\n";
	
    }
    cout.setf(ios::left, ios::adjustfield);
    cout << " ------------------\n";
    cout << " 總共有: " << i << "\n";	//計算項數 
}

int main() {
	Stack obj;
	char option;

	while(1) {
		cout << "\n *****************************\n";
		cout << "        <1> 插入 (push)\n";
		cout << "        <2> 刪除 (pop)\n";
		cout << "        <3> 列出\n";
		cout << "        <4> 退出\n";
		cout << " *****************************\n";
		cout << " 請輸入選項:";
		while(cin.get(option) && option == '\n');
		cin.get();
		switch(option) {
			case '1': obj.push_f();
						break;
			case '2': obj.pop_f();
						break;
			case '3': obj.list_f();
						break;
			case '4': exit(1);
		}
	}
 
}
