/*
Name: Sumit Subhash Jadhav
U89612131.
This program checks a word to see if all elements are either lowercase or uppercase
*/
#include <stdio.h>
int validate(char *word)   //defining validate function
{
    int i=0;
    int len = -1;          //since while takes a space for \n, it has to be compensated by initializing len with -1
    int lowerchar = 0;
    int upperchar = 0;    //Initializing variables

    for (i=0; word[i]!=0; i++)
    {
        char ch = word[i];
        len ++;
        if(ch>='a' && ch<='z')   //Checking if the input lies in these parameters
        {
            lowerchar ++;        //if so, incrementation will take place here for lower case characters
        }
        else if(ch>='A' && ch<='Z')
        {
            upperchar ++;      //if condition is met, incrementation will take place here for upper case characters
        }
    }
    if((lowerchar == len) || (upperchar == len))   //if and only if the set parameters are met input will be validated to be true or else invalid.
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char* argv[])
{
    if(argc!=2)
    {
        printf("Incorrect number of arguments. Usage: ./a.out word");
    }
    else
    {
        int res;
        res= validate(argv[1]);   //calling validate function
        if(res==0)
        {
            printf("Output: Valid");
        }
        else
        {
            printf("Output: Invalid");
        }

    }
    return 0;
}
