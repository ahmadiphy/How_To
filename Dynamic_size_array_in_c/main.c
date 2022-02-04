#include <stdio.h>

#define a_size(x) (x)

int main(void)
{
    for(int i=10; i<100; i=i+10)
    {
        int arr[a_size(i)];
        printf("%lu ", sizeof(arr)/sizeof(arr[0]));
    }
}
