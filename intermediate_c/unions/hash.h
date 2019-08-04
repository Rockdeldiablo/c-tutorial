#define MAX_CHARS 4
#define NUM_STRINGS 100
union hash {
char name[MAX_CHARS];
long int index;
};
union Data {
   int i;
   float f;
   char str[20];
} data;  