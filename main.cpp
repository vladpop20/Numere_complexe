  #include <iostream>
  using namespace std;
    class Complex {
        public:
        double r; //real part
        double i; //imaginary part
        public:
        void add(Complex, Complex);
        void subtract(Complex, Complex);
        void print();
    };

    void Complex::add (Complex op1, Complex op2) {
        r = op1.r + op2.r;
        i = op1.i + op2.i;
    }

    void Complex::subtract (Complex op1, Complex op2) {
         r = op1.r - op2.r;
         i = op1.i - op2.i;
    }

    void Complex::print () {
        cout << "("<<r<<", " << i <<")";
    }

    int main () {
        Complex operand1, operand2, result;
        cout << "\nInput real part for operand one: " << endl;
        cin >> operand1.r;
        cout << "Input imaginary part for operand one: " << endl;
        cin >> operand1.i;
        cout << "Input real part for operand two: " << endl;
        cin >> operand2.r;
        cout << "Input imaginary part for operand two: " << endl;
        cin >> operand2.i;
        cout << "\nThe sum is ";
        result.add(operand1, operand2);
        result.print();
        cout << "\nThe difference is ";
        result.subtract(operand1, operand2);
        result.print();
    }
