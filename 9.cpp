#include <cstring>
#include <iostream>
using namespace std;
class Mystring {
	char* str;
public:
	Mystring();
	Mystring(char* val);
	Mystring(const Mystring& source);
	Mystring(Mystring&& source);
	~Mystring() { delete str; }
};
Mystring::Mystring()
	: str{ nullptr }{
	str = new char[1];
	str[0] = '\0';
}
Mystring::Mystring(char* val){
	if (val == nullptr) {
		str = new char[1];
		str[0] = '\0';
	}
	else {
		str = new char[strlen(val) + 1];
		strcpy(str, val);
		str[strlen(val)] = '\0';
		cout << "The string passed is: "
			<< str << endl;
	}
}
Mystring::Mystring(const Mystring& source){
	str = new char[strlen(source.str) + 1];
	strcpy(str, source.str);
	str[strlen(source.str)] = '\0';
}
Mystring::Mystring(Mystring&& source){
	str = source.str;
	source.str = nullptr;
}
int main(){
	Mystring a;
	char temp[] = "Hello";
	Mystring b{ temp };
	Mystring c{ a };
	char temp1[] = "World";
	Mystring d{ Mystring{ temp } };
	return 0;
}