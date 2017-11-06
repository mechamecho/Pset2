#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void caesar(int key);

int main(int argc, string argv[])
{
    int key;

    if(argc!=2)
    {
        printf("Enter one integer key for the Caesar cypher");
        return 1;
    }else
    {
      key= atoi(argv[1]);
    }





    caesar(key);

}

void caesar(int key)
{
    printf("plaintext: ");
    string plain = get_string();
    printf("ciphertext: ");

    char newChar;
    char currChar;

    for(int i = 0, len= strlen(plain); i<len; i++)
    {
        currChar = plain[i];

        if(isalpha(currChar))
        {
            if(islower(currChar))
            {
                newChar=((currChar-'a'+key)%26)+'a';
            }
            else
            {
                newChar=((currChar-'A'+key)%26)+'A';
            }

            printf("%c", newChar);
        }
        else
        {
            printf("%c", currChar);
        }
    }

    printf("\n");

}
