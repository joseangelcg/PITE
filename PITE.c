
#include "PITE.h"
#include "types.h"

int8 MyMap[V_MTS][H_MTS];

void vInit(void){
    uint8 i,j;

    for(i=0;i<V_MTS;i++){
        for(j=0;j<H_MTS;j++){
            MyMap[i][j]=(i-j);
        }
    }
}

void main(void){
    
    FILE *myfile;
    uint8 i,j;

    vInit();

    myfile=fopen("test.txt","w+");
    
    for(i=0; i<V_MTS; i++){
        for(j=0;j< H_MTS;j++){
            fprintf(myfile,"%i\t",MyMap[i][j]);
        }
        fprintf(myfile,"\n");
    }

    fclose(myfile);
}
