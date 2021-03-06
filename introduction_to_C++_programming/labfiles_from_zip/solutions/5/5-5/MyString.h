//
//	Solution 5-5
//

class MyString
{
private:    
	char *data;
	int len;
	static int howmany;
	static int longest;
	
public:		
	// Constructor takes a char *
	// but if no arg then defaults to
	// empty string

	MyString(const char * = "" );
	MyString(const MyString &);     // Copy constructor
	

	~MyString();			   // Destructor

	MyString & operator=(const MyString & cmsr);    // Assignment
	
	int getLength();		   // Length 
	const char *getString();   // Get the string
	void reverse();			   // Reverse
	bool ispal();			   // Palindrome

	static int getCount();     // Number of strings
	static int getLongest();   // Length of longest string
};

