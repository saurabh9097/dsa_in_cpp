#include<stdio.h>
#include<time.h>
struct name
    {
        char first[30];
        char middle[30];
        char last[30];
    };
struct st
{
    long number;
    struct name namee;
    
};

int main() {
    // struct st student[5];
    long temp_student_numnber=(2004*100+8)*10000+rand(1000);
    struct  st student={temp_student_numnber,{"dhiraj","kumar","khali"}};
    printf("%d",student.number);
}
