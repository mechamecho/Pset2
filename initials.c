#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>


void initials(string fulname);

int main()
{
    string names=get_string();
    initials(names);

}

void initials(string fulname)
{
        printf("%c", toupper(fulname[0]));
        strtok(fulname, " ");
        string name = strtok(NULL," ");
        while(name!=NULL)
    {

        printf("%c", toupper(name[0]));
        name=strtok(NULL, " ");
        strtok(fulname, " ");
    }

    printf("\n");
}