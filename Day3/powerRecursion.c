#include <stdio.h>
#include <stdlib.h>

int power(int x, int y){
    if(y==1){
        return x;
    }

    return x * power(x, y - 1);
}
int main()
{
int num = power(3,3);
printf("%d",num);
return 0;
}
