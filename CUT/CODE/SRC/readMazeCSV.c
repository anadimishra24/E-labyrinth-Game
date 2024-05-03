

/*******************************************************************************
 * File    : readMazeCSV.c
 * Author  : Anadi Mishra
 * Date    : 22-Oct-2022
 * Purpose : This file reads the CSV file, depending on the players choice.
 *          : Elabyrinth game
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define MAX_ROW 20
//#define MAX_COL 20   
//#define LINE_BUFFER 400


int ans[MAX_ROW][MAX_COL];
int temp=0, var=0;
int row=0, col=0;
int mode=0, count=0, run=1;
int a, b; //type;
char type;

int max(int q,int r){
    if(q>r){
        return q;
    }
    return r;
}


int readMazeCSV(char* fileName)
{
    char buffer[LINE_BUFFER] ;
    char *record,*line;

    FILE *fstream = fopen(fileName,"r");
        if(fstream == NULL)
            {
                printf("\n File opening failed ");
                return -1 ;
            }

    row=1;
    col=0;

    while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
        {
            record = strtok(line,",");
            col++;

            while(record != NULL)
            {
                ans[row][col] = atoi(record) ;
                record = strtok(NULL,",");
                temp=max(col,temp);
                col++;
            }

            col=0;
            var=max(row,var);
            row++;
        }

    return 0;
 }



