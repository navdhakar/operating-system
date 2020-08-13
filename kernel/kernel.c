/*#include</home/navdeep/Desktop/operating-system/drivers/screen.h>*/
/*void print(char*message);
extern void kmain();*/
void main() {
    kmain(); 
}
/*void print(char*message){
char * p_video_buffer = (char*)0xb8000;
char * p_next_char = message;
    while(*p_next_char){
    *p_video_buffer = *p_next_char;
      p_next_char++;
     p_video_buffer += 2;
     
    }
}*/

void kmain(){
 print("entered in main region usa via driver");
    while(1){

    }
}
