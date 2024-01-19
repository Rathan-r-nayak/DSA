#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[50],pat[50],rep[50];
int lasts,lastp,lastr,start=0;
int patfound=0;
void findpattern()
{
    int i,j;
    lastr=strlen(rep)-2;
    if(lastp==lastr)
    {
        for(i=start,j=0;j<=lastr;j++,i++)
        {
        str[i]=rep[j];
        }
    }
    else
    {
        printf("invalid length of replace string");
        exit(0);
    }
}
void compute()
{
    int endmatch,inmatch,j;
    lastp=strlen(str)-2;
    lasts=strlen(pat)-2;
    for(endmatch=lastp;endmatch<=lasts;endmatch++,start++)
    {
        if(str[endmatch]==pat[lastp])
        {
            j=0;
            inmatch=start;
            while(j<lastp)
            {
            if(str[inmatch]==pat[j])
            {
                inmatch++;
                j++;
            }
            else
            {
                break;
            }
            if(j==lastp)
            {
                patfound=1;
                findpattern();
            }

        }
        }
    }

}

void main()
{
    printf("Enter the main string");
    fgets(str,50,stdin);
    printf("Enter the PAT string");
    fgets(pat,50,stdin);
    printf("Enter the REP string");
    fgets(rep,50,stdin);
    printf("String before replace is %s",str);
    compute();
    if(patfound=0)
    {
        printf("Array not found");
    }
    else
    {
        printf("String after replace is %s",str);
    }
}