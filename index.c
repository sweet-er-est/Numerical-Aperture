//Numerical apperture of an Optical Fibre...

#include<stdio.h>
#include<math.h>


int main(){
    float xxx[5],fff[5];
    for(int i=0;i<5;i=i+1){
        printf("Enter the Spot Diameter: ");
        scanf("%f",&xxx[i]);
    }
    for(int i=0;i<5;i=i+1){
        printf("Enter the Distance between Screen and Source: ");
        scanf("%f",&fff[i]);
    }
    float tan1[5];
    for(int i=0;i<5;i=i+1){
        tan1[i] = xxx[i]/(2*fff[i]);
    }
    float theta[5];
    for(int i=0;i<5;i=i+1){
        theta[i] = (atan(tan1[i])*180)/(3.1415926535);
    
    }
    float theta_avg;
    theta_avg = (theta[0]+theta[1]+theta[2]+theta[3]+theta[4])/5;
    
    float y = (theta_avg*3.1415926535)/180;
    
    float arr[5][3];
    for(int i=0;i<5;i=i+1){
        arr[i][0] = xxx[i];
    }
    for(int i=0;i<5;i=i+1){
        arr[i][1] = fff[i];
    }
    for(int i=0;i<5;i=i+1){
        arr[i][2] = theta[i];
    }

    printf("\n");
    printf("Spot diameter(d)\t");
    printf("Distance(f)\t");
    printf("\tTheta\n");
    for(int i=0;i<5;i=i+1){
        for(int j=0;j<3;j=j+1){
            printf("%f\t\t",arr[i][j]);
        }printf("\n");
    }
    printf("\n");
    printf("The average Theta is %f\n",theta_avg);

    float numerical_apperture = sin(y);
    printf("The Numerical Apperture of Optical Fibre is %f\n",numerical_apperture);
    printf("\n");
    printf("For terminologies refer the webpage\n");
    

return 0;
}
