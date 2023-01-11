#include <iostream>
#include <stdio.h>

int nr[250000], n, i = 0, result = 0, length, hight, hmin, hmax;

void placate()
{
    result++;
    i--;
    if (i == -1)
    {
        nr[++i] = hight;
    }
}

int main()
{
    int a = 1;

    scanf("%d", &n);
    scanf("%d %d\n", &length, &nr[0]);
    hmin = nr[i];
    hmax = nr[i];
    while (a < n)
    {
        a++;
        scanf("%d %d\n", &length, &hight);
        while (hight < nr[i])
        {
            placate();
        }
        if (hight > nr[i])
        {
            nr[++i] = hight;
        }
    }
    result += i + 1;
    printf("%d\n", result);
    return 0;
}