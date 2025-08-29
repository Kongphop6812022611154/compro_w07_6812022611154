#include <stdio.h>

int main() {
int age, vip_level; //ประกาศตัวแปร age และ vip_level เป็นจำนวนเต็ม
float amount;   //ประกาศตัวแปร amount เป็นจำนวนทศนิยม
int discount = 0;   //ประกาศตัวแปร discount เป็นจำนวนเต็มและกำหนดค่าเริ่มต้นเป็น 0 

    printf("Enter age: ");  //แสดงข้อความเพื่อกรอกอายุ
    scanf("%d", &age);  //รับค่าทำตอบลงในตัวแปร age
    printf("Enter VIP level (1-5): ");  //แสดงข้อความเพื่อกรอก VIP level
    scanf("%d", &vip_level);    //รับค่าทำตอบลงในตัวแปร vip_level
    printf("Enter purchase amount: ");  //แสดงข้อความเพื่อกรอกจำนวนเงินที่ซื้อ
    scanf("%f", &amount);   //รับค่าทำตอบลงในตัวแปร amount

if (age > 60 || vip_level == 3 || vip_level == 4) {discount = 20;}  //ถ้าอายุมากกว่า 60 หรือ vip_level เท่ากับ 3 หรือ vip_level เท่ากับ 4 ให้ discount เท่ากับ 20 
else if ((age >= 30 && age <= 40) && amount > 2000) {discount = 15;}    //ถ้าอายุอยู่ระหว่าง 30-40 และ จำนวนเงินที่ซื้อ มากกว่า 2000 ให้ discount เท่ากับ 15 
else if ((age >= 18 && age <= 25) && amount > 1000) {discount = 10;}    //ถ้าอายุอยู่ระหว่าง 18-25 และ จำนวนเงินที่ซื้อ มากกว่า 1000 ให้ discount เท่ากับ 10 
else if (vip_level == 5 || amount > 50000) {discount = 25;} //ถ้า vip_level เท่ากับ 5 หรือ จำนวนเงินที่ซื้อ มากกว่า 50000 ให้ discount เท่ากับ 25 
else {discount = 0; }   //กรณีอื่นๆ ให้ discount เท่ากับ 0

printf("\n--- Customer Info ---\n");    //แสดงข้อความ --- Customer Info ---
printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip_level, amount); //แสดงข้อมูลลูกค้า

if (discount > 0) {printf("Discount received: %d%%\n", discount);}  //ถ้า discount มากกว่า 0 ให้แสดงข้อความ Discount received: discount% 
else {printf("No discount applied\n");} //ถ้า discount เท่ากับ 0 ให้แสดงข้อความ No discount applied

printf("Thank you for shopping with us!\n");    //แสดงข้อความ Thank you for shopping with us!

return 0;   //คืนค่า 0
}