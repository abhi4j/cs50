    #include <cs50.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

    int main(int argc,string argv[])
    {
    int k = 0;
    if(argc == 1 || argc > 2)
    {
    printf("Please enter only one number.");
    return 1;
    }

    else
    {
    k = atoi(argv[1]);

    

    string s = GetString();

    int charcount = strlen(s);

    for(int i = 0; i< charcount; i++)
    {

    if(isalpha(s[i]))
    {

    int a = (int)s[i];

    if(isupper(s[i]))
    {

    a = a + k;
    if(a > 90)
    {
    a = a-26;
    s[i] = (char)a;
    printf("%c",s[i]);
    }
    else
    {
    s[i] = (char)a;
    printf("%c", s[i]);
    }
    }
        else
    {

    a = a+k;
    if(a>122)
    {
    a = a-26;
    if(a>122)
    a = a-26;
    if(a>122)
    a = a-26;
    s[i] = (char)a;
    printf("%c",s[i]);
    }
    else
    {
    s[i] = (char)a;
    printf("%c",s[i]);
    }
    }
 
    }
    else
    {
    printf("%c",s[i]);
    }

    }
    printf("\n");
}
return 0;
}

