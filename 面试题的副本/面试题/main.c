//
//  main.c
//  面试题
//
//  Created by 王璐 on 2023/3/17.
//

#include <stdio.h>
#include "string.h"
#include<stdlib.h>
#include <stdio.h>
//#include<stdio.h>
//int main()
//{
//char a;
//char *str=& a;
//strcpy(str,"h");
//printf(str);
//return 0;
//}
int total_peach(int rest, int day);
int main()
{
    int rest = 1;
    int day = 3;
    printf("猴子一共摘了%d个桃子", total_peach(rest,day));
}
int total_peach(int rest, int day)
{
    day--;
    if(day==0)
        return 1;
    return (total_peach(rest,day)+1)*2;
}




//int removeDuplicates(int* nums, int n) {
//    if (n == 0) {
//        return 0;
//    }
//    int a = 0, b = 0;
//    while (b < n - 1) {
//        b++;
//        if (nums[a] != nums[b]) {
//            nums[a++] = nums[b];
////        }
////    }
////    for (int i = 0; i < a; i++){
////        printf("%d\n", nums[i]);
////    }
////    return a ;
////}
//
//
//
//int removeDuplicates(int* nums, int n) {
//    if (n == 0) {
//        return 0;
//    }
//    int a = 0, b = 0;
//    while (b < n - 1) {
//        b++;
//        if (nums[a] != nums[b]) {
//            nums[++a] = nums[b];
//
//        }
//    }
//    for (int i = 0; i < a +1 ; i++){
//        printf("%d\n", nums[i]);
//    }
//    return a + 1;
//}
//int main()
//{
//    int arr[11] = {0, 0, 1, 2, 4, 6, 8, 8, 8, 8,10 };
//    removeDuplicates(arr, 10);
//
//}


//#include<stdio.h>
//#include<stdlib.h>
//typedef union a{
//    double number;
//    char string[13];
//}b;
//typedef struct c{
//    b d;
//    int e;
//    double f;
//    char h;
//}g;
//int main(void){
//   int nums[]={1,5,7};
//  int cnt=0;
//  switch(0){
//      case 0:
//        cnt = printf("%d\n",sizeof(b));
//    case 1:
//      printf("%d\n",cnt+=sizeof(g));
//    case 2:
//      cnt+=1[nums];
//          printf("%d",cnt);
//      break;
//    case 3:
//        cnt--;
//    case 4:
//        cnt ^=2;
//  }
//  printf("%d",cnt);
//  return 0;
//}
//#define FUNC(x,y)(x>y)?'a':'b'
//int main() {
//    unsigned int a = 10;
//    char b = 1;
//    unsigned char c = -1;
//    printf("%d",c);
//    printf("%c,%c\n",FUNC(a, b),FUNC(a, c));
//    return 0;
//}
