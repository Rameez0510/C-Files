// atleast 40% in each subject to pass and 33% total to pass
#include <stdio.h>

int main()
{
    int science, maths, sst; float total;
    
    printf("Enter science marks \n");
    scanf("%d", &science);
    
    printf("Enter maths marks \n");
    scanf("%d", &maths);

    printf("Enter Social Science marks \n");
    scanf("%d", &sst);

    printf("Enter total marks \n");
    scanf("%f", &total);

    //Calculating each percentage
    float sciPer, matPer, sstPer;
    sciPer = (science/total)*100;
    matPer = (maths/total)*100;
    sstPer = (sst/total)*100;

    float totalPer = (sciPer + matPer + sciPer)/3;

    printf("This student got %f%% in Science,\n", sciPer);
    printf("he got %f%% in Maths\n", matPer);
    printf("and he got %f%% in Social Science\n", sstPer);
    printf("\nTotal percent of this student is %f%%\n", totalPer);

    

    //Final Result
    if (sciPer > 33 && matPer > 33 && sciPer > 33 && totalPer > 40)
    {
        printf("He got passed!!");
    }
    else
    {
        printf("He got failed!!");
    }
    

    return 0;
}