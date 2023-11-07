#include <stdio.h>
typedef struct {
    char name[10];
    int age;
} person;


int main(){
    int i=3;
    person people[3];
    for(i=0;i<3;i++){
        scanf(" %s %d" ,people[i].name ,&people[i].age );
    }
    for(i=0;i<3;i++){
        printf("Name: %s, Age: %d\n" ,people[i].name ,people[i].age );
    }

    
    return 0;


}