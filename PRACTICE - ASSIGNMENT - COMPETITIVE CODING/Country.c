#include<stdio.h>

struct Country{
char Capital_city[30];
long population;
float gdp;

};

int main()
{
struct Country Nepal, China;
printf("Enter Nepal's Capital Name: ");
scanf("%s",Nepal.Capital_city);

printf("Enter your Country's Population: ");
scanf("%s",&Nepal.population);


printf("Enter Nepal's GDP: ");
scanf("%f",&Nepal.gdp);

printf("\n");

printf("Enter China's Capital City: ");
scanf("%s",China.Capital_city);

printf("Enter China's Population: ");
scanf("%s",&China.population);

printf("Enter China's GDP: ");
scanf("%f",&China.gdp);

printf("Country\t Capital City\t Population\t GDP\n");
printf("Nepal\t %s\t %ld\t %.3f\n",Nepal.Capital_city,Nepal.population,Nepal.gdp);
printf("China\t %s\t %ld\t %.3f\n",China.Capital_city,China.population,China.gdp);



}