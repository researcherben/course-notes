#define BANKSIZE 2
#define NAMESIZE 21

struct employee {
	char name [NAMESIZE];
	double pay;
	char dept;
};

struct employee get_rec(void);
void put_rec(struct employee emp);

void fill(struct employee *p);
void output(struct employee *p);

void fill_emp(struct employee *array, int size); 
void print(struct employee *array, int size);

struct employee *lookup(char *name, struct employee *array, int size);
