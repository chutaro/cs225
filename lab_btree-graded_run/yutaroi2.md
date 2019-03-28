


## Score: 55/55 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [5/5] - test_insertion_idx_emp

- **Points**: 5 / 5





### ✓ - [5/5] - test_insertion_idx_small

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_small

- **Points**: 5 / 5

```
==2686== Memcheck, a memory error detector
==2686== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2686== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2686== Command: ./test -r xml "test_btree3_small"
==2686== 
==2686== 
==2686== HEAP SUMMARY:
==2686==     in use at exit: 0 bytes in 0 blocks
==2686==   total heap usage: 1,798 allocs, 1,798 frees, 227,168 bytes allocated
==2686== 
==2686== All heap blocks were freed -- no leaks are possible
==2686== 
==2686== For counts of detected and suppressed errors, rerun with: -v
==2686== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree3_small" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree3_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree128_med_rand

- **Points**: 5 / 5

```
==2692== Memcheck, a memory error detector
==2692== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2692== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2692== Command: ./test -r xml "test_btree128_med_rand"
==2692== 
==2692== 
==2692== HEAP SUMMARY:
==2692==     in use at exit: 0 bytes in 0 blocks
==2692==   total heap usage: 2,643 allocs, 2,643 frees, 1,579,960 bytes allocated
==2692== 
==2692== All heap blocks were freed -- no leaks are possible
==2692== 
==2692== For counts of detected and suppressed errors, rerun with: -v
==2692== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree128_med_rand" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="147">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="20001" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="20001" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree256_med_rand

- **Points**: 5 / 5

```
==2694== Memcheck, a memory error detector
==2694== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2694== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2694== Command: ./test -r xml "test_btree256_med_rand"
==2694== 
==2694== 
==2694== HEAP SUMMARY:
==2694==     in use at exit: 0 bytes in 0 blocks
==2694==   total heap usage: 2,669 allocs, 2,669 frees, 3,411,056 bytes allocated
==2694== 
==2694== All heap blocks were freed -- no leaks are possible
==2694== 
==2694== For counts of detected and suppressed errors, rerun with: -v
==2694== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree256_med_rand" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="40001" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="40001" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree12_double

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree12_strings

- **Points**: 5 / 5





---

This report was generated for **yutaroi2** using **e95ee4f7700208c805f47ba8f7a87c2dbfd9590d** (from **March 27th 2019, 12:15:00 am**)
