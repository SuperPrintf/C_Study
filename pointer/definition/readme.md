<div align="center">

# **C Language Pointer**</div>

## 1. **关于内存**
* 计算机最关键的组成之一就是随机存取存储器(RAM),是与CPU直接交换数据的内部存储器<br>
* 它用于暂时存放CPU中的运算数据,并作为CPU高速总线向存储等低速设备之间的数据交换媒介<br>
* 既可向指定单元存入信息又可从指定单元读出信息<br>
* 任何RAM中存储的信息在断电后均会丢失，所以RAM是易失性存储器<br>
* 内存中每一个单元即位(bit)只能存储两种状态其中一种(0 or 1)即二进制<br>
* **内存通过地址来进行寻址,编码从0开始到总容量为止**<br>
* 每一个寻址单位大小为1字节(Byte)即8位(bit)<br>
* 内存地址的寻址范围与系统位相关,因此指针通常与`usigned int`数据类型等价(即存储的二进制位数等于系统位数)<br>
* 例如32位机可寻址2^32(4G)个地址,64位机可寻址2^64个地址<br>
![内存部件] [/img/RAM.jpeg "DDR内存条"]
## 2. **指针的含义**
* 指针类型不是一个独立的类型,它是一类拥有指针特性变量的统称<br>
* 指针的作用是指向`计算机内存`中的某个空间,因此指针也是一种整型变量(代表目标地址在内存中的)<br>
* 所有变量类型(包括指针类型)都可以有自己类型的指针<br>
* 所有的数组都是指针<br>
* 指针指向的目标地址可以间接的调用,即通过地址来找到相应数据而非直接访问数据<br>
* 由于指针是变量,因此它指向的地址可以随时改变,具有灵活性<br>
* 指针虽然只指向一个地址,但是指针拥有加减运算符,可以访问连续空间<br>
## 3. **指针的使用**
* 指针的变量声明通过`[type] *`的形式表示，该指针的类型即为相应的type *类型<br>
* **指针使用样例**<br>
```C
#include <stdio.h>

int main(int argc, char **argv){
    int* p = NULL;
    int s = 0;
    int nums[] = {0, 1, 2};

    p = nums;
    s = *p + 1;
    printf("p = %p, *p + 1 = %d\n", p, s);

    p = &s;
    printf("p = %p, s = %d\n", p, s);
    *p = 20;
    printf("p = %p, s = %d\n", p, s);
}
```
* 语句解析<br>
    * *int\* p = NULL;*<br>


* 何为`int *`何为const<br>
    * `int*`类型