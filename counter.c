#include <stdio.h>
#include <time.h>

int hour = 0;
int minute = 0;
int second = 0;

void delay(int ms) 
{
    clock_t timeDelay = ms + clock();
    while (timeDelay > clock());
}

void counter()
{
  char stop;
    printf("Press Enter to stop...\n");
    scanf("%c", &stop);
    while (stop != '\n')
    {
        if (minute > 59)
        {
            minute = 0;
            ++hour;
        }
        if (second > 59)
        {
            second = 0;
            ++minute;
        }
        
        printf("*****************************\n");
        printf("%d:%d:%d\n", hour, minute, second);
        printf("*****************************\n");
        delay(1000);
        second += 1;
    }
}

int main()
{
    while (hour < 24)
    {
        counter();
    }  
}
