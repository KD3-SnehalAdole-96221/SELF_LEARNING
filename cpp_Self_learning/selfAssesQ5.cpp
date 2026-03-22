// 5. Write your own implementations of `strlen()` and `strcpy()` without using `string.h`.

// #include<iostream>
// using namespace std;

// int mystrlen(char *ptr)
// {
//     int count = 0;

//     while(ptr[count] != '\0')
//     {
//         count++;
//     }

//     return count;
// }





// void mystrcpy(char *dest, char *src)
// {
//     int i = 0;

//     while(src[i] != '\0')
//     {
//         dest[i] = src[i];
//         i++;
//     }

//     dest[i] = '\0';   // copy null terminator
// }

// int main()
// {
//     char source[100];
//     char destination[100];

//     cout << "Enter a string: ";
//     cin.getline(source,100);

//     mystrcpy(destination, source);

//     cout << "Copied string: " << destination;

//     return 0;
// }

// int main()
// {
//     char str[100];

//     cout << "Enter a string: ";
//     cin >> str;   // reads only one word

//     cout << "Length of string: " << mystrlen(str);

//     return 0;
// }




#include<iostream>
using namespace std;
int my_strlen(const char *str)
{
    int count = 0;

    while(str[count] != '\0')
    {
        count++;
    }

    return count;
}

void my_strcpy(char *dest, const char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char source[50];
    char destination[50];

    cout<<"Enter string: ";
    cin>>source;

    my_strcpy(destination, source);

    int length = my_strlen(source);

    cout<<"\nCopied String: "<<destination<<endl;
    cout<<"Length of string: "<<length<<endl;

    return 0;
}