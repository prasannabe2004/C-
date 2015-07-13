#include  <iostream>
#include  <string>

using namespace std;

int compare2(void) {
      string secret = "prasanna";
      string password;
      cout << "Enter password:" << endl;
	getline(cin,password);
	if(password.compare(secret) == 0)
		cout << "Access granted" << endl;
	else
		cout << "Sorry";
      return 0;
}

int compare1(void) {
      string secret = "prasanna";
      string password;
      cout << "Enter password:" << endl;
	getline(cin,password);
	if(secret == password)
		cout << "Access granted" << endl;
	else
		cout << "Sorry";
      return 0;
}

int substring(void) {
        string str1, str2;
        str1 = "ABCDEF";
        str2 = str1.substr(1,1) + str1.substr(4) + str1.substr();
        cout << str2 << endl;
        return 0;
}

int main()
{
    //compare1();
    //compare2();
    substring();
    return 0;
}
