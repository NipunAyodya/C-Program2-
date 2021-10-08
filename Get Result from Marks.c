#include <stdio.h>
int main(void)
{

int mark;

printf("Enter the Mark:");
scanf("%d",&mark);

if(mark>100){
    puts("Error 404 not found");
}
if(mark>75){
    puts("Grade is A");
}
else if(mark>=50){
    puts("Grade is B");
}
else if(mark>=35){
    puts("Grade is C");
}

else
{
    puts("F");
    
}


}
