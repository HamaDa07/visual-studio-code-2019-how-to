
#include <stdio.h>
int main(void){
   int student=0,OK_line=0;//生徒数//合格点
   int exam_answer=0;//テストの点数
   int absent_student,final_answer,i=0;//生徒の欠席回数、for分用
   int student_number=0;//学生番号  
   
   printf("生徒数と合格点を表示");
   scanf("%d""%d",&student,&OK_line);
   
   for(i=1;i<student;++i){
       student_number=0;
       exam_answer=0;
       final_answer=0;
       printf("生徒のテストの点数と、欠席回数");
       scanf("%d""%d",&exam_answer,&absent_student);
       
       if (exam_answer-(absent_student*5)<0){
           final_answer=0;
       }else{
           final_answer=exam_answer-(absent_student*5);
       }
       if (OK_line<=final_answer){
           printf("%d番目の生徒は合格\n",i);
       }
       
   }
    
}   