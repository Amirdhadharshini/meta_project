#include<stdio.h>

int main(){
    char biodata[100];
    printf("\t\t\t\t\t\t..........BIODATA.........\n\n",biodata);
    char name[100];
    printf("\nNAME:",name);
    scanf("%s",&name);
    char address[100];
    printf("\nADDRESS:",address);
    scanf("%s",&address);
    int pincode;
    printf("\nPINCODE:",pincode);
    scanf("%d",&pincode);
    int phone [100];
    printf("\nPHONE NO:",phone);
    scanf("%d",&phone);
    char email[100];
    printf("\nEMAIL:",email);
    scanf("%s",&email);
    char educational [100];
    printf("\n.......EDUCATIONAL QUALIFICATION........\n",educational );
    char college[100];
    printf("\nCOLLEGE:",&college);
    scanf("%s",&college);
    int hsc;
    printf("\nHSC MARK:",hsc);
    scanf("%d",&hsc);
    int sslc;
    printf("\nSSLC:",sslc);
    scanf("%d",&sslc);
    char skills[100];
    printf("\nSKILLS:",skills);
    scanf("%s",&skills);
    char certification[100];
    printf("\nCERTIFICATION:",certification);
    scanf("%s",&certification);
    char project[100];
    printf("\nPROJECT:",project);
    scanf("%s",&project);
    char hobby[100];
    printf("\nHOBBY:",hobby);
    scanf("%s",&hobby);
    return 0;

}
