#include <stdio.h>
typedef struct car
  {
    char engine[50];
    char fuel_type[50];
    int fuel_tank_cap;
    int sitting_cap;
    float city_milage;
  }car;

  //Struct is a special type of data structure which allows user to create bundle of data types
  
int str(){
  car c1;
  printf("please enter name of your engine:- \n");
  scanf("%s",c1.engine);
  printf("please enter fuel type\n");
  scanf("%s",c1.fuel_type);
  printf("please enter fuel tank capacity\n");
  scanf("%d",&c1.fuel_tank_cap);
  printf("please Enter sitting capacity\n");
  scanf("%d",&c1.sitting_cap);
  printf("please enter city milage\n");
  scanf("%f",&c1.city_milage);

  printf("you got OSM car which has %s engine with %s fuel type and your car fuel tank capacity is %d , and your car's sitting capacity is %d and your car gives %f city milage ",c1.engine,c1.fuel_type,c1.fuel_tank_cap,c1.sitting_cap,c1.city_milage);
 
return 0;
}

