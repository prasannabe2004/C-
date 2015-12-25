/*
    #include <iostream>
    #include <string>
    using namespace std;
    class One {
    public: float f;
            One(float f) { this -> f = f; }
    };
    class Two {
    public: float f;
            Two (One o) { this -> f = o.f; }
            void foo() { cout << (int)f; }
    };
    int main()
    {
       One o1(3.14);
       Two o2 = o1;
       o2.foo();
    }

    #include <iostream>
    using namespace std;
    int main()
    {
      const char c = '!';
      const char *p;
      p = &c;
      *p = '?';
      cout << *p;
      return 0;
    }

 #include <iostream>
    using namespace std;
    class X1 {
    public: virtual void foo() = 0;
    };
    class X2 : public X1 {
    public: virtual void foo() { cout << "X2"; }
    };
    class X3 : public X1 {
    public: virtual void foo() { cout << "X3"; }
    };
    int main()
    {
            X1 *a = new X2(), *b = new X3();
            b->foo();
            a->foo();
            return 0;
    }
*/
  #include <iostream>
    using namespace std;
    int main (int argc, const char *argv[])
    {
      float B = 32;
      { char B = '1'; cout << B; }
      { int B = 2; cout << B; }
      cout << B;
      return 0;
    }

