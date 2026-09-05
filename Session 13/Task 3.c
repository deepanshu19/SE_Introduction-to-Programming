//3.Add two more song names to playlist.txt without deleting the existing ones by opening the file in append mode (a).

#include <stdio.h>

int main() {
   FILE *file;

   file = fopen("playlist.txt","a");

   if(file == NULL){
     printf("Error opening file.\n");
        return 0;
   }

   fprintf(file,"Blinding Lights\n");
   fprintf(file,"Levitating\n");
   fprintf(file,"One Love\n");

   fclose(file);

   printf("Songs added successfully.\n");
   return 0;
}
