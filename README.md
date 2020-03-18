
------------

# **_printf function**

------------

&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;
[![Holberton School](https://blog.holbertonschool.com/wp-content/uploads/2019/06/cherry72-942x1024.png "Holberton School")](http://https://www.google.com/url?sa=i&url=https%3A%2F%2Fblog.holbertonschool.com%2Fpage%2F3%2F&psig=AOvVaw1c7VaVLmbh7OsYavj0_jSN&ust=1584578043776000&source=images&cd=vfe&ved=0CAIQjRxqFwoTCIjlqq3jougCFQAAAAAdAAAAABAD "Holberton School")

------------
&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;
## Description

------------
In this project we implement our printf function as the **first macro project**, later in this section. I will give examples of the functions of our **_printf**.

------------
&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;
## Prototype

------------

### int _printf(const char *format, ...);

------------
&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;
## Examples

------------

| **STRING**  |**CHARACTER**   | **INTEGER**  |
| ------------ | ------------ | ------------ |
|  **Input:**_printf("**%s\n**", 'Hello Holberton' );  | **Input:** _printf("My favorite letter is **%c\n**", 'A' ); | **Input:**_printf("Your Age is : **%i\n**", 18 );  |
| **Output:**Hello Holberton  | **Output:**My favorite letter is D | **Output:**Your Age is: 18  |

------------

------------
&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;
## Mandatory Tasks

------------

**1. ** Write function that produces output  with conversion specifiers **c**, **s**, and **%**.
**2.** Handle conversion specifiers **d**, **i**.
**3.** Create a **man page** for your function.

------------
&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;
## Advanced Tasks

------------

**1.** Use a local **buffer of 1024** chars in order to call write as little as possible 

------------
&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;
## Files
|  **File** | **Explanation**  |
| ------------ | ------------ |
| **int print_char(va_list, char *, int);** | This function takes a list of arguments (through va_list), the buffer (with or without space already filled), and the size of the buffer. With this data, the function asigns to a variable, using va_arg, the first character it finds. Then, it assigns the contents of that variable to the buffer, in a new space contiguous to whatever was already in it, an returns an integer of 1, which is the ammount of space taken by the character inside the buffer.  |
|  ** int print_string(va_list, char *, int);** |  This function takes a list of arguments (through va_list), the buffer (with or without space already filled), and the size of the buffer. With this data, the function assigns to a variable string the first string it finds in the list. Then, with the help of an int variable initialized in 0, it traverses each char of the string and assigns it to the buffer with the help of the inherited variable that measures the size of the string. It finally returns the value of the iterator, whose job was to measure the length of the string. |
| **int print_pctg(va_list, char *, int);** | This function takes a list of arguments (through va_list), the buffer (with or without space already filled), and the size of the buffer. SInce we don't need the list, the function empties (voids) what was inherited through va_list. It then adds to the buffer a '%' sign and returns a integer of 1, since that is the ammount of space taken by the sign.|
------------
&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;&mdash;
## Authors

------------
[Daniela Morales Barrera] | (https://github.com/daniela2001-png) - 1524@holbertonschool.com
[Christian Campos] | (https://github.com/ChristianCampos-55) - 1566@holbertonschool.com 

------------
