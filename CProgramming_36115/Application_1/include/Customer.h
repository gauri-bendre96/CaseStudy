#ifndef CUSTOMER_H_
#define CUSTOMER_H_

//struct Customer;

typedef struct Customer
{
	int Customer_id;
	char name[50];
	char address[100];
} Customer_t;

//static int Customer_id;

typedef struct Product
{
	int prdt_id;
	char name[50];
	char category[100];
	double rate;
}Product_t;

//static int prdt_id;

typedef struct Date
{
	int day;
	int month;
	int year;
}Date_t;

Date_t d;

typedef struct Orders
{
	int order_id;
	int customer_id;
	int product_id;
	int quantity;
	//Date_t order_date;
	int status;
}Orders_t;

char *filename;
char *filename1;
char *filename2;

int get_id();
void Register_Customer(Customer_t *ptr);
void Write_Customer_Record( char *filename  , Customer_t *ptr);
void print_customer_record(Customer_t *prt);
void Read_Customer_Record( char *filename);
int Compare_Customer_id(int *id);

void Add_Produt_Category( char * filename1);
void write_product_record( char *filename2, Product_t *ptr);
void Read_Record_Categories( char * filename1);


//int get_last_id( const char *filename2);
void Accept_Product_record(Product_t *ptr);
void print_product_record(Product_t *prt);
void write_product_record( char *filename2, Product_t *ptr);
void read_product_record(char *filename2);


void Delete_Product();
void find_emp_by_name();
void edit_emp();


void order_item(int *id);
void print_orders_record(Orders_t *prt);
void read_order_item();

#endif /* CUSTOMER_H_ */
