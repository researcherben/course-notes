//
//	Starter code for Exercise 5-2
//

class IntArray
{
private:    
	int howmany;
	int *data;
	
public:
	IntArray(int size = 10);
	IntArray(const IntArray & car);

	~IntArray();

	IntArray & operator=(const IntArray & car);

	void print();
};



