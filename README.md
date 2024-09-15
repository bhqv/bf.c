# BrainFuck-Interpreter

| Command |                              Description                             |
|:-------:|:--------------------------------------------------------------------:|
|    >    | Move the pointer to the right                                        |
|    <    | Move the pointer to the left                                         |
|    +    | Increment the memory cell under the pointer                          |
|    -    | Decrement the memory cell under the pointer                          |
|    .    | Output the character signified by the cell at the pointer            |
|    ,    | Input a character and store it in the cell at the pointer            |
|    [    | Jump past the matching ] if the cell under the pointer is 0          |
|    ]    | Jump back to the matching [ if the cell under the pointer is nonzero |
