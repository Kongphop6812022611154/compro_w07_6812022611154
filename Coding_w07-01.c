#include <stdio.h>

int main() {
    float score, midterm;   //ประกาศตัวแปร score และ midterm เป็นจำนวนทศนิยม
    printf("Enter Your midterm score: ");   //แสดงข้อความเพื่อกรอกคะแนน
    scanf("%f", &score);    //รับค่าคำตอบลงในตัวแปร score            

    if (score >= 50)    //ถ้าคะแนนมากกว่าหรือเท่ากับ 50 
    {midterm = score + (score * 0.05);}   //ถ้าคะแนนมากกว่าหรือเท่ากับ 50 ให้ midterm เท่ากับ score + (score * 0.05)
    
    else    //ถ้าคะแนนน้อยกว่า 50             
    {midterm = score;}  //ถ้าคะแนนน้อยกว่า 50 ให้ midterm เท่ากับ score
    printf("Midterm score = %2.f\n", midterm);  //แสดงขคะแนนที่ได้
    printf("End of evalution\n");   //แสดงข้อความ End of evalution
    
    return 0;   //คืนค่า 0
}