


## Score: 20/20 (100.00%)


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


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==2571== Memcheck, a memory error detector
==2571== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2571== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2571== Command: ./test -r xml "test_heapify_down_1"
==2571== 
==2571== 
==2571== HEAP SUMMARY:
==2571==     in use at exit: 0 bytes in 0 blocks
==2571==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==2571== 
==2571== All heap blocks were freed -- no leaks are possible
==2571== 
==2571== For counts of detected and suppressed errors, rerun with: -v
==2571== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==2577== Memcheck, a memory error detector
==2577== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2577== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2577== Command: ./test -r xml "test_heapify_down_2"
==2577== 
==2577== 
==2577== HEAP SUMMARY:
==2577==     in use at exit: 0 bytes in 0 blocks
==2577==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==2577== 
==2577== All heap blocks were freed -- no leaks are possible
==2577== 
==2577== For counts of detected and suppressed errors, rerun with: -v
==2577== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="73">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==2581== Memcheck, a memory error detector
==2581== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2581== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2581== Command: ./test -r xml "test_heapify_down_3"
==2581== 
==2581== 
==2581== HEAP SUMMARY:
==2581==     in use at exit: 0 bytes in 0 blocks
==2581==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==2581== 
==2581== All heap blocks were freed -- no leaks are possible
==2581== 
==2581== For counts of detected and suppressed errors, rerun with: -v
==2581== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="79">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==2586== Memcheck, a memory error detector
==2586== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2586== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2586== Command: ./test -r xml "test_heapify_down_4"
==2586== 
==2586== 
==2586== HEAP SUMMARY:
==2586==     in use at exit: 0 bytes in 0 blocks
==2586==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==2586== 
==2586== All heap blocks were freed -- no leaks are possible
==2586== 
==2586== For counts of detected and suppressed errors, rerun with: -v
==2586== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==2592== Memcheck, a memory error detector
==2592== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2592== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2592== Command: ./test -r xml "test_heapify_down_5"
==2592== 
==2592== 
==2592== HEAP SUMMARY:
==2592==     in use at exit: 0 bytes in 0 blocks
==2592==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==2592== 
==2592== All heap blocks were freed -- no leaks are possible
==2592== 
==2592== For counts of detected and suppressed errors, rerun with: -v
==2592== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="91">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==2596== Memcheck, a memory error detector
==2596== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2596== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2596== Command: ./test -r xml "test_heapify_down_6"
==2596== 
==2596== 
==2596== HEAP SUMMARY:
==2596==     in use at exit: 0 bytes in 0 blocks
==2596==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==2596== 
==2596== All heap blocks were freed -- no leaks are possible
==2596== 
==2596== For counts of detected and suppressed errors, rerun with: -v
==2596== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="100">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==2601== Memcheck, a memory error detector
==2601== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2601== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2601== Command: ./test -r xml "test_heapify_down_7"
==2601== 
==2601== 
==2601== HEAP SUMMARY:
==2601==     in use at exit: 0 bytes in 0 blocks
==2601==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==2601== 
==2601== All heap blocks were freed -- no leaks are possible
==2601== 
==2601== For counts of detected and suppressed errors, rerun with: -v
==2601== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="106">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==2607== Memcheck, a memory error detector
==2607== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2607== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2607== Command: ./test -r xml "test_heapify_down_8"
==2607== 
==2607== 
==2607== HEAP SUMMARY:
==2607==     in use at exit: 0 bytes in 0 blocks
==2607==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==2607== 
==2607== All heap blocks were freed -- no leaks are possible
==2607== 
==2607== For counts of detected and suppressed errors, rerun with: -v
==2607== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="112">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==2610== Memcheck, a memory error detector
==2610== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2610== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2610== Command: ./test -r xml "test_heapify_down_9"
==2610== 
==2610== 
==2610== HEAP SUMMARY:
==2610==     in use at exit: 0 bytes in 0 blocks
==2610==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==2610== 
==2610== All heap blocks were freed -- no leaks are possible
==2610== 
==2610== For counts of detected and suppressed errors, rerun with: -v
==2610== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="118">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==2616== Memcheck, a memory error detector
==2616== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2616== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2616== Command: ./test -r xml "test_heapify_down_10"
==2616== 
==2616== 
==2616== HEAP SUMMARY:
==2616==     in use at exit: 0 bytes in 0 blocks
==2616==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==2616== 
==2616== All heap blocks were freed -- no leaks are possible
==2616== 
==2616== For counts of detected and suppressed errors, rerun with: -v
==2616== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="124">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==2683== Memcheck, a memory error detector
==2683== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2683== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2683== Command: ./test -r xml "test_build_heap_1"
==2683== 
==2683== 
==2683== HEAP SUMMARY:
==2683==     in use at exit: 0 bytes in 0 blocks
==2683==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==2683== 
==2683== All heap blocks were freed -- no leaks are possible
==2683== 
==2683== For counts of detected and suppressed errors, rerun with: -v
==2683== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_2

- **Points**: 1 / 1

```
==2696== Memcheck, a memory error detector
==2696== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2696== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2696== Command: ./test -r xml "test_build_heap_2"
==2696== 
==2696== 
==2696== HEAP SUMMARY:
==2696==     in use at exit: 0 bytes in 0 blocks
==2696==   total heap usage: 1,874 allocs, 1,874 frees, 237,096 bytes allocated
==2696== 
==2696== All heap blocks were freed -- no leaks are possible
==2696== 
==2696== For counts of detected and suppressed errors, rerun with: -v
==2696== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="141">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==2702== Memcheck, a memory error detector
==2702== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2702== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2702== Command: ./test -r xml "test_build_heap_3"
==2702== 
==2702== 
==2702== HEAP SUMMARY:
==2702==     in use at exit: 0 bytes in 0 blocks
==2702==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==2702== 
==2702== All heap blocks were freed -- no leaks are possible
==2702== 
==2702== For counts of detected and suppressed errors, rerun with: -v
==2702== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="153">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==2706== Memcheck, a memory error detector
==2706== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2706== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2706== Command: ./test -r xml "test_build_heap_4"
==2706== 
==2706== 
==2706== HEAP SUMMARY:
==2706==     in use at exit: 0 bytes in 0 blocks
==2706==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==2706== 
==2706== All heap blocks were freed -- no leaks are possible
==2706== 
==2706== For counts of detected and suppressed errors, rerun with: -v
==2706== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="165">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_5

- **Points**: 1 / 1

```
==2711== Memcheck, a memory error detector
==2711== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2711== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2711== Command: ./test -r xml "test_build_heap_5"
==2711== 
==2711== 
==2711== HEAP SUMMARY:
==2711==     in use at exit: 0 bytes in 0 blocks
==2711==   total heap usage: 1,882 allocs, 1,882 frees, 239,736 bytes allocated
==2711== 
==2711== All heap blocks were freed -- no leaks are possible
==2711== 
==2711== For counts of detected and suppressed errors, rerun with: -v
==2711== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="177">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==2717== Memcheck, a memory error detector
==2717== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2717== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2717== Command: ./test -r xml "test_update_elem_1"
==2717== 
==2717== 
==2717== HEAP SUMMARY:
==2717==     in use at exit: 0 bytes in 0 blocks
==2717==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==2717== 
==2717== All heap blocks were freed -- no leaks are possible
==2717== 
==2717== For counts of detected and suppressed errors, rerun with: -v
==2717== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="192">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==2723== Memcheck, a memory error detector
==2723== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2723== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2723== Command: ./test -r xml "test_update_elem_2"
==2723== 
==2723== 
==2723== HEAP SUMMARY:
==2723==     in use at exit: 0 bytes in 0 blocks
==2723==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==2723== 
==2723== All heap blocks were freed -- no leaks are possible
==2723== 
==2723== For counts of detected and suppressed errors, rerun with: -v
==2723== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="198">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==2728== Memcheck, a memory error detector
==2728== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2728== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2728== Command: ./test -r xml "test_update_elem_3"
==2728== 
==2728== 
==2728== HEAP SUMMARY:
==2728==     in use at exit: 0 bytes in 0 blocks
==2728==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==2728== 
==2728== All heap blocks were freed -- no leaks are possible
==2728== 
==2728== For counts of detected and suppressed errors, rerun with: -v
==2728== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="204">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==2735== Memcheck, a memory error detector
==2735== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2735== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2735== Command: ./test -r xml "test_update_elem_4"
==2735== 
==2735== 
==2735== HEAP SUMMARY:
==2735==     in use at exit: 0 bytes in 0 blocks
==2735==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==2735== 
==2735== All heap blocks were freed -- no leaks are possible
==2735== 
==2735== For counts of detected and suppressed errors, rerun with: -v
==2735== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="210">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==2745== Memcheck, a memory error detector
==2745== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2745== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2745== Command: ./test -r xml "test_update_elem_5"
==2745== 
==2745== 
==2745== HEAP SUMMARY:
==2745==     in use at exit: 0 bytes in 0 blocks
==2745==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==2745== 
==2745== All heap blocks were freed -- no leaks are possible
==2745== 
==2745== For counts of detected and suppressed errors, rerun with: -v
==2745== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="216">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **yutaroi2** using **56b2831177462d72f0edd38333ed92e009558772** (from **April 8th 2019, 12:15:00 am**)
