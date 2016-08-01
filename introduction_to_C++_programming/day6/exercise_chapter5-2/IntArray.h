//
//	Starter code for Exercise 5-2
//

class IntArray
{
private:    
	int howmany;
	int *data;
	/*
	IntArray common_private_function(){
	    
	}
	*/
public:
	IntArray(int size = 10);
	IntArray(const IntArray & car);

    // destructor
	~IntArray();

	IntArray & operator=(const IntArray & car);

    // function prototype
	void print();
};



