#ifndef SALLY_H
#define SALLY_H


class Sally
{
    public:
        Sally(int a, int b);
        ~Sally();
        void print();
        void print() const;
        void testFunction();
        void testFunction() const;
    protected:
    private:
        int regVar;
        const int constVar;
};

#endif // SALLY_H
