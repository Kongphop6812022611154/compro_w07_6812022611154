#include <stdio.h>

int main() {
    int x , y;  //ประกาศตัวแปร x และ y เป็นจำนวนเต็ม                                           
    printf("Enter Your x number: ");    //แสดงข้อความเพื่อกรอกค่า x                          
    scanf(" %d", &x);   //รับค่าคำตอบลงในตัวแปร x 
    printf("Enter Your y number: ");    //แสดงข้อความเพื่อกรอกค่า y
    scanf(" %d", &y);   //รับค่าคำตอบลงในตัวแปร y

    if (x > y)  //ถ้า x มากกว่า y                                               
    {printf("X is greater than Y\n");}  //แสดงข้อความ X is greater than Y 
    else if (x < y) //ถ้า x น้อยกว่า y                                       
    {printf("X is less than Y\n");} //แสดงข้อความ X is less than Y 
    else    //ถ้า x เท่ากับ y                                                  
    {printf("X is equal to Y\n");}    //แสดงข้อความ X is equal to Y

    return 0;   //คืนค่า 0
}
