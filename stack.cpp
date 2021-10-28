#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

#define MAX 5

int arr[100];	//�ŧi����}�C���禡�� 
int a,index = 0;	//�ŧi�����ܼƵ��}�C�� 

class Stack {
	private:
		char item[MAX][20];
		int top;
	public:
		Stack();
		int push_f(void);   // �s�W���
		int pop_f(void);    // �R�����
		void list_f(void);   // ��X���
};

Stack::Stack() {
	top = -1;
}

int Stack::push_f(void) {
	cout << "Please key in several interger:\n";	//��J�Y�z��ƫ���Ů�Y�i�s�Jstack 
	while(cin>>a){
    	arr[index++] = a;
    	char ch = getchar(); 
    	if(ch == '\n')
    		break;
    }
}

int Stack::pop_f(void) {
	if(top < 0)  // ����|�S����Ʀs�b�A�h��ܿ��~
		cout << "\n ���|�O�Ū� !\n";
	else {
		cout << "\n " << item[top] << "�w�Q�R��\n";
		top--;
	}
}

void Stack::list_f(void) {
	int i;
	cout << "\n  ITEM\n";
		cout << " ------------------\n";
	cout.setf(ios::left, ios::adjustfield);
	for(i=0;i<index;i++) {	//��X��push�ɿ�J���Y�z���
    	cout << "  ";
		cout.width(20);
		cout<<arr[i]<<"\n";
	
    }
    cout.setf(ios::left, ios::adjustfield);
    cout << " ------------------\n";
    cout << " �`�@��: " << i << "\n";	//�p�ⶵ�� 
}

int main() {
	Stack obj;
	char option;

	while(1) {
		cout << "\n *****************************\n";
		cout << "        <1> ���J (push)\n";
		cout << "        <2> �R�� (pop)\n";
		cout << "        <3> �C�X\n";
		cout << "        <4> �h�X\n";
		cout << " *****************************\n";
		cout << " �п�J�ﶵ:";
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
