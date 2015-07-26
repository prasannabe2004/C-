#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    unsigned char alpha = 0x12;
    unsigned char red = 0x34;
    unsigned char blue = 0x56;
    unsigned char green = 0x78;

    unsigned int color = alpha;
    color = color << 8;
    color = color + red;

    color = color << 8;
    color = color + blue;

    color = color << 8;
    color = color + green;

    cout << "color = " << setfill('0')<< setw(8) << hex << color << endl;

    int test = 0xff0000;
    cout << "test = " << setfill('0')<< setw(8) << hex << test << endl;

    //unsigned char a=0,b=0,c=0,d=0;

    //a = (color & 0xff000000)>>24;
    unsigned char a = (color & 0xff000000)>>24;
    unsigned char b = (color & 0xff0000)>>16;
    unsigned char c = (color & 0xff00)>>8;
    unsigned char d = (color & 0xff);

    cout << "a= " << hex<< (int)a << endl;
    cout << "b= " << hex<< (int)b << endl;
    cout << "c= " << hex<< (int)c << endl;
    cout << "d= " << hex<< (int)d << endl;

    return 0;
}
