#define VIDEO_ADDRESS 0xb8000
#define MAX_ROWS 25
#define MAX_COLUMNS 80
#define WHITE_ON_BLACK 0x0e

# define REG_SCREEN_CTRL 0x3D4
# define REG_SCREEN_DATA 0x3D5

void print_char(char*charachter);