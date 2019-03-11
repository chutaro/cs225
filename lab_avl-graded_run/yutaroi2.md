


## Score: 50/50 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==28486== Memcheck, a memory error detector
==28486== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28486== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28486== Command: ./test -r xml "test_find"
==28486== 
==28486== 
==28486== HEAP SUMMARY:
==28486==     in use at exit: 0 bytes in 0 blocks
==28486==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==28486== 
==28486== All heap blocks were freed -- no leaks are possible
==28486== 
==28486== For counts of detected and suppressed errors, rerun with: -v
==28486== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==28500== Memcheck, a memory error detector
==28500== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28500== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28500== Command: ./test -r xml "test_insert_big"
==28500== 
==28500== 
==28500== HEAP SUMMARY:
==28500==     in use at exit: 0 bytes in 0 blocks
==28500==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==28500== 
==28500== All heap blocks were freed -- no leaks are possible
==28500== 
==28500== For counts of detected and suppressed errors, rerun with: -v
==28500== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==28506== Memcheck, a memory error detector
==28506== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28506== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28506== Command: ./test -r xml "test_remove_big"
==28506== 
==28506== 
==28506== HEAP SUMMARY:
==28506==     in use at exit: 0 bytes in 0 blocks
==28506==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==28506== 
==28506== All heap blocks were freed -- no leaks are possible
==28506== 
==28506== For counts of detected and suppressed errors, rerun with: -v
==28506== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **yutaroi2** using **8a38a309ddb3973b0f3484db04cd3f17484ce7c7** (from **March 11th 2019, 12:15:00 am**)
