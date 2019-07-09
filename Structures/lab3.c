#include <stdio.h>

enum num
{
    Zero,
    One,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine
};

int main()
{
    enum num i;
    int j;
    i = sizeof(int);
    printf("%s",i);
}
