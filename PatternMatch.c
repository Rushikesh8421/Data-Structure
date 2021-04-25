
// Programme by: Rushikesh Patil;
// In this programme we take the input string and take pattern string and try to find out
// pattern in input string and if we get it then we replace it with replace string

#include <stdio.h>
#include <math.h>

char str[100], pat[50], rep[50], ans[100];
int i, j, k, m, c, flag = 0;

char stringMatch()
{
    i = j = m = c = 0;
    while (str[c] != '\0')
    {
        if (str[m] == pat[i])
        {
            i++;
            m++;
            if (pat[i] == '\0')
            {
                flag = 1;
                for (k = 0; rep[k] != '\0'; k++, j++)
                {
                    ans[j] = rep[k];
                }
                c = m;
                i = 0;
            }
        }
        else
        {
            ans[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }

        ans[j] = '\0';
    }
}

int main()
{
    printf("Enter the main string:\n");
    scanf("%s", str);
    printf("Enter the pattern string\n");
    scanf("%s", pat);
    printf("Enter the replace string\n");
    scanf("%s", rep);

    stringMatch();

    if (flag == 1)
    {
        printf("The new string is %s\n", ans);
    }
    else
    {
        printf("Pattern not found\n");
    }
    
}