#include <iostream>
using namespace std;

int shortToInt(void) {
        short s = 32767;
        int i = s;
        if(i == s)
                cout << "equal" << endl;
        else
                cout << "not equal" << endl;
        return 0;
}

int intToShort(void) {
	int i = 2147483647;
    short s = i;

      if(i == s)
      	cout << "equal" << endl;
      else
      {
            cout << s <<endl;
            cout << "not equal" << endl;
      }

      return 0;
}

int floatToDouble(void) {
	float f = 1234.5678;
	double d = f;

	if(d == f)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	return 0;
}

int doubleToFloat(void) {
	double d = 123456.789012;
	float f = d;

	if(d == f)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	return 0;
}

int floatToInt(void) {
	float f = 123.456;
	float g = 1e100;
	int i = f;
	int j = g;

	cout << i << endl;
	cout << j << endl;
	return 0;
}

int promotions(void) {
	int Int = 2;
	char Char = 3;
	short Short = 4;
	float Float = 5.6;

	Int = Short + Char + Float;
	cout << Int << endl;
	return 0;
}

int main(void) {

    shortToInt();
    intToShort();
    floatToDouble();
    doubleToFloat();
    floatToInt();
    promotions();

    return 0;
}
