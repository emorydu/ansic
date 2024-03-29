gets()：不要使用，可能导致分段错误，试图访问未分配的内存，丢弃换行符

gets_s()：与fgets类似，`只能从stdin中读取数据，读到换行符丢弃`

fgets()：第二个参数指名读入字符的最大数量，n-1 或者第一个换行符，`会存储换行符`，第三个参数指名读入的文件 or stdin，返回指向char的指针

s_gets()：读取整行输入并用空字符代替换行符，或者读取一部分输入，并丢弃其余部分

puts()：输出字符串，自带换行，遇到'\0'时结束

fputs()：输出字符串，不带换行

strcat()

strncat()

strcmp()

strncmp()

strcpy()

strncpy()

sprintf()

strchr()：找到字符

const char * c & char[]

Command Line：int argc, char * argv[] (char ** argv)

atoi / atof / atol：字符串转为字符（开头数字字符也可转换），错误返回0

strtol / strtoul / strtod：具有错误检测


1. 字符串字面量 = 字符串常量 属于静态存储类别（该字符串只会被存储一次，在整个程序生命周期内存在）


ctype.h

stdlib.h

string.h

