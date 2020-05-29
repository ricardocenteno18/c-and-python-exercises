#include <stdio.h>
#include <math.h>

int main()
{
int x,y = 0;

printf("write your month of birth: ");
scanf("%d",&x);

while ((x > 12) || (x < 1))
{
printf("write your month of birth( 1 - 12): ");
scanf("%d",&x);
}

if (x==1)
{
printf("write your day of birth (1-31): ");
scanf("%d",&y);
while ( (y>31) || (y<1) )
{
printf("write your day of birth (1-31): ");
scanf("%d",&y);
}
if(y<=20)  printf("\nhis sign is capricorn.\n\n");
else printf("\nhis sign is aquarium.\n\n");
}

else if(x==2)
{
printf("write your day of birth (1-31) ");
scanf("%d",&y);
while ( (y>29) || (y<1) )
{
printf("write your day( 1 - 29): ");
scanf("%d",&y);
}
if (y<=19)  printf("\nhis sign is aquarium.\n\n");
else printf("\nhis sign is pisces.\n\n");
}

else if(x==3)
{
printf("write your day of birth ");
scanf("%d",&y);
while ( (y>31) || (y<1) )
{
printf("write your day( 1 - 31): ");
scanf("%d",&y);
}
if (y<=20)  printf("\nhis sign is Pisces.\n\n");
else printf("\nyour sign is  ARIES.\n\n");
}

else if(x==4)
{
printf("write your day of birth: ");
scanf("%d",&y);
while ( (y>30) || (y<1) )
{
printf("write your day of birth(1 - 30): ");
scanf("%d",&y);
}
if (y<=20) printf("\nyour sign is  ARIES\n\n");
else printf("\nyour sign is  TAURUS.\n\n");
}

else if(x==5)
{
printf("write your day of birth: ");
scanf("%d",&y);
while ( (y>31) || (y<1) )
{
printf("write your day of birth( 1 - 31): ");
scanf("%d",&y);
}
if (y<=21)  printf("\nyour sign is  TAURUS.\n\n");
else printf("\nyour sign is GEMINI.\n\n");
}

else if(x==6)
{
printf("write your day of birth: ");
scanf("%d",&y);
while ( (y>30) || (y<1) )
{
printf("write your day of birth( 1 - 30): ");
scanf("%d",&y);
}
if (y<=21)  printf("\nyour sign is GEMINI.\n\n");
else printf("\nyour sign is CANCER.\n\n");
}

else if(x==7)
{
printf("write your day of birth: ");
scanf("%d",&y);
while ( (y>31) || (y<1) )
{
printf("write your day of birth( 1  31): ");
scanf("%d",&y);
}
if(y<=23)  printf("\nyour sign is CANCER.\n\n");
else printf("\nyour sign is  LEO.\n\n");
}

else if(x==8)
{
printf("write your day of birth: ");
scanf("%d",&y);
while ( (y>31) || (y<1) )
{
printf("write your day of birth( 1 -31): ");
scanf("%d",&y);
}

(y<=23) ? printf("\nyour sign is LEO.\n\n"):
          printf("\nyour sign is virgo.\n\n");
}

else if(x==9)
{
printf("write your day of birth: ");
scanf("%d",&y);
while ( (y>30) || (y<1) )
{
printf("write your day of birth( 1 -30): ");
scanf("%d",&y);
}

if(y<=23)  printf("\nyour sign is LEO.\n\n");
else printf("\nyour sign is pound.\n\n");
}

else if(x==10)
{
printf("write your day of birth: ");
scanf("%d",&y);
while ( (y>31) || (y<1) )
{
printf("write your day of birth(1 - 31): ");
scanf("%d",&y);
}

if(y<=23)  printf("\nyour sign is pound.\n\n");
else printf("\nyour sign is SCORPION.\n\n");
}

else if(x==11)
{
printf("write your day of birth: ");
scanf("%d",&y);
while ( (y>30) || (y<1) )
{
printf("write your day of birth(1 -30): ");
scanf("%d",&y);
}

if(y<=22)  printf("\nSu signo es SCORPION.\n\n");
else printf("\nSu signo es Sagittarius.\n\n");
}

else if(x==12)
{
printf("write your day of birth ");
scanf("%d",&y);
while ( (y>31) || (y<1) )
{
printf("write your day of birth( 1 - 31): ");
scanf("%d",&y);
}

if(y<=21)  printf("\n your singn is Sagittarius.\n\n");
else printf("\nyour sign is capricorn.\n\n");
}

return 0;

}
