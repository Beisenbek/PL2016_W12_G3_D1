#include <iostream>
#include <set>

using namespace std;

int main(){

	set<char> s;
	set<char> s2;

	string str;
	getline(cin,str);

	for(int i = 0; i < str.length(); ++i){
		if(isdigit(str[i])){
			if(s.find(str[i]) != s.end()){
				s2.insert(str[i]);
			}
			else{
				s.insert(str[i]);
			}
		}
	}

	set<char>::iterator it;
	for(it = s2.begin(); it!=s2.end(); ++it){
		cout << *it;
	}


	return 0;
}