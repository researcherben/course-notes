//
//	Starter code for Exercise 5-1
//

class Fraction
{
private:
	int numer;
	int denom;

public:
    // constructor. Two default argument values
    Fraction(int n = 0, int d = 1);
    
    // function prototypes
	void recip();
	void print();

    // non-member operator overrides which have access to the private data
	friend Fraction operator*(const Fraction & p, const Fraction &);
	friend Fraction operator/(const Fraction & p, const Fraction &);
};

