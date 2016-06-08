//
//   Exercise 14 - 3
//
#include <string.h>

struct type1 {      // FOR EXAMPLE
     int part_no;
     char company_name[100];
     char purchase_date[20];
     int quantity;
};

struct type2 {      // FOR EXAMPLE
     char company_name[100];
     char rank;
     char address[100];
};

union company {
     struct type1 order;
     struct type2 info;
};

struct variant {
     int type;
     union company business;
};

main()
{
     struct variant record;
     
     //
     //	FOR EXAMPLE, a TYPE 1 RECORD
     //
     
     record.business.order.part_no = 1;
     strcpy(record.business.order.company_name, "/training/etc");
     strcpy(record.business.order.purchase_date, "10/1/2010");
     record.business.order.quantity = 2;
     record.type = 1;
     
     //
     //	OR, a TYPE 2 RECORD
     //
      
     strcpy(record.business.info.company_name, "Art and Sals");
     strcpy(record.business.info.address, "Basket Ring Road");
     record.business.info.rank = 'A';
     record.type = 2;
}
