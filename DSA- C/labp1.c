#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[50],pat[50],rep[50];
int patfound=0,endmatch=0,inmatch,i,start=0,lasts,lastp,lastr;
void replacepattern()
{
    int j;
     lastr=strlen(rep)-2;
     if(lastr==lastp)
     {
     for(i=start,j=0;j<=lastr;j++,i++)
     {
         str[i]=rep[j];
     }
     }
     else
     {
         printf("length not matching");
         exit(0);
     }
}
void findpattern()
{
    int j;
    lasts=strlen(str)-2;
    lastp=strlen(pat)-2;
    for(endmatch=lastp,start=0;endmatch<=lasts;endmatch++,start++)
    {
        if(str[endmatch]==pat[lastp])
        {
             j=0;
             inmatch=start;
             while (j<lastp)
             {
                 if(str[inmatch]==pat[j])
                 {
                 j++;
                 inmatch++;
                 }
                 else
                 {
                      break;
                 }
                 if(j==lastp)
                 {
                     patfound=1;
                     replacepattern();
                 }
                 }
             }
             

        }
}

void main()
{
    printf("Enter the main STR:");
    fgets(str,50,stdin);
    printf("Enter the PAT str:");
    fgets(pat,50,stdin);
    printf("Enter the REP str:");
    fgets(rep,50,stdin);
    printf("STR before findpattern() is %s",str);
    findpattern();
    if(patfound==0)
    {
         printf("pattern not found");
    }
    else
    {
         printf("STR after findpattern() is %s",str);
    }
}
