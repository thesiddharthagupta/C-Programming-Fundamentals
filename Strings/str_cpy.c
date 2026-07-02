#include<stdio.h>
#include<string.h>
int main(){
    char oldstr[] = "oldstr";
    char newstr[] = "newstr";
    strcpy (newstr, oldstr);
    puts(newstr);

    return 0;
}

//its uses as copying from oldstr to new and value are stored in newstr by coping from oldstr.
//old value got removed. 