#include<stdio.h>

struct student
{
    int a;
};
typedef struct student s;

s st;
int main()
{
    
    st.a=10;
    printf("%d",st.a);
}