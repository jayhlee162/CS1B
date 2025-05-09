#include <iostream>

class fractionType{
	public:
		int numerator;
		int denominator;

		fractionType(int num = 0, int den = 1){

			numerator = num;

			while (den == 0){
				std::cout << "Invalid fraction\n";
				std::cout << "Enter new denominator: ";
				std::cin >> den;
			}

			denominator = den;
		}

};

std::ostream& operator<<(std::ostream& out, const fractionType& f){
       	out << f.numerator << "/" << f.denominator;
	return out;
}

std::istream& operator>>(std::istream& in, fractionType& f){
	
	int num, den;

	std::cout << "Enter numerator: ";
	in >> num;

	std::cout << "Enter denominator: ";
	in >> den;

	fractionType(num, den);
	return in;
}



