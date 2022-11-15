#include <stdio.h>
void main()
{
    /* enter these charecter (';', 'DC1', '^', ',')
    DC1 = 17 
    ຫມາຍເຫດ DC1 ບໍ່ຮູ້ວ່າຈະໃຫ້ກົດປຸ່ມໃດ
    you will get my phone number 
    don't forget to put 020 
    */

    printf("enter these charecter (';', 'DC1', '^', ',')\nDC1 = 17 \nyou'll get my phone number \ndon't forget to put 020 \n");
    for (int i = 1; i <= 4; i++)
    {
        if (i != 2)
        {
        char c;
        printf("input charecter = ");
        scanf("%c", &c);
        getchar();
        printf("ACII is %d", c);
        printf("\n");
        }
        else if (i=2)
        {
        printf("input charecter = DC1 (Don't enter it again this is a defualt)\nACII is 17\n");
        }
    }
}