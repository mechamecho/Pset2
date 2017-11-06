#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void caesar(string key);

int main(int argc, string argv[])
{
    string key="";

    if(argc!=2)
    {
        printf("Enter one integer key for the Caesar cypher");
        return 1;
    }
    else
    {
      key=argv[1];
    }


    for(int i=0, len=strlen(key); i<len; i++)
    {
        if(!isalpha(key[i]))
        {
            printf("Key can only contain alphabetic characters.");
            return 1;
        }
    }




    caesar(key);

}

void caesar(string key)
{
    printf("plaintext: ");
    string plain = get_string();
    printf("ciphertext: ");

    char newChar;
    char currChar;
    char currKey;
    int currposition;

    for(int i = 0, len= strlen(plain); i<len; i++)
    {
        currChar = plain[i];
        currposition=(i)%strlen(key);
        currKey=key[currposition];
        currKey=tolower(currKey)-'a';
        if(isalpha(currChar))
        {
            if(islower(currChar))
            {
                newChar=((currChar-'a'+currKey)%26)+'a';
            }
            else
            {
                newChar=((currChar-'A'+currKey)%26)+'A';
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
