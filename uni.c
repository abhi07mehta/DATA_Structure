#include <stdio.h>
#pragma pack(1)

struct store{
  double price;

  union 
    {
      struct
      {
        char title[50];
        char author[50];
        int num_page;
      }book;

      struct
      {
        int color;
        int size;
        char design[50];
      }shirt;

    }item;
};
  int uni(){
    struct store s;
    printf("Enter book name");
    scanf("%s", s.item.book.title);
    printf("Enter Author Name");
    scanf("%s",s.item.book.author);
    printf("Enter number of pages");
    scanf("%d",&s.item.book.num_page);
    printf("you are reading fantastic book which is written by %s and name of the book is %s you must complete %d pages, it is very intrested",s.item.book.author,s.item.book.title,s.item.book.num_page);
    return 0;
    }
    //memory managment in union choose maximum occupide memory so it takes less momory than structure 