// Lexicographical Comparison
// it's just a logic/basic, i will simply use strcmp()

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    printf("%d\n", strcmp(a, b));
    for (int i = 0;; i++)
    {
        if (a[i] > b[i])
        {
            printf("b is smaller");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("a is smaller");
            break;
        }
        else if (a[i] == '\0' && b[i] == '\0')
        {
            printf("a & b are same");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("b is smaller");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("a is smaller");
            break;
        }


        if (a[i] == b[i])
        {
            continue;
        }
        else if (a[i] > b[i])
        {
            printf("b is smaller");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("a is smaller");
            break;
        }
    }

    return 0;
}