#include <stdio.h> 

#define START_ID 1000
struct student {
    int id;    
    char name[20];  
    int score; 
};

int main(int argc, char *argv[]) 
{  
    struct student record;
    char c;
    int id;
    FILE *fp;

    if (argc != 2) {
        fprintf(stderr, "[Usage]: %s [file name]\n", argv[0]);
        return 1;
    }

    if ((fp = fopen(argv[1], "rb")) == NULL ) {
        fprintf(stderr, "file read error\n");
        return 2;
    }

    do {    
        printf("Enter ID (search): ");
        if (scanf("%d", &id) == 1) {
            fseek(    );
            if ((fread(         ) > 0) && (record.id != 0))
                printf("ID: %8d Name: %4s Score: %4d\n", 
                        record.id, record.name, record.score);
            else printf("Record %d Not Found\n", id);

        }
        else printf("Input Error");

        printf("Search Again ?(Y/N)");
        scanf(" %c", &c); 
    } while (c=='Y');

    fclose(fp);
    return 0;
} 

