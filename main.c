#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j;
    char str[4][50]={"Faisal","Anees","Raees", "Osama"}, temp[50];

    for(i=0; i<3; ++i)
    {
        for(j=i+1; j<4 ; ++j)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nIn lexicographical order: \n");
    for(i=0; i<4; ++i)
    {
        puts(str[i]);
    }
}
