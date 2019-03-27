/* AUTHOR: JORDAN RANDLEMAN -:- DEMO PROGRAM FOR DYNAMIC ARRAY C LIBRARY */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dynarr.h" /* DYNAMIC ARRAY C LIBRARY "IN LOCAL DIRECTORY" */

int main() {
	/**************************************************************************
	* MULTI INT/CHAR ARRAYS OF DYNAMIC ARRAYS
	**************************************************************************/
	/* USER-DECLARED ARRAY OF DYNAMIC ARRAYS */
	DYN_MAR int_multi_arr[4]; /* multi/2D int array */
	DYN_MAR char_multi_arr[2]; /* multi/2D char array */
	/* INITIALIZE DECLARED ARRAY OF DYNAMIC ARRAYS */
	DMA_INIT(int_multi_arr, 4, 'i');
	DMA_INIT(char_multi_arr, 2, 'c');
	/*************************************************************************
	* INT MULTI DYNAMIC ARRAYS
	**************************************************************************/
	printf("\n============================================================\n");
	printf("===================== 2D DYNAMIC ARRAY =====================\n");
	printf("============================================================\n");
	_am(int_multi_arr[0],0,1); /* add values to 1st dyn arr in array */
	_am(int_multi_arr[0],2,6); /* add values to 1st dyn arr in array */
	_am(int_multi_arr[0],3,9); /* add values to 1st dyn arr in array */
	_am(int_multi_arr[1],0,2); /* add values to 2nd dyn arr in array */
	_am(int_multi_arr[2],0,3); /* add values to 3rd dyn arr in array */
	printf("\nint_multi_arr[0] index 0: %d, index 2: %d, index 3: %d\n",_eim(int_multi_arr[0],0),_eim(int_multi_arr[0],2),_eim(int_multi_arr[0],3));
	printf("int_multi_arr[1] index 0: %d, int_multi_arr[2] index 0: %d\n",_eim(int_multi_arr[1],0),_eim(int_multi_arr[2],0));
	printf("int_multi_arr[0] length: %d\n",_lm(int_multi_arr[0]));
	printf("int_multi_arr[0] index of element 6: %d\n",_im(int_multi_arr[0], 6));
	_pm(int_multi_arr[0],2,7); /* put 7 in existing int_multi_arr[0] idx 2 */
	printf("int_multi_arr[0] swap, index 2 - index 3: %d - %d\n",_eim(int_multi_arr[0],2),_eim(int_multi_arr[0],3));
	_sm(int_multi_arr[0],2,3); /* swap int_multi_arr[0] index 2 & index 3 */
	printf("int_multi_arr[0] swap, index 2 - index 3: %d - %d\n",_eim(int_multi_arr[0],2),_eim(int_multi_arr[0],3));
	_dm(int_multi_arr[0],3); /* delete int_multi_arr[0] index 3 */
	_am(int_multi_arr[0],3,8); /* add 8 to int_multi_arr[0] index 3 */
	printf("int_multi_arr[0] new index 3 element: %d\n\n",_eim(int_multi_arr[0],3));
	/*************************************************************************
	* CHAR MULTI DYNAMIC ARRAYS
	**************************************************************************/
	_am(char_multi_arr[0],0,"hello"); /* add values to 1st dyn arr in array */
	_am(char_multi_arr[0],2,"whats"); /* add values to 1st dyn arr in array */
	_am(char_multi_arr[0],3,"good"); /* add values to 1st dyn arr in array */
	_am(char_multi_arr[1],0,"nice"); /* add values to 2nd dyn arr in array */
	_am(char_multi_arr[1],1,"job"); /* add values to 3rd dyn arr in array */
	printf("\nchar_multi_arr[0] index 0: %s, index 2: %s, index 3: %s\n",_ecm(char_multi_arr[0],0),_ecm(char_multi_arr[0],2),_ecm(char_multi_arr[0],3));
	printf("char_multi_arr[1] index 0: %s, index 1: %s\n",_ecm(char_multi_arr[1],0),_ecm(char_multi_arr[1],1));
	printf("char_multi_arr[0] length: %d\n",_lm(char_multi_arr[0]));
	printf("char_multi_arr[0] index of element 'good': %d\n",_im(char_multi_arr[0], "good"));
	_pm(char_multi_arr[0],2,"how"); /* put 'how' in existing char_multi_arr[0] idx 2 */
	printf("char_multi_arr[0] swap, index 2 - index 3: %s - %s\n",_ecm(char_multi_arr[0],2),_ecm(char_multi_arr[0],3));
	_sm(char_multi_arr[0],2,3); /* swap char_multi_arr[0] index 2 & index 3 */
	printf("char_multi_arr[0] swap, index 2 - index 3: %s - %s\n",_ecm(char_multi_arr[0],2),_ecm(char_multi_arr[0],3));
	_dm(char_multi_arr[0],3); /* delete char_multi_arr[0] index 3 */
	_am(char_multi_arr[0],3,"whoop"); /* add 'whoop' to char_multi_arr[0] index 3 */
	printf("char_multi_arr[0] new index 3 element: %s\n\n",_ecm(char_multi_arr[0],3));
	/* DEINIT DECLARED ARRAY OF DYNAMIC ARRAYS */
	DMA_DNIT(int_multi_arr);
	DMA_DNIT(char_multi_arr);
	/*************************************************************************
	* INT/CHAR DYNAMIC ARRAYS
	**************************************************************************/
	/* USER-DECLARED DYNAMIC ARRAY */
	DYN_AR int_arr1[1], int_arr2[1], char_arr1[1], char_arr2[1];
	/* INITIALIZE DECLARED DYNAMIC ARRAYS */
	DA_INIT(int_arr1, 'i'); /* int array */
	DA_INIT(int_arr2, 'i'); /* int array */
	DA_INIT(char_arr1, 'c'); /* char array */
	DA_INIT(char_arr2, 'c'); /* char array */
	/**************************************************************************
	* INT DYNAMIC ARRAY
	**************************************************************************/
	printf("\n============================================================\n");
	printf("====================== DYNAMIC ARRAYS ======================\n");
	printf("============================================================\n");
	_a(int_arr1,0,6); /* 'a'dd 6 to index 0 in array int_arr1 */
	_a(int_arr1,1,5); /* 'a'dd 5 to index 1 */
	_d(int_arr1,0); /* 'd'elete index 0 */
	printf("\nint_arr1 index 0: %d\n", _ei(int_arr1,0)); /* get index 0 'e'lement */
	_a(int_arr1,3,9); /* 'a'dd 9 to index 3 */
	printf("int_arr1 index 3: %d\n", _ei(int_arr1,3)); /* get index 3 'e'lement */
	_p(int_arr1,3,4); /* 'p'ut value 4 in index 3 */
	printf("int_arr1 index 3: %d\n", _ei(int_arr1,3)); /* get index 3 'e'lement */
	_d(int_arr1,3); /* 'd'elete index 3 */
	printf("int_arr1 length: %d\n", _l(int_arr1)); /* array 'l'ength */

	_p(int_arr1,0,6); ///* 'a'dd 6 to index 0 */
	printf("int_arr1 index 0: %d\n", _ei(int_arr1,0)); /* get 'e'lement at index 0 */
	printf("int_arr1 index w/ value 6: %d\n", _i(int_arr1,6)); /* return 'i'ndex w/ 6, or -1 DNE */

	_a(int_arr2,0,8);   /* 'a'dd 8 to index 0 in array int_arr2 */
	_a(int_arr2,5,7); /* 'a'dd 7 to index 5 */
	_p(int_arr2,3,4); /* 'p'ut 4 to index 3 */
	printf("\nSwap int_arr2 values: index 0: %d - index 3: %d\n", _ei(int_arr2,0), _ei(int_arr2,3));
	_s(int_arr2,0,3); /* 's'wap index 0 cell with index 3 cell */
	printf("Swap int_arr2 values: index 0: %d - index 3: %d\n\n", _ei(int_arr2,0), _ei(int_arr2,3));
	/**************************************************************************
	* CHAR DYNAMIC ARRAY
	**************************************************************************/
	_a(char_arr1,0,"hello"); /* 'a'dd 'dude' to index 0 in char_arr1 */
	_a(char_arr1,2,"my"); /* 'a'dd 'my' to index 2 */
	printf("Index 0: %s - index 2: %s\n", _ec(char_arr1,0), _ec(char_arr1,2));
	printf("char_arr1 length: %d\n", _l(char_arr1));
	_d(char_arr1,2); /* 'd'elete index 2 */
	_a(char_arr1,2,"guy"); /* 'a'dd 'guy' to index 2 */
	printf("Index 2: %s\n",_ec(char_arr1,2)); /* get 'e'lement at index 2 */

	printf("Indices of 'guy' - 'hello': %d - %d\n", _i(char_arr1,"guy"), _i(char_arr1,"hello"));

	_a(char_arr2,0,"hello"); /* 'a'dd '' to index 0 */
	_a(char_arr2,3,"bob"); /* 'a'dd '' to index 3 */
	printf("\nSwap char_arr2 values - index 0, index 3: %s, %s!\n", _ec(char_arr2,0), _ec(char_arr2,3));
	_s(char_arr2,0,3); /* 's'wap index 0 cell with index 3 cell */
	printf("Swap char_arr2 values - index 0, index 3: %s, %s!\n\n", _ec(char_arr2,0), _ec(char_arr2,3));
	/* DEINIT DECLARED DYNAMIC ARRAYS */
	DA_DNIT(int_arr1);
	DA_DNIT(int_arr2);
	DA_DNIT(char_arr1);
	DA_DNIT(char_arr2);
	return 0;
}
