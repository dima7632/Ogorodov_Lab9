#include <iostream>

struct ComplexNumber {
    double real;
    double imag;
};

ComplexNumber add(const ComplexNumber& a, const ComplexNumber& b) {
    ComplexNumber result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

ComplexNumber subtract(const ComplexNumber& a, const ComplexNumber& b) {
    ComplexNumber result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

ComplexNumber multiply(const ComplexNumber& a, const ComplexNumber& b) {
    ComplexNumber result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}
ComplexNumber inputComplexNumber() {
    ComplexNumber num;
    std::cout << "Введіть дійсну частину комплексного числа: ";
    std::cin >> num.real;
    std::cout << "Введіть уявну частину комплексного числа: ";
    std::cin >> num.imag;
    return num;
}
int main() {
    ComplexNumber num1, num2;

    std::cout << "Введіть перше комплексне число:" << std::endl;
    num1 = inputComplexNumber();

    std::cout << "Введіть друге комплексне число:" << std::endl;
    num2 = inputComplexNumber();

    ComplexNumber sum = add(num1, num2);
    ComplexNumber difference = subtract(num1, num2);
    ComplexNumber product = multiply(num1, num2);

    std::cout << "Сума: " << sum.real << " + " << sum.imag << "i" << std::endl;
    std::cout << "Різниця: " << difference.real << " + " << difference.imag << "i" << std::endl;
    std::cout << "Добуток: " << product.real << " + " << product.imag << "i" << std::endl;

    return 0;
}
