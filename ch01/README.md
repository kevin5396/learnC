###Exercise 1-1.
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
