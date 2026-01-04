/*
    defining operators to work with objects & structure variables is operator overloading
*/

#include <bits/stdc++.h>
using namespace std;

class Complex{

    private:
        float real;
        float img;
    
    public:

        // constructor to initialize
        Complex() : real(0), img(0) {} 
        Complex(float real, float img) : real(real), img(img){}

        // overload + operator
        friend Complex operator + (const Complex& obj1, const Complex& obj2){
            Complex temp;
            temp.real = obj1.real + obj2.real;
            temp.img = obj1.img + obj2.img;
            return temp;
        }

        void display(){
            if(img<0){
                cout << "output complex number: " << real << img << "i";
            }
            else{
                cout << "output complex number: " << real << "+" << img << "i";
            }
        }
};

class Count {

    private:
    int value;

    public:
    
    // constructor to initialize count to 5
    Count() : value(5){}

    // overload ++ when used as prefix
    void operator ++(){
        ++value;
    }

    void display(){
        cout << "count: " << value << endl;
    }
};

int main(){

    Complex c1(1.0f,2.0f);
    Complex c2(1.0f,3.0f);

    Complex res = c1+c2;
    res.display();

    Count count1;
    ++count1;
    count1.display();

    return 0;
}