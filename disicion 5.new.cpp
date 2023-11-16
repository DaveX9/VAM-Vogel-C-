
#include<stdio.h>
int main()
{
int score;
printf("input score:");
scanf("%d",&score);
if (score >= 90){
printf("Grade A");
}
else if (score >= 50){
printf("Grade B");
}
else {
printf("Grade F");
}
return 0;
}


