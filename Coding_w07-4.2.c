#include <stdio.h>
int main() {
    int Level;  //ประกาศตัวแปร level เป็นจำนวนเต็ม                                                             
    printf("Enter membership level(1-4): ");    //แสดงข้อความเพื่อกรอก level                                 
    scanf("%d", &Level);    //รับค่าทำตอบลงในตัวแปร level                                                    
    if (Level == 1) //ถ้า Level เท่ากับ 1
    {printf("Silver Member :You get 5%% discount\n");}  //แสดงข้อความ Silver Member :You get 5% discount 
    else if (Level == 2)    //ถ้า Level เท่ากับ 2 
    {printf("Gold Member :You get 10%% discount+Reward points\n");} //แสดงข้อความ Gold Member :You get 10% discount+Reward points 
    else if (Level == 3)    //ถ้า Level เท่ากับ 3 
    {printf("Platinum Member :You get 15%% discount + Reward points + Birthday gift\n");}   //แสดงข้อความ Platinum Member :You get 15%% discount + Reward points + Birthday gift 
    else if (Level == 4) {  //ถ้า Level เท่ากับ 4                                                
        printf("Diamond Member : You get all prerogative + VIP events\n");  //แสดงข้อความ Diamond Member : You get all prerogative + VIP events   
    } else  //กรณีที่ที่ไม่เท่ากับ 1,2,3,4 
    {printf("Invalid membership level\n");} //แสดงข้อความ Invalid membership level
    
    return 0;   //คืนค่า 0
}
//if-else if
//ข้อดี: ใช้งานง่าย, อ่านง่าย
//ข้อเสีย: เมื่อมีเงื่อนไขมากๆ อาจทำให้โค้ดยาวและซับซ้อน
//switch-case
//ข้อดี: เหมาะกับการตรวจสอบค่าคงที่หลายๆ ค่า, โค้ดดูเป็นระเบียบ
//ข้อเสีย: ไม่สามารถใช้กับเงื่อนไขที่ซับซ้อนได้, จำกัดเฉพาะค่าคงที่เท่านั้น
//ควรใช้switch-case เมื่อมีค่าคงที่หลายค่าและใช้ if-else if เมื่อมีเงื่อนไขที่ซับซ้อนหรือไม่ใช่ค่าคงที่