#include <iostream>

using namespace std;

int main(){

	int digits[10];

	for(int i = 0; i < 10; ++i){
		digits[i] = 0;
	}

	string str;
	getline(cin,str);

	for(int i = 0; i < str.length(); ++i){
		if(isdigit(str[i])){
			int x = (int)str[i] - 48;
			digits[x] = digits[x] + 1;
		}
	}

	for(int i = 0; i < 10; ++i){
		digits[i] = 0;
	}


	return 0;
}