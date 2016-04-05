###Exercise 1-1
Declare a `main()` function without explicitly providing a return type will make the compiler produce a warning,
```shell
hello.c:3:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
```

Without the first line (not include the stdio library), it can still be compiled and run (print hello, world!)! It seems that the compiler automatically produce a prototype for printf. See [Stackoverflow](http://stackoverflow.com/questions/336814/why-include-stdio-h-is-not-required-to-use-printf).

###Exercise 1-2
The compiler uttered a warning but the program can still run correctly.
```shell
hello.c:6:13: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
```


###Exercise 1-3
[ex1_3.c](ex1_3.c)
In the terminal, enter
```shell
$cc ex1_3.c
$./a.out
```
The result would be
```shell
Fahrenheit-Celsius Table

Fahrenheit | Celsius
     0        -17.8
    20         -6.7
    40          4.4
    60         15.6
    80         26.7
   100         37.8
   120         48.9
   140         60.0
   160         71.1
   180         82.2
   200         93.3
   220        104.4
   240        115.6
   260        126.7
   280        137.8
   300        148.9
```

###Exercise 1-4
[ex1_4.c](ex1_4.c)