#include <iostream>
#include <set>
#include <ctype.h>
#include <map>


using namespace std;

int main(){

	map<char,bool> m;

	for(int i = 0; i < 26; ++i){
		char x = char(65 + i);
		m[x] = true;
	}

	string str,str2;
	getline(cin,str);
	getline(cin,str2);
	string ss = str + str2;

	for(int i = 0; i < ss.length(); ++i){
		m[toupper(ss[i])] = false;
	}

	map<char,bool>::iterator it;

	for(it = m.begin(); it!=m.end(); ++it){
		pair<char,bool> p = *it;
		if(p.second == true){
			cout << p.first;
		}
	}

	return 0;
}