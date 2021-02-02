# FizzBuzz
FizzBuzz in C (optimized)

## Usage

```
./build/main <your_output_file>
```
## How to run

Make sure that you have *make*, *clang* compiler

1. Build
```
make
```
2. Run
```
./build/main <your_output_file>
```

Makefile also contains additional targets: ```run_null``` and ```run_default``` which respectevely output to ```/dev/null``` and ```/dev/stdout```.

If you want do remove all object files and **build** folder execute ```make clean```

## Notes
+ Program is fixed on 1,000,000,000 iterations.
+ It uses pre-loaded pattern. Fills it in runtime with necessary numbers and write to file.
+ It took about 2386 s. to output to /dev/stdout, 126 s. to output to text file and 24 s. to output to /dev/null in my machine
