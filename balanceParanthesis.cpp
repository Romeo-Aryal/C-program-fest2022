#include<bits/stdc++.h>
using namespace std;

bool checkSingleBalance(char *str){
	stack<char> s;

	for(int i = 0;str[i]!= '\0';i++){

		char ch = str[i];
		if(ch == '('){
			s.push('(');
		}else if(ch == ')'){
			if(s.empty() || s.top() != ch - '2')
			{
				return false;
			}
			s.pop();
		}
	}
	return s.empty();
}



bool checkMixBalance(char *str){
	stack<char> s;

	for(int i = 0;str[i]!= '\0';i++){
		char ch = str[i];
		if(ch == '(' || ch == '{' || ch == '['){
			s.push(ch);
		}else{
			if(s.empty())
			{
				return false;
			}
			else{
				switch(ch){
					case ')':
					if(s.top() != '('){
						return false;
					}
					s.pop();
					break;

					case '}':
					if(s.top() != '{'){
						return false;
					}
					s.pop();
					break;

					case ']':
					if(s.top() != '['){
						return false;
					}
					s.pop();
					break;
				}

			}
		}
	}
	return s.empty();
}







int main(){
	char str[100000];
	cin>>str;
    char p = ')'-2;
    cout<<p<<endl;
	if(checkMixBalance(str))
	{
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;

	}
	return 0;

}