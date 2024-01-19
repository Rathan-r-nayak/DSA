#include <stdio.h>
#include <string.h>
 
struct student {
    int roll_no;
    int age;
}st;


int main()
{
 
    // struct student st;
    struct student *ptr;
    ptr=&st;

    st.roll_no=5;
    st.age=20;

    printf("%d",(*ptr).age);
    printf("\n%d",(*ptr).roll_no);
}