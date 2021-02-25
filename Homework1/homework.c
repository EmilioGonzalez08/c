#include <stdio.h>
#include <string.h>
#define MAX 1000
#define IN 1
#define OUT 0

int main() {
    
  int a, b, c, d;
  
  char input[MAX];
  char output[MAX];
      
  printf("Write your HTML code here: ");
  gets(input);
  b = strlen(input);
  c = OUT;
  printf("\n Plain text: ");

  for (a = 0; a<b ; ++a) {     // im really praying for this to work after making 10000 mistakes 
    
    if (input[a] == '<')
      c = IN;
    if (input[a] == '>')
      c = OUT;
    if (c == OUT)
      output[a] = input[a];
    
    if (output[a] == '>')
        output[a] = ' ';
        
    printf("%c",output[a]); 
  
    }
    
 }
