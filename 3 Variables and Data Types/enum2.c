#include<stdio.h>

int main()
{
    //enum gender {male, female};
    enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

    //enum gender myGender;
    enum company var1, var2, var3;

    //myGender = male;
    var1 = XEROX;
    var2 = GOOGLE;
    var3 = EBAY;

    //enum gender anotherGender = female;

    //bool isMale = (myGender == anotherGender);

    //printf("myGender %d",myGender);
    printf("var1 is %d \nvar2 is %d \nvar3 is %d",var1,var2,var3);

    return 0;

}
