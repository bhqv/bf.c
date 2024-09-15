# BrainFuck-Interpreter

| Command |  Description                 |
| :----:  |:--------------------------:  |
|    >    | dataptr++                    |
|    <    | dataptr--                    |
|    +    | *(dataptr)++                 |
|    -    | *(dataptr)--                 |
|    .    | putchar(*dataptr)            |
|    ,    | getchar(*dataptr)            |
|    [    | if(*dataptr == 0) goto ]     |
|    ]    | if(*dataptr != ) goto prev[  |
