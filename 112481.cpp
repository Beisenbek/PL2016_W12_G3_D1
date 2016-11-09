#include <iostream>
#include <set>
#include <ctype.h>

using namespace std;

int main(){

	set<char> s;

	for(int i = 0; i < 26; ++i){
		char ch = char(65 + i);
		s.insert(ch);
	}

	string str,str2;
	getline(cin,str);
	getline(cin,str2);
	string ss = str + str2;
	set<char>::iterator it;
	
	for(int i = 0; i < ss.length(); ++i){
		it = s.find(toupper(ss[i]));
		if( it != s.end()){
			s.erase(it);
		}		
	}

	for(it = s.begin(); it!=s.end(); ++it){
		cout << *it;
	}


	return 0;
}