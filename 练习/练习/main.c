//
//  main.c
//  练习
//
//  Created by MS on 16-3-2.
//  Copyright (c) 2016年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define PI 3.14
int main(int argc, const char * argv[]) {
#if 0
    int a =7,b =3;
    printf("和为:%d\n",a+b);
    printf("差为:%d\n",a-b);
    printf("积为:%d\n",a*b);
    printf("商为:%d\n",a/b);
    printf("余数为:%d\n",a%b);
#endif
#if 0
    char c;
    scanf("请输入一个大写字母:%c\n",&c);
    printf("小写字母为:%c\n",c+32);
#endif
#if 0
    float r =1.5;
    printf("周长为:%f\n",2*PI*r);
    printf("面积为:%f\n",pow(r,2)*PI);
#endif
#if 0
    float s;
    scanf("%f",s);
    bool a,b;
    if((a=s>=60)&&(b=s<=69))
        printf("成绩为C%f\n",s);
#endif
#if 1
    char ch;
    printf("请输入一个字母:");
    scanf("%c",&ch);
    ch=((ch>='A'&&ch<='Z')?(ch+32):ch);
    printf("%c\n",ch);
#endif
    return 0;
}
