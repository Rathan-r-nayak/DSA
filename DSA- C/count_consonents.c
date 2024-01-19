#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int count[52]={0};
    char vow[]={'a','e','i','o','u'};
    char inp[100],tmp;
    int i;
    printf("Enter the string:");
    // fgets(inp,strlen(inp),stdin);
    scanf("%s",inp);

    for(i=0;i<strlen(inp);i++)
    {
        tmp=inp[i];
        
         if(tmp>='A' && tmp<='Z' && tmp != 'A' && tmp != 'E' && tmp != 'I' && tmp != 'O' && tmp != 'U')
         {
            count[tmp-'A']++;
            
         }
        else if(tmp>='a' && tmp<='z' && tmp != vow[0] && tmp != vow[1] && tmp != vow[2] && tmp != vow[3] && tmp != vow[4] )
        {
            count[tmp-'A'-6]++;
        }
    }

    for(i=0;i<52;i++)
    {
        if(count[i]>0 && i<=25)//caps
        {
            printf("%c->%d\n",'A'+i,count[i]);
        }
        else if(count[i]>0 && i>25)
        {
            printf("%c->%d\n",'a'+i-26,count[i]);
        }
    }
}



//by making a letter to lower case
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

// int main()
// {
//     char vow[]={'a','e','i','o','u'};
//     char str[100];
//     int count[26]={0};
//     char tmp;
//     int i,n;
//     printf("Enter the string:");
//     scanf("%s",str);

//     for(i=0;i<strlen(str);i++)    
//     {
//         tmp=tolower(str[i]);
//         if(tmp >= 'a' && tmp <= 'z' && tmp != 'a' && tmp != 'e' && tmp != 'i' && tmp != 'o' && tmp != 'u')
//         {
//             count[tmp-'a']++;
//         }
//     }
//     printf("\ncount is \n");
//     for(i=0;i<26;i++)
//     {
//         if(count[i]>0)
//         {
//             printf("%c->%d\n",'a'+i,count[i]);
//         }
        
//     }


// }