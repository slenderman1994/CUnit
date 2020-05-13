#include <stdio.h>
#include "max_and_sum.h"
#define size 3

#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

void test_maxi(void){
    CU_ASSERT(maxi(0,2) == 2);
    CU_ASSERT(maxi(0,-2) == 9);
    CU_ASSERT(maxi(1,2) == 2);
}



int main() {
    printf("enter the elemets you want into the array\n");
    double array[size];
    double average1, max1,j = size;
    int i;


    for(i=0; i<size;i++) {
        scanf("%lf", &array[i]);
    }

    //printf("")
    average1 = average(array, j);
    max1 = max(array, j);

    printf("average = %lf \nmax = %lf", average1, max1);


    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("maxi_test", 0, 0);

    CU_add_test(suite, "maxi_fun", test_maxi);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();


    return 0;
}
