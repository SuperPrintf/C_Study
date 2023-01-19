#include <stdio.h>

int main(int argc, char **argv){
    int* p = NULL; //声明了p变量,该变量类型为int*类型,NULL关键字表示
    int s = 0; //声明一个int类型变量
    int nums[] = {0, 1, 2}; //声明了一个名为nums的数组,长度为3

    p = nums; //此时p指针指向了nums数组的第一个变量
    s = *p + 1; //让s的值等于p指向地址的下一个变量
    printf("p = %p, *p + 1 = %d\n", p, s); //%p是指针类型的格式转换符,输出格式为16进制

    p = &s; //通过取地址符(&)获取s的地址,并赋值给p
    printf("p = %p, s = %d\n", p, s);
    *p = 20; //通过指针解引用(*)改变s的值
    printf("p = %p, s = %d\n", p, s); //p变量不变,s变量改变
}
