#include <stdio.h>

int main(){
    int level;  //ประกาศตัวแปร level เป็นจำนวนเต็ม                                  
    printf("Enter level (1-4): ");  //แสดงข้อความเพื่อกรอก level          
    scanf("%d", &level);  //รับค่าทำตอบลงในตัวแปร level               

    if (level <= 0)     //ถ้าlevelน้อยกว่าหรือเท่ากับ 0
    {printf("The level below 1 is not allowed\n");} //แสดงข้อความ The level below 1 is not allowed
    else if (level > 4) //ถ้าlevelมากกว่า 4 
    {printf("The level above 4 is not allowed\n");} //แสดงข้อความ The level above 4 is not allowed
    
    else {  //ถ้าlevelอยู่ระหว่าง1-4
       switch (level) { //ตรวจสอบเงื่อนไขของlevel
        case 1: printf("Beginner\n"); break;    //สมาชิกระดับ 1 แสดงข้อความ Beginner     
        case 2: printf("Intermediate\n"); break;    //สมาชิกระดับ 2   แสดงข้อความ Intermediate        
        case 3: printf("Advanced\n"); break;    //สมาชิกระดับ 3   แสดงข้อความ Advanced            
        case 4: printf("Expert\n"); break;  //สมาชิกระดับ 4   แสดงข้อความ Expert
        default: printf("Invalid level\n");     //กรณีที่ไม่เท่ากับ 1,2,3,4 แสดงข้อความ Invalid level          
    }}
    return 0;   //คืนค่า 0                                       
}