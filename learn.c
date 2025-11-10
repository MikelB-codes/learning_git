#include <stdio.h>
#include <string.h>
int main(void)
{
    char fname[100];
    char lname[100];
    printf("First: ");
    fgets(fname,sizeof(fname),stdin);
    printf("Second: ");
    fgets(lname, sizeof(lname),stdin);
    fname[strcspn(fname,"\n")] = '\0';
    lname[strcspn(fname,"\n")] = '\0';
    printf("%s %s", fname,lname);
    
}