//Jadilah seperti roket, mahal dan banyak diminati

#include <stdio.h>
void delay( unsigned int value){
    unsigned int hitung1 =0;
    unsigned int hitung2 = 0;

    for(hitung1 = 0; hitung1 < value ; hitung1++ ){
        for(hitung2 = 0; hitung2 < hitung1 ; hitung2++ ){

        }
    }
}
const char roket[] =
"           ^ \n\
          /^\\\n\
          |-|\n\
          | |\n\
          | |\n\
          | |\n\
          | |\n\
          | |\n\
         /| |\\\n\
        / | | \\\n\
       |  | |  |\n\
        `-\"\"\"-`\n\
";

int main(){

    int jumpControlAtBottom = 0;
    const int someDelay = 15000;
    int shifControl = 0;

    for (jumpControlAtBottom = 0; jumpControlAtBottom < 30; ++jumpControlAtBottom){
        printf("\n");
    }
    fputs(roket,stdout);

    for (shifControl = 0; shifControl < 30; ++shifControl){
        delay(someDelay);
        printf("\n");
    }
    return 0;
}