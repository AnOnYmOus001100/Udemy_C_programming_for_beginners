#include<stdio.h>

int main()
{
    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    //bool isMale = (myGender == anotherGender);

    printf("myGender %s",myGender);

    return 0;

}
