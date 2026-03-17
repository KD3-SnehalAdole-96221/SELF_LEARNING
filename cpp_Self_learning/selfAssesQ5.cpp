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




#include <iostream>
using namespace std;

// Function Prototypes
int my_strlen(const char* str);
char* my_strcpy(char* dest, const char* src);

int main() {
    char source[] = "Gemini AI";
    char destination[20];

    // Testing our custom strlen
    int length = my_strlen(source);
    cout << "Length of '" << source << "' is: " << length << endl;

    // Testing our custom strcpy
    my_strcpy(destination, source);
    cout << "Destination after copy: " << destination << endl;

    return 0;
}

int my_strlen(const char* str) {
    int length = 0;
    while (*(str + length) != '\0') { // Using pointer arithmetic style
        length++;
    }
    return length;
}

char* my_strcpy(char* dest, const char* src) {
    char* start = dest;
    while (*src != '\0') {
        *dest = *src; // Copy value at current source pointer to dest pointer
        dest++;
        src++;
    }
    *dest = '\0'; // Seal the destination string
    return start;
}