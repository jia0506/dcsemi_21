#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{

	char name[3]; 
		
	int k;
	for (int k = 0; k < 3; k++); {
		string name1, name2, name3;
		cout << "name1 :";
		cin >> name1;
		cout << "name2 :";
		cin >> name2;
		cout << "name3 :";
		cin >> name3;
	}
	
	

	sort(name, name + 2);

	for (int i = 0; i < 3; i++) {
		cout << "저장된 이름은" << name[i] << "입니다.";
	}

	return 0;


}
