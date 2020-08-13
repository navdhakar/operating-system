#include</home/navdeep/Desktop/operating-system/drivers/screen.h>

/*void print_char(char character, int row, int col, char attribute_byte){


}*/
void print(char*message){
char * p_video_buffer = (char*)0xb8000;
char * p_next_char = message;
    while(*p_next_char){
    *p_video_buffer = *p_next_char;
      p_next_char++;
     p_video_buffer += 2;
     
    }
}



